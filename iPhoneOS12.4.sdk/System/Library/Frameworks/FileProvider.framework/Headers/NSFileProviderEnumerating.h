//
//  NSFileProviderEnumerating.h
//  FileProvider
//
//  Copyright (c) 2014-2017 Apple Inc. All rights reserved.
//

#import <FileProvider/NSFileProviderExtension.h>
#import <FileProvider/NSFileProviderItem.h>

NS_ASSUME_NONNULL_BEGIN

/**
 A user-defined chunk of data that defines a starting point to enumerate changes from.

 The size of a sync anchor should not exceed a combined 500 bytes.
 */
typedef NSData *NSFileProviderSyncAnchor NS_TYPED_EXTENSIBLE_ENUM;

/**
 A user- or system-defined chunk of data that defines a page to continue the enumeration from.
 Initial enumeration is started from one of the below system-defined pages.

 The size of a page should not exceed 500 bytes.
 */
typedef NSData *NSFileProviderPage NS_TYPED_EXTENSIBLE_ENUM;

FOUNDATION_EXPORT API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos)
NSFileProviderPage const NSFileProviderInitialPageSortedByDate;
FOUNDATION_EXPORT API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos)
NSFileProviderPage const NSFileProviderInitialPageSortedByName;

@protocol NSFileProviderEnumerationObserver <NSObject>

- (void)didEnumerateItems:(NSArray <id<NSFileProviderItem>> *)updatedItems;

/**
 Call this method after enumerating a full page of items.  If you set a non-nil
 nextPage, -[NSFileProviderEnumerator enumerateItemsToObserver:startingAtPage:]
 might be called with nextPage to enumerate more items.  This is typically
 driven by the user scrolling a UIDocumentBrowserViewController presenting a
 directory containing more child items that would fit in the view.

 Page data is limited to 500 bytes.  Setting a larger nextPage interrupts the
 enumeration.
 */
- (void)finishEnumeratingUpToPage:(nullable NSFileProviderPage)nextPage NS_SWIFT_NAME(finishEnumerating(upTo:));
- (void)finishEnumeratingWithError:(NSError *)error;
@end

@protocol NSFileProviderChangeObserver <NSObject>

/**
 Send updates to existing items, or insert new items.
 */
- (void)didUpdateItems:(NSArray <id<NSFileProviderItem>> *)updatedItems;

/**
 Delete existing items.  No-op if the item was unknown.
 */
- (void)didDeleteItemsWithIdentifiers:(NSArray <NSFileProviderItemIdentifier> *)deletedItemIdentifiers;

/**
 Call the following method every so often while sending changes, particularly
 while enumerating changes to NSFileProviderWorkingSetContainerItemIdentifier.
 If the device reboots during an enumeration, it would later resume starting
 at the latest known sync anchor.

 It is expected that the sync anchor passed here be different than the sync
 anchor that the enumeration started at, unless the client was already up to
 date on all the changes on the server, and didn't have any pending updates or
 deletions.
 
 Additionally, if the client is up to date on all the changes on the server it
 should set moreComing to NO.

 Sync anchor data is limited to 500 bytes.  Setting a larger anchor has the
 same effect as calling finishEnumeratingWithError with an expired sync anchor
 error.
 */
- (void)finishEnumeratingChangesUpToSyncAnchor:(NSFileProviderSyncAnchor)anchor
                                    moreComing:(BOOL)moreComing NS_SWIFT_NAME(finishEnumeratingChanges(upTo:moreComing:));

/**
 If the enumeration fails with NSFileProviderErrorSyncAnchorExpired, we will
 drop all cached data and start the enumeration over starting with sync anchor
 nil.
 */
- (void)finishEnumeratingWithError:(NSError *)error;

@end


@protocol NSFileProviderEnumerator <NSObject>

- (void)invalidate;

/**
 Enumerate items starting from the specified page, typically
 NSFileProviderInitialPageSortedByDate or NSFileProviderInitialPageSortedByName.

 Pagination allows large collections to be enumerated in multiple batches.  The
 sort order specified in the initial page is important even if the enumeration
 results will actually be sorted again before display.  If results are sorted
 correctly across pages, then the new results will be appended at the bottom of
 the list, probably not on screen, which is the best user experience.  Otherwise
 results from the second page might be inserted in the results from the first
 page, causing bizarre animations.

 The page data should contain whatever information is needed to resume the
 enumeration after the previous page.  If a file provider sends batches of 200
 items to -[NSFileProviderEnumerationObserver didEnumerateItems:] for example,
 then successive pages might contain offsets in increments of 200.
 */
- (void)enumerateItemsForObserver:(id<NSFileProviderEnumerationObserver>)observer
                   startingAtPage:(NSFileProviderPage)page NS_SWIFT_NAME(enumerateItems(for:startingAt:));

@optional
/**
 Enumerate changes starting from a sync anchor. This should enumerate /all/
 changes (not restricted to a specific page) since the given sync anchor.

 Until the enumeration update is invalidated, a call to -[NSFileProviderManager
 signalEnumeratorForContainerItemIdentifier:completionHandler:] will trigger a call
 to enumerateFromSyncAnchor with the latest known sync anchor, giving the file
 provider (app or extension) a chance to notify about changes.

 The anchor data should contain whatever information is needed to resume
 enumerating changes from the previous synchronization point.  A naive sync
 anchor might for example be the date of the last change that was sent from the
 server to the client, meaning that at that date, the client was in sync with
 all the server changes.  A request to enumerate changes from that sync anchor
 would only return the changes that happened after that date, which are
 therefore changes that the client doesn't yet know about.

 If anchor is nil, then the system is enumerating from scratch: the system wants
 to receives changes to reconstruct the list of items in this enumeration as if
 starting from an empty list.
 */
- (void)enumerateChangesForObserver:(id<NSFileProviderChangeObserver>)observer
                     fromSyncAnchor:(NSFileProviderSyncAnchor)syncAnchor NS_SWIFT_NAME(enumerateChanges(for:from:));

/**
 Request the current sync anchor.

 To keep an enumeration updated, the system will typically
 - request the current sync anchor (1)
 - enumerate items starting with an initial page
 - continue enumerating pages, each time from the page returned in the previous
   enumeration, until finishEnumeratingUpToPage: is called with nextPage set to
   nil
 - enumerate changes starting from the sync anchor returned in (1)
 - continue enumerating changes, each time from the sync anchor returned in the
   previous enumeration, until finishEnumeratingChangesUpToSyncAnchor: is called
   with moreComing:NO

 This method will be called again if you signal that there are more changes with
 -[NSFileProviderManager signalEnumeratorForContainerItemIdentifier:completionHandler:] and again,
 the system will enumerate changes until finishEnumeratingChangesUpToSyncAnchor:
 is called with moreComing:NO.
 */
- (void)currentSyncAnchorWithCompletionHandler:(void(^)(_Nullable NSFileProviderSyncAnchor currentAnchor))completionHandler;

@end

@interface NSFileProviderExtension (NSFileProviderEnumeration)

/**
 Create an enumerator for an item.

 When the user opens the browse tab of the UIDocumentsBrowserViewController and
 selects a file provider, this is called with
 NSFileProviderRootContainerItemIdentifier, and -[NSFileProviderEnumerator
 enumerateItemsForObserver:startingAtPage:] is immediately called to list the
 first items available under at the root level of the file provider.

 As the user navigates down into directories, new enumerators are created with
 this method, passing in the itemIdentifier of those directories.  Past
 enumerators are then invalidated.

 This method is also called with
 NSFileProviderWorkingSetContainerItemIdentifier, which is enumerated with
 -[NSFileProviderEnumerator enumerateChangesForObserver:fromSyncAnchor:].  That
 enumeration is special in that it isn't driven by the
 UIDocumentsBrowserViewController.  It happens in the background to sync the
 working set down to the device.

 This is also used to subscribe to live updates for a single document.  In that
 case, -[NSFileProviderEnumerator enumerateChangesToObserver:fromSyncAnchor:]
 will be called and the enumeration results shouldn't include items other than
 the very item that the enumeration was started on.

 If returning nil, you must set the error out parameter.
 */
- (nullable id<NSFileProviderEnumerator>)enumeratorForContainerItemIdentifier:(NSFileProviderItemIdentifier)containerItemIdentifier
                                                                        error:(NSError **)error NS_SWIFT_NAME(enumerator(for:));

@end

NS_ASSUME_NONNULL_END

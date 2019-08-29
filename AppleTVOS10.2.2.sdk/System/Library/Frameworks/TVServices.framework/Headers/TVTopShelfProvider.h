//
//  TVTopShelfProvider.h
//  TVServices
//
//  Copyright (c) 2014-2015 Apple, Inc. All rights reserved.
//

#import <Foundation/NSObject.h>
#import <Foundation/NSArray.h>
#import <TVServices/TVContentItem.h>
#import <TVServices/TVServicesDefines.h>


NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TVTopShelfContentStyle) {
    TVTopShelfContentStyleInset = 1,
    TVTopShelfContentStyleSectioned = 2
} NS_AVAILABLE_IOS(9_0);

/*!
 @protocol		TVTopShelfProvider
 @abstract		A protocol implemented by applications to provided items for
                display in the main menu's top shelf of an Apple TV.
 @discussion	This is a protocol which can be adopted by an app's TV Services
                extension, on the principal class of the extension.
                Apps which want to provide dynamic content to the top shelf,
                rather than have the system use the static image submitted with
                the application, implement a TV Services extension and adopt
                this protocol. The various supported user interface styles
                for the display of the content items are given by the
                TVTopShelfContentStyle enumeration.
 */
@protocol TVTopShelfProvider

/*!
 @property		topShelfStyle
 @abstract		The user interface style that should be used to display the
                content items.
 */
@required
@property (readonly) TVTopShelfContentStyle topShelfStyle;

/*!
 @property		topShelfItems
 @abstract		An array of TVContentItems for display.
 @discussion    If the value is an empty array, the system may fall back to using
                the containing application's static main menu top shelf image.
 */
@required
@property (readonly) NSArray <TVContentItem *> *topShelfItems;

@end

/*!
 @constant		TVTopShelfItemsDidChangeNotification
 @abstract		The name of a notification the extension or containing app can
                post to tell observers within the process, and the system, that
                the Top Shelf data has changed.
 @discussion    Post the notification to the process-local NSNotificationCenter
                ([NSNotificationCenter defaultCenter]). The system doesn't care about
                the object or userInfo of the notification. The system will refetch
                the data from the extension, at some point in the future (not
                necessarily right away).
 */
TV_EXTERN NSString *const TVTopShelfItemsDidChangeNotification NS_AVAILABLE_IOS(9_0);

/*!
 @function      TVTopShelfSizeForImageShape
 @abstract      Returns the ideal size of an image, the size which doesn't require
                scaling, for the given user interface style and image shape, in the
                current running version of the OS.
 @discussion    For shapes not supported in the given style, returns CGSizeZero.
 */
TV_EXTERN CGSize TVTopShelfImageSizeForShape(TVContentItemImageShape shape, TVTopShelfContentStyle style) NS_AVAILABLE_IOS(9_0);

NS_ASSUME_NONNULL_END

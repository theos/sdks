#if !__has_include(<PassKitCore/PKIdentityDocumentDescriptor.h>) || PK_USE_PUBLIC_PASSKIT
//
//  PKIdentityDocumentDescriptor.h
//    PassKit
//
//  Copyright © 2022 Apple, Inc. All rights reserved.
//


#import <Foundation/Foundation.h>

@class PKIdentityElement;
@class PKIdentityIntentToStore;

NS_ASSUME_NONNULL_BEGIN

/// "Descriptor" objects describe types of documents that can be requested. Different document
/// types may have different sets of supported elements, functionality, or response formats.
/// Clients should not define their own implementations of this protocol or subclass existing implementations.
API_AVAILABLE(ios(16.0)) API_UNAVAILABLE(macos, watchos, tvos)
@protocol PKIdentityDocumentDescriptor <NSObject>

/// Set of elements that will be requested from the document.
@property (nonatomic, readonly) NSArray<PKIdentityElement *> *elements;

/// Intent to store for the given element, or nil if the element has not been added to this descriptor.
- (nullable PKIdentityIntentToStore *)intentToStoreForElement:(PKIdentityElement *)element NS_SWIFT_NAME(intentToStore(element:));

/// Adds the set of elements and associates them with the intent to store. This method can be
/// called multple times with the same intent to store to append additional elements. If the same
/// element is specified multiple times with different intents to store, the most recent one wins.
- (void)addElements:(NSArray<PKIdentityElement *> *)elements withIntentToStore:(PKIdentityIntentToStore *)intentToStore NS_SWIFT_NAME(addElements(_:intentToStore:));

@end

/// Used to request information from a user's driver's license (or equivalent document).
API_AVAILABLE(ios(16.0)) API_UNAVAILABLE(macos, watchos, tvos) 
@interface PKIdentityDriversLicenseDescriptor: NSObject <PKIdentityDocumentDescriptor>

@end

NS_ASSUME_NONNULL_END


#else
#import <TargetConditionals.h>
#import <PassKitCore/PKIdentityDocumentDescriptor.h>
#endif

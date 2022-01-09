//
//  NSFileProviderThumbnailing.h
//  FileProvider
//
//  Copyright © 2017 Apple Inc. All rights reserved.
//

#import <FileProvider/NSFileProviderDefines.h>
#import <CoreGraphics/CoreGraphics.h>
#import <FileProvider/NSFileProviderExtension.h>
#import <FileProvider/NSFileProviderItem.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSFileProviderExtension (NSFileProviderThumbnailing)

/**
 The system calls this method to fetch thumbnails.

 The @p perThumbnailCompletionHandler should be called for each thumbnail, and
 @p completionHandler only after all the per thumbnail completion blocks.

 In the event of a global error, the implementation is allowed to skip calling
 the @p perThumbnailCompletionHandler for individual thumbnails. In that case,
 the @p completionHandler's error parameter would apply to all item identifiers
 for which @p perThumbnailCompletionHandler had not been called.

 If there is no thumbnail for a given item, the @p perThumbnailCompletionHandler
 should be called with its @p imageData and @p error parameters both
 set to nil.

 If the system decides that an in-flight thumbnail request is not needed anymore,
 it will call the returned @p NSProgress object's @p -cancel method,
 at which time the implementation should clean up any held resources.
 */
- (NSProgress *)fetchThumbnailsForItemIdentifiers:(NSArray<NSFileProviderItemIdentifier> *)itemIdentifiers
                                    requestedSize:(CGSize)size
                    perThumbnailCompletionHandler:(void (^)(NSFileProviderItemIdentifier identifier, NSData * _Nullable imageData, NSError * _Nullable error))perThumbnailCompletionHandler
                                completionHandler:(void (^)(NSError * _Nullable error))completionHandler NS_SWIFT_NAME(fetchThumbnails(for:requestedSize:perThumbnailCompletionHandler:completionHandler:)) API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);

@end

NS_ASSUME_NONNULL_END

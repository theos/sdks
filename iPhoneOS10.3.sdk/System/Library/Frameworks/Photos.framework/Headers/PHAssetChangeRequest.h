//
//  PHAssetChangeRequest.h
//  Photos
//
//  Copyright (c) 2013 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Photos/PHAsset.h>
#import <Photos/PHContentEditingOutput.h>
#import <Photos/PhotosDefines.h>

@class UIImage;
@class CLLocation;
@class PHAssetResource;
@class PHObjectPlaceholder;
@class PHContentEditingInputRequestOptions;

NS_ASSUME_NONNULL_BEGIN

// PHAssetChangeRequest can only be created or used within a -[PHPhotoLibrary performChanges:] or -[PHPhotoLibrary performChangesAndWait:] block.
PHOTOS_CLASS_AVAILABLE_IOS_TVOS(8_0, 10_0) @interface PHAssetChangeRequest : NSObject

#pragma mark - Creating Assets

// Basic asset creation. For finer-grained control, see PHAssetCreationRequest.
+ (instancetype)creationRequestForAssetFromImage:(UIImage *)image;
+ (nullable instancetype)creationRequestForAssetFromImageAtFileURL:(NSURL *)fileURL;
+ (nullable instancetype)creationRequestForAssetFromVideoAtFileURL:(NSURL *)fileURL;

// This can be used to fetch the newly created asset after the change block has completed by using -localIdentifier
// It can also be added directly to collections within the current change block
@property (nonatomic, strong, readonly, nullable) PHObjectPlaceholder *placeholderForCreatedAsset;

#pragma mark - Deleting Assets

+ (void)deleteAssets:(id<NSFastEnumeration>)assets;

#pragma mark - Modifying Assets

// if the asset does not allow the type of change requested, these methods will raise an exception, call canPerformEditOperation: on the asset to determine if the type of edit operation is allowed.
+ (instancetype)changeRequestForAsset:(PHAsset *)asset;

@property (nonatomic, strong, readwrite, nullable) NSDate *creationDate;
@property (nonatomic, strong, readwrite, nullable) CLLocation *location;
@property (nonatomic, assign, readwrite, getter=isFavorite) BOOL favorite;

// a hidden asset will be excluded from moment collections, but may still be included in other smart or regular album collections
@property (nonatomic, assign, readwrite, getter=isHidden) BOOL hidden;

#pragma mark - Editing Asset Contents

@property (nonatomic, strong, readwrite, nullable) PHContentEditingOutput *contentEditingOutput;

- (void)revertAssetContentToOriginal;

@end


typedef NSUInteger PHContentEditingInputRequestID PHOTOS_AVAILABLE_IOS_TVOS(8_0, 10_0);

PHOTOS_CLASS_AVAILABLE_IOS_TVOS(8_0, 10_0) @interface PHContentEditingInputRequestOptions : NSObject

// Block to be provided by the client, used to determine if the given adjustment data can be handled (i.e. can be decoded and rendered).
@property (nonatomic, copy) BOOL (^canHandleAdjustmentData)(PHAdjustmentData *adjustmentData);

// Used if data is not available locally and needs to be retrieved from iCloud.
@property (nonatomic, assign, getter = isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic, copy, nullable) void (^progressHandler)(double progress, BOOL *stop);

@end


@interface PHAsset (PHContentEditingInput)

// Completion and progress handlers are called on an arbitrary serial queue.
- (PHContentEditingInputRequestID)requestContentEditingInputWithOptions:(nullable PHContentEditingInputRequestOptions *)options completionHandler:(void (^)(PHContentEditingInput *__nullable contentEditingInput, NSDictionary *info))completionHandler PHOTOS_AVAILABLE_IOS_TVOS(8_0, 10_0);
- (void)cancelContentEditingInputRequest:(PHContentEditingInputRequestID)requestID PHOTOS_AVAILABLE_IOS_TVOS(8_0, 10_0);

@end

// Completion handler info dictionary keys
extern NSString *const PHContentEditingInputResultIsInCloudKey PHOTOS_AVAILABLE_IOS_TVOS(8_0, 10_0);
extern NSString *const PHContentEditingInputCancelledKey PHOTOS_AVAILABLE_IOS_TVOS(8_0, 10_0);
extern NSString *const PHContentEditingInputErrorKey PHOTOS_AVAILABLE_IOS_TVOS(8_0, 10_0);


@interface PHContentEditingOutput (PHAssetChangeRequest)

// Create a PHContentEditingOutput from a newly created asset within the change request block
- (instancetype)initWithPlaceholderForCreatedAsset:(PHObjectPlaceholder *)placeholderForCreatedAsset;

@end

NS_ASSUME_NONNULL_END

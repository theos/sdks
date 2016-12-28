//
//  MPMusicPlayerQueueDescriptor.h
//  MediaPlayerFramework
//
//  Copyright © 2016 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class MPMediaItem, MPMediaItemCollection, MPMediaQuery;

MP_EXTERN_CLASS_AVAILABLE(10_1)
__TVOS_PROHIBITED
@interface MPMusicPlayerQueueDescriptor : NSObject<NSSecureCoding>

@end

MP_EXTERN_CLASS_AVAILABLE(10_1)
__TVOS_PROHIBITED
@interface MPMusicPlayerMediaItemQueueDescriptor : MPMusicPlayerQueueDescriptor

- (instancetype)initWithQuery:(MPMediaQuery *)query;
- (instancetype)initWithItemCollection:(MPMediaItemCollection *)itemCollection;

@property (nonatomic, copy, readonly) MPMediaQuery *query;
@property (nonatomic, strong, readonly) MPMediaItemCollection *itemCollection;
@property (nonatomic, strong, nullable) MPMediaItem *startItem;

- (void)setStartTime:(NSTimeInterval)startTime forItem:(MPMediaItem *)mediaItem;
- (void)setEndTime:(NSTimeInterval)endTime forItem:(MPMediaItem *)mediaItem;

@end

MP_EXTERN_CLASS_AVAILABLE(10_1)
__TVOS_PROHIBITED
@interface MPMusicPlayerStoreQueueDescriptor : MPMusicPlayerQueueDescriptor

- (instancetype)initWithStoreIDs:(NSArray<NSString *> *)storeIDs;

@property (nonatomic, copy, nullable) NSArray<NSString *> *storeIDs;
@property (nonatomic, copy, nullable) NSString *startItemID;

- (void)setStartTime:(NSTimeInterval)startTime forItemWithStoreID:(NSString *)storeID;
- (void)setEndTime:(NSTimeInterval)endTime forItemWithStoreID:(NSString *)storeID;

@end

NS_ASSUME_NONNULL_END

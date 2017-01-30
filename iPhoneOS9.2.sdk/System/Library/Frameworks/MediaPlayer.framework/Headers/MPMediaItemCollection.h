//
//  MPMediaItemCollection.h
//  MediaPlayer
//
//  Copyright 2008 Apple, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <MediaPlayer/MPMediaItem.h>

NS_ASSUME_NONNULL_BEGIN

// An MPMediaItemCollection is a collection of related MPMediaItems in a media library.

MP_EXTERN_CLASS_AVAILABLE(3_0)
__TVOS_PROHIBITED
@interface MPMediaItemCollection : MPMediaEntity

// Creates a media item collection by copying an array of MPMediaItems.
+ (MPMediaItemCollection *)collectionWithItems:(NSArray<MPMediaItem *> *)items;

- (instancetype)initWithItems:(NSArray<MPMediaItem *> *)items NS_DESIGNATED_INITIALIZER;

// Returns the MPMediaItems in the collection.
@property (nonatomic, readonly) NSArray<MPMediaItem *> *items;

// Returns an item representative of other items in the collection.
// This item can be used for common item properties in the collection, often more efficiently than fetching an item out of the items array.
@property (nonatomic, readonly, nullable) MPMediaItem *representativeItem;

// Returns the number of items in the collection.
// In some cases, this is more efficient than fetching the items array and asking for the count.
@property (nonatomic, readonly) NSUInteger count;

// Returns the types of media which the collection holds.
@property (nonatomic, readonly) MPMediaType mediaTypes;

@end

NS_ASSUME_NONNULL_END

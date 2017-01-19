//
//  MPMediaPlaylist.h
//  MediaPlayer
//
//  Copyright 2008 Apple, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>
#import <MediaPlayer/MPMediaItemCollection.h>

NS_ASSUME_NONNULL_BEGIN

@class MPMediaItem;

// A playlist may have any number of MPMediaPlaylistAttributes associated.
typedef NS_OPTIONS(NSUInteger, MPMediaPlaylistAttribute) {
    MPMediaPlaylistAttributeNone    = 0,
    MPMediaPlaylistAttributeOnTheGo = (1 << 0), // if set, the playlist was created on a device rather than synced from iTunes
    MPMediaPlaylistAttributeSmart   = (1 << 1),
    MPMediaPlaylistAttributeGenius  = (1 << 2)
} NS_ENUM_AVAILABLE_IOS(3_0) __TVOS_PROHIBITED;

// An MPMediaPlaylist is a collection of related MPMediaItems in an MPMediaLibrary.
// Playlists have a unique identifier which persists across application launches.

MP_EXTERN_CLASS_AVAILABLE(3_0)
__TVOS_PROHIBITED
@interface MPMediaPlaylist : MPMediaItemCollection

#pragma mark - Properties

// Properties marked filterable can also be used to build MPMediaPropertyPredicates (see MPMediaQuery.h).

MP_EXTERN NSString * const MPMediaPlaylistPropertyPersistentID;                             // filterable
@property (nonatomic, readonly) MPMediaEntityPersistentID persistentID NS_AVAILABLE_IOS(7_0);

MP_EXTERN NSString * const MPMediaPlaylistPropertyName;                                     // filterable
@property (nonatomic, readonly, nullable) NSString *name NS_AVAILABLE_IOS(7_0);

MP_EXTERN NSString * const MPMediaPlaylistPropertyPlaylistAttributes;                       // filterable
@property (nonatomic, readonly) MPMediaPlaylistAttribute playlistAttributes NS_AVAILABLE_IOS(7_0);

// For playlists with attribute MPMediaPlaylistAttributeGenius, the seedItems are the MPMediaItems which were used to the generate the playlist.
// Returns nil for playlists without MPMediaPlaylistAttributeGenius set.
MP_EXTERN NSString * const MPMediaPlaylistPropertySeedItems;
@property (nonatomic, readonly, nullable) NSArray<MPMediaItem *> *seedItems NS_AVAILABLE_IOS(8_0);

@end

NS_ASSUME_NONNULL_END

//
//  TVPlayback.h
//  TVMLKit
//
//  Copyright © 2018 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AVPlayer;
@protocol TVPlaying;
@class TVPlaylist;
@class TVMediaItem;
@class TVTimeRange;
@class TVHighlight;
@class TVHighlightGroup;
@class JSContext;
@class JSValue;

NS_ASSUME_NONNULL_BEGIN

typedef NSString* TVPlaybackEvent NS_TYPED_EXTENSIBLE_ENUM NS_SWIFT_NAME(TVPlaybackEvent) NS_AVAILABLE_IOS(12_0);
typedef NSString* TVMediaItemType NS_TYPED_EXTENSIBLE_ENUM NS_SWIFT_NAME(TVMediaItem.MediaType) NS_AVAILABLE_IOS(12_0);
typedef NSString* TVPlaybackEventProperty NS_TYPED_EXTENSIBLE_ENUM NS_SWIFT_NAME(TVPlaybackEventProperty) NS_AVAILABLE_IOS(12_0);

extern TVMediaItemType const TVMediaItemTypeVideo NS_AVAILABLE_IOS(12_0);
extern TVMediaItemType const TVMediaItemTypeAudio NS_AVAILABLE_IOS(12_0);

typedef NSString* TVMediaItemContentRatingDomain NS_TYPED_EXTENSIBLE_ENUM NS_SWIFT_NAME(TVMediaItem.ContentRatingDomain);

extern TVMediaItemContentRatingDomain const TVMediaItemContentRatingDomainMovie NS_AVAILABLE_IOS(12_0);
extern TVMediaItemContentRatingDomain const TVMediaItemContentRatingDomainTVShow NS_AVAILABLE_IOS(12_0);
extern TVMediaItemContentRatingDomain const TVMediaItemContentRatingDomainMusic NS_AVAILABLE_IOS(12_0);

NS_ENUM_AVAILABLE_IOS(12_0) typedef NS_ENUM(NSInteger, TVPlaybackState) {
    TVPlaybackStateUndefined,
    TVPlaybackStateBegin,
    TVPlaybackStateLoading,
    TVPlaybackStatePlaying,
    TVPlaybackStatePaused,
    TVPlaybackStateScanning, // Either fast forwarding or rewinding.
    TVPlaybackStateFastForwarding,
    TVPlaybackStateRewinding,
    TVPlaybackStateEnd
};

NS_ENUM_AVAILABLE_IOS(12_0) typedef NS_ENUM(NSInteger, TVPlaylistRepeatMode) {
    TVPlaylistRepeatModeNone = 0,
    TVPlaylistRepeatModeAll,
    TVPlaylistRepeatModeOne
} NS_SWIFT_NAME(TVPlaylist.RepeatMode);

NS_ENUM_AVAILABLE_IOS(12_0) typedef NS_ENUM(NSInteger, TVPlaylistEndAction) {
    TVPlaylistEndActionStop = 0,
    TVPlaylistEndActionPause,
    TVPlaylistEndActionWaitForMoreItems
} NS_SWIFT_NAME(TVPlaylist.EndAction);

////////////////////////////////////////////////////////////////////////////////
#pragma mark - Event support
////////////////////////////////////////////////////////////////////////////////

/*!
 @discussion An event user info marshaling protocol for sending and receiving
    info to and from JS.
 */
NS_CLASS_AVAILABLE_IOS(12_0) @protocol TVPlaybackEventMarshaling <NSObject>

@property (nonatomic, strong, readonly, nullable) NSDictionary<TVPlaybackEventProperty, id> *properties;

@optional

- (void)processReturnJSValue:(JSValue *)value inContext:(JSContext *)jsContext NS_SWIFT_NAME(processReturnValue(value:in:));

@end

/*!
 @discussion Event object that encapsulates its identity and user info for
    custom events.
 */
NS_CLASS_AVAILABLE_IOS(12_0) @interface TVPlaybackCustomEventUserInfo : NSObject <TVPlaybackEventMarshaling>

- (instancetype)initWithProperties:(nullable NSDictionary<TVPlaybackEventProperty, id> *)properties expectsReturnValue:(BOOL)expectsReturnValue NS_SWIFT_NAME(init(properties:expectsReturnValue:));

@property (nonatomic, assign, readwrite) BOOL expectsReturnValue;

// Return values only available if expectsReturnValue is set.
@property (nonatomic, strong, readonly, nullable) id returnValue;

@end

////////////////////////////////////////////////////////////////////////////////
#pragma mark - TVPlaylist
////////////////////////////////////////////////////////////////////////////////

NS_CLASS_AVAILABLE_IOS(12_0) @interface TVPlaylist : NSObject
// Properties are KV-Obserable

// Ordered list of media items that the player should play. KVO-observable
@property (nonatomic, copy, readonly) NSArray<TVMediaItem *> *mediaItems;

// Action for the player to take once its reached the end of it's playlist
@property (nonatomic, assign, readonly) TVPlaylistEndAction endAction;

// How should the player handle repeats
@property (nonatomic, assign, readonly) TVPlaylistRepeatMode repeatMode;

// Allows user defined info to be passed from JS to the playlist
@property (nonatomic, copy, readonly, nullable) NSDictionary<NSString *,id> *userInfo;

@end

////////////////////////////////////////////////////////////////////////////////
#pragma mark - TVMediaItem
////////////////////////////////////////////////////////////////////////////////

NS_CLASS_AVAILABLE_IOS(12_0) @interface TVMediaItem : NSObject
// Properties are KV-Obserable

// The type of the item. Eg. 'video' or 'audio'.
@property (nonatomic, strong, readonly, nullable) TVMediaItemType type;

// The URL from which to retrieve the item.
@property (nonatomic, strong, readonly, nullable) NSURL *url;

// Title of the item.
@property (nonatomic, strong, readonly, nullable) NSString *title;

// Subtitle of the item.
@property (nonatomic, strong, readonly, nullable) NSString *subtitle;

// Description of the item.
@property (nonatomic, strong, readonly, nullable) NSString *itemDescription;

// Domain to which the rating applies. Eg. 'movie', 'tvshow', or 'music'.
@property (nonatomic, strong, readonly, nullable) TVMediaItemContentRatingDomain contentRatingDomain;

// Numerical value that normalizes a regions country code human readable content rating to a value between 0-1000.
@property (nonatomic, strong, readonly, nullable) NSNumber *contentRatingRanking;

// URL to the artwork for this item.
@property (nonatomic, strong, readonly, nullable) NSURL *artworkImageURL;

// Flag indicating whether an audio asset contains explicit lyrics/content.
@property (nonatomic, readonly) BOOL containsExplicitContent;

// Player starts from this time.
@property (nonatomic, assign, readonly) NSTimeInterval resumeTime;

// This property gets the interstitals for the item.
@property (nonatomic, strong, readonly) NSArray<TVTimeRange *> *interstitials;

// This property gets highlight groups for the item.
@property (nonatomic, strong, readonly) NSArray<TVHighlightGroup *> *highlightGroups;

// Extra metadata for the media item
@property (nonatomic, strong, readonly) NSDictionary<NSString *,id> *userInfo;

@end

////////////////////////////////////////////////////////////////////////////////
#pragma mark - TVTimeRange
////////////////////////////////////////////////////////////////////////////////

NS_CLASS_AVAILABLE_IOS(12_0) NS_SWIFT_NAME(TVMediaItem.TimeRange) @interface TVTimeRange : NSObject

@property (nonatomic, assign, readonly) NSTimeInterval startTime;

@property (nonatomic, assign, readonly) NSTimeInterval endTime;

@property (nonatomic, assign, readonly) NSTimeInterval duration;

@end

////////////////////////////////////////////////////////////////////////////////
#pragma mark - TVHighlightGroup
////////////////////////////////////////////////////////////////////////////////

NS_CLASS_AVAILABLE_IOS(12_0) NS_SWIFT_NAME(TVMediaItem.HighlightGroup) @interface TVHighlightGroup : NSObject

@property (nonatomic, strong, readonly, nullable) NSString *localizedName;

@property (nonatomic, strong, readonly) NSArray<TVHighlight *> *highlights;

@end

////////////////////////////////////////////////////////////////////////////////
#pragma mark - TVHighlight
////////////////////////////////////////////////////////////////////////////////

NS_CLASS_AVAILABLE_IOS(12_0) NS_SWIFT_NAME(TVMediaItem.Highlight) @interface TVHighlight : NSObject

@property (nonatomic, strong, readonly, nullable) NSString *localizedName;

@property (nonatomic, strong, readonly, nullable) NSString *highlightDescription;

@property (nonatomic, strong, readonly) TVTimeRange *timeRange;

@property (nonatomic, strong, readonly, nullable) NSURL *imageURL;

@end

////////////////////////////////////////////////////////////////////////////////
#pragma mark - TVPlayer
////////////////////////////////////////////////////////////////////////////////
NS_CLASS_AVAILABLE_IOS(12_0) @interface TVPlayer : NSObject

- (instancetype)initWithPlayer:(AVPlayer *)player NS_SWIFT_NAME(init(player:));

// The underlying AVPlayer object.
@property (nonatomic, strong, readonly) AVPlayer *player;

// List of media items to be played by this playlist.
@property (nonatomic, strong, readonly, nullable) TVPlaylist *playlist;

// Provide information about current state.
@property (nonatomic, assign, readonly) TVPlaybackState state;

// The current media item being played.
@property (nonatomic, strong, readonly, nullable) TVMediaItem *currentMediaItem;

// The next media item to be played (might not be obvious if the third party implements shuffling)
@property (nonatomic, strong, readonly, nullable) TVMediaItem *nextMediaItem;

// The previous media item that was played
@property (nonatomic, strong, readonly, nullable) TVMediaItem *previousMediaItem;

// Dispatches an event to the player in JavaScript, marshaling the properties
// and return values through the user info object provided.
- (void)dispatchEvent:(TVPlaybackEvent)event userInfo:(nullable id<TVPlaybackEventMarshaling>)userInfo completion:(nullable void (^)(BOOL evaluated))completion NS_SWIFT_NAME(dispatch(event:userInfo:completion:));

// Additional player controls
- (void)pause;
- (void)next;
- (void)previous;

// Move to the media item at the index in the playlist
- (void)changeToMediaItemAtIndex:(NSInteger)index NS_SWIFT_NAME(setCurrentMediaItem(toItemAtIndex:));

@end

NS_ASSUME_NONNULL_END

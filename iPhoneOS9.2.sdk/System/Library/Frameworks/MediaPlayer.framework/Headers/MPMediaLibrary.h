//
//  MPMediaLibrary.h
//  MediaPlayer
//
//  Copyright 2008 Apple, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class MPMediaQuery;

// MPMediaLibrary represents a collection of media on a device, and can be used 
// to fetch items and playlists from the user's synced iTunes library.
// 
// See MPMediaQuery.h for a list of common queries or to build a custom query 
// from a chain of filter predicates.

// -----------------------------------------------------------------------------


MP_EXTERN_CLASS_AVAILABLE(3_0)
__TVOS_PROHIBITED
@interface MPMediaLibrary : NSObject <NSSecureCoding>

+ (MPMediaLibrary *)defaultMediaLibrary;

// Returns the date at which the media library was last modified.
@property(nonatomic, readonly) NSDate *lastModifiedDate;

// MPMediaLibraryDidChangeNotification will be posted when a sync happens.
- (void)beginGeneratingLibraryChangeNotifications;
- (void)endGeneratingLibraryChangeNotifications;

@end


// -----------------------------------------------------------------------------
// Notifications

// Any items or playlists which were previously cached should be re-evaluated from queries when MPMediaLibraryDidChangeNotification is posted.
MP_EXTERN __TVOS_PROHIBITED NSString * const MPMediaLibraryDidChangeNotification;

NS_ASSUME_NONNULL_END

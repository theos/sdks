//
//  INPlaybackRepeatMode.h
//  Intents
//
//  Copyright (c) 2016-2020 Apple Inc. All rights reserved.
//

#ifndef INPlaybackRepeatMode_h
#define INPlaybackRepeatMode_h

#import <Foundation/Foundation.h>
#import <Intents/IntentsDefines.h>

typedef NS_ENUM(NSInteger, INPlaybackRepeatMode) {
    INPlaybackRepeatModeUnknown = 0,
    INPlaybackRepeatModeNone,
    INPlaybackRepeatModeAll,
    INPlaybackRepeatModeOne,
} API_AVAILABLE(ios(12.0), watchos(5.0)) API_UNAVAILABLE(macos, tvos);

#endif // INPlaybackRepeatMode_h

//
//  INCarAudioSource.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#ifndef INCarAudioSource_h
#define INCarAudioSource_h

#import <Foundation/Foundation.h>
#import <Intents/IntentsDefines.h>

typedef NS_ENUM(NSInteger, INCarAudioSource) {
    INCarAudioSourceUnknown = 0,
    INCarAudioSourceCarPlay,
    INCarAudioSourceiPod,
    INCarAudioSourceRadio,
    INCarAudioSourceBluetooth,
    INCarAudioSourceAUX,
    INCarAudioSourceUSB,
    INCarAudioSourceMemoryCard,
    INCarAudioSourceOpticalDrive,
    INCarAudioSourceHardDrive,
} API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macosx);

#endif // INCarAudioSource_h

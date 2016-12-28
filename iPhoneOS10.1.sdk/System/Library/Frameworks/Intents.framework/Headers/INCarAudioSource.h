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
};

#endif // INCarAudioSource_h

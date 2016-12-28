//
//  INRadioType.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#ifndef INRadioType_h
#define INRadioType_h

#import <Foundation/Foundation.h>

#import <Intents/IntentsDefines.h>

typedef NS_ENUM(NSInteger, INRadioType) {
    INRadioTypeUnknown = 0,
    INRadioTypeAM,
    INRadioTypeFM,
    INRadioTypeHD,
    INRadioTypeSatellite,
    INRadioTypeDAB,
};

#endif // INRadioType_h

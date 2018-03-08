//
//  INRelativeSetting.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#ifndef INRelativeSetting_h
#define INRelativeSetting_h

#import <Foundation/Foundation.h>
#import <Intents/IntentsDefines.h>

typedef NS_ENUM(NSInteger, INRelativeSetting) {
    INRelativeSettingUnknown = 0,
    INRelativeSettingLowest,
    INRelativeSettingLower,
    INRelativeSettingHigher,
    INRelativeSettingHighest,
} API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macosx);

#endif // INRelativeSetting_h

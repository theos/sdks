//
//  INCarDefroster.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#ifndef INCarDefroster_h
#define INCarDefroster_h

#import <Foundation/Foundation.h>
#import <Intents/IntentsDefines.h>

typedef NS_ENUM(NSInteger, INCarDefroster) {
    INCarDefrosterUnknown = 0,
    INCarDefrosterFront,
    INCarDefrosterRear,
    INCarDefrosterAll,
} API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macosx);

#endif // INCarDefroster_h

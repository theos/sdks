//
//  INCarSeat.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#ifndef INCarSeat_h
#define INCarSeat_h

#import <Foundation/Foundation.h>
#import <Intents/IntentsDefines.h>

typedef NS_ENUM(NSInteger, INCarSeat) {
    INCarSeatUnknown = 0,
    INCarSeatDriver,
    INCarSeatPassenger,
    INCarSeatFrontLeft,
    INCarSeatFrontRight,
    INCarSeatFront,
    INCarSeatRearLeft,
    INCarSeatRearRight,
    INCarSeatRear,
    INCarSeatThirdRowLeft,
    INCarSeatThirdRowRight,
    INCarSeatThirdRow,
    INCarSeatAll,
} API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macosx);

#endif // INCarSeat_h

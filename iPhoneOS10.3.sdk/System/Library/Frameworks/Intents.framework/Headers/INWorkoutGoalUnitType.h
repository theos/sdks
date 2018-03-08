//
//  INWorkoutGoalUnitType.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#ifndef INWorkoutGoalUnitType_h
#define INWorkoutGoalUnitType_h

#import <Foundation/Foundation.h>
#import <Intents/IntentsDefines.h>

typedef NS_ENUM(NSInteger, INWorkoutGoalUnitType) {
    INWorkoutGoalUnitTypeUnknown = 0,
    INWorkoutGoalUnitTypeInch,
    INWorkoutGoalUnitTypeMeter,
    INWorkoutGoalUnitTypeFoot,
    INWorkoutGoalUnitTypeMile,
    INWorkoutGoalUnitTypeYard,
    INWorkoutGoalUnitTypeSecond,
    INWorkoutGoalUnitTypeMinute,
    INWorkoutGoalUnitTypeHour,
    INWorkoutGoalUnitTypeJoule,
    INWorkoutGoalUnitTypeKiloCalorie,
} API_AVAILABLE(ios(10.0), watchos(3.2)) API_UNAVAILABLE(macosx);

#endif // INWorkoutGoalUnitType_h

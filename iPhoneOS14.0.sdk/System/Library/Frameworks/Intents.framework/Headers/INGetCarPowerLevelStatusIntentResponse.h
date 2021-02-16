//
//  INGetCarPowerLevelStatusIntentResponse.h
//  Intents
//
//  Copyright (c) 2016-2020 Apple Inc. All rights reserved.
//

#import <Intents/INIntentResponse.h>

#import <Intents/INChargingConnectorTypeOptions.h>

typedef NS_ENUM(NSInteger, INGetCarPowerLevelStatusIntentResponseCode) {
    INGetCarPowerLevelStatusIntentResponseCodeUnspecified = 0,
    INGetCarPowerLevelStatusIntentResponseCodeReady,
    INGetCarPowerLevelStatusIntentResponseCodeInProgress,
    INGetCarPowerLevelStatusIntentResponseCodeSuccess,
    INGetCarPowerLevelStatusIntentResponseCodeFailure,
    INGetCarPowerLevelStatusIntentResponseCodeFailureRequiringAppLaunch,
} API_AVAILABLE(ios(10.3), watchos(3.2)) API_UNAVAILABLE(macos, tvos);

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.3), watchos(3.2))
API_UNAVAILABLE(macos, tvos)
@interface INGetCarPowerLevelStatusIntentResponse : INIntentResponse

- (id)init NS_UNAVAILABLE;

// The app extension has the option of capturing its private state as an NSUserActivity and returning it as the 'currentActivity'.
// If the the app is launched, an NSUserActivity will be passed in with the private state.  The NSUserActivity may also be used to query the app's UI extension (if provided) for a view controller representing the current intent handling state.
// In the case of app launch, the NSUserActivity will have its activityType set to the name of the intent. This intent object will also be available in the NSUserActivity.interaction property.
- (instancetype)initWithCode:(INGetCarPowerLevelStatusIntentResponseCode)code userActivity:(nullable NSUserActivity *)userActivity NS_DESIGNATED_INITIALIZER;

@property (readonly, NS_NONATOMIC_IOSONLY) INGetCarPowerLevelStatusIntentResponseCode code;

// The unique string used to identify the car. This should be the same as INCar’s carIdentifier property.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *carIdentifier API_AVAILABLE(ios(14.0), watchos(7.0));

@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSNumber *fuelPercentRemaining NS_REFINED_FOR_SWIFT;

@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSNumber *chargePercentRemaining NS_REFINED_FOR_SWIFT;

// The distance that the car can travel on the remaining resources.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSMeasurement<NSUnitLength *> *distanceRemaining;

@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSNumber *charging NS_REFINED_FOR_SWIFT API_AVAILABLE(ios(12.0), watchos(5.0));

@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSNumber *minutesToFull NS_REFINED_FOR_SWIFT API_AVAILABLE(ios(12.0), watchos(5.0));

// The distance that the car can travel with full resources.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSMeasurement<NSUnitLength *> *maxDistance API_AVAILABLE(ios(14.0), watchos(7.0));

// The distance that the car can travel on the remaining charge.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSMeasurement<NSUnitLength *> *distanceRemainingElectric API_AVAILABLE(ios(14.0), watchos(7.0));

// The distance that the car can travel with full charge.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSMeasurement<NSUnitLength *> *maxDistanceElectric API_AVAILABLE(ios(14.0), watchos(7.0));

// The distance that the car can travel on the remaining gasoline.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSMeasurement<NSUnitLength *> *distanceRemainingGasoline API_AVAILABLE(ios(14.0), watchos(7.0));

// The distance that the car can travel with full tank of gasoline.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSMeasurement<NSUnitLength *> *maxDistanceGasoline API_AVAILABLE(ios(14.0), watchos(7.0));

// The list of arguments used to calculate the car’s consumption.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSDictionary<NSString *, id> *consumptionFormulaArguments API_AVAILABLE(ios(14.0), watchos(7.0));

// The list of arguments used to calculate the time it will take to charge the car.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSDictionary<NSString *, id> *chargingFormulaArguments API_AVAILABLE(ios(14.0), watchos(7.0));

// The date of when the update to the car's power level happened.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSDateComponents *dateOfLastStateUpdate API_AVAILABLE(ios(14.0), watchos(7.0));

// If isCharging is set, this property should contain the active connector that is currently being used to charge the car.
@property (readwrite, assign, NS_NONATOMIC_IOSONLY) INChargingConnectorTypeOptions activeConnector API_AVAILABLE(ios(14.0), watchos(7.0));

// Maximum battery capacity.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSMeasurement<NSUnitEnergy *> *maxBatteryCapacity API_AVAILABLE(ios(14.0), watchos(7.0));

// Current battery capacity.
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSMeasurement<NSUnitEnergy *> *currentBatteryCapacity API_AVAILABLE(ios(14.0), watchos(7.0));

// Minimum battery capacity. Used to display to the user as the minimum (not to be confused with the absolute 0 Wh)
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSMeasurement<NSUnitEnergy *> *minBatteryCapacity API_AVAILABLE(ios(14.0), watchos(7.0));

@end

NS_ASSUME_NONNULL_END

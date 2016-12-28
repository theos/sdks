// HMCharacteristicDefines.h
// HomeKit
//
// Copyright (c) 2013-2015 Apple Inc. All rights reserved.

/*!
 * @group Characteristic Valid Values
 *
 * @brief These constants define valid values for characteristic types supported by the HomeKit Accessory Profile for HomeKit based accessories.
 */

/*!
 @enum      HMCharacteristicValueDoorState

 @constant  HMCharacteristicValueDoorStateOpen          Door is fully open.
 @constant  HMCharacteristicValueDoorStateClosed        Door is fully closed.
 @constant  HMCharacteristicValueDoorStateOpening       Door is actively opening.
 @constant  HMCharacteristicValueDoorStateClosing       Door is actively closed.
 @constant  HMCharacteristicValueDoorStateStopped       Door is not moving, and is not fully open nor fully closed.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueDoorState) {
    HMCharacteristicValueDoorStateOpen = 0,
    HMCharacteristicValueDoorStateClosed,
    HMCharacteristicValueDoorStateOpening,
    HMCharacteristicValueDoorStateClosing,
    HMCharacteristicValueDoorStateStopped,
} NS_ENUM_AVAILABLE_IOS(8_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueHeatingCooling

 @constant  HMCharacteristicValueHeatingCoolingOff      Heating/cooling is off.
 @constant  HMCharacteristicValueHeatingCoolingHeat     Heating/cooling is heating.
 @constant  HMCharacteristicValueHeatingCoolingCool     Heating/cooling is cooling.
 @constant  HMCharacteristicValueHeatingCoolingAuto     Heating/cooling is auto.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueHeatingCooling) {
    HMCharacteristicValueHeatingCoolingOff = 0,
    HMCharacteristicValueHeatingCoolingHeat,
    HMCharacteristicValueHeatingCoolingCool,
    HMCharacteristicValueHeatingCoolingAuto,
} NS_ENUM_AVAILABLE_IOS(8_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueRotationDirection

 @constant  HMCharacteristicValueRotationDirectionClockwise             Clockwise rotation.
 @constant  HMCharacteristicValueRotationDirectionCounterClockwise      Counter-clockwise rotation.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueRotationDirection) {
    HMCharacteristicValueRotationDirectionClockwise = 0,
    HMCharacteristicValueRotationDirectionCounterClockwise,
} NS_ENUM_AVAILABLE_IOS(8_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueTemperatureUnit

 @constant  HMCharacteristicValueTemperatureUnitCelsius                 Temperature unit in Celsius.
 @constant  HMCharacteristicValueTemperatureUnitFahrenheit              Temperature unit in Fahrenheit.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueTemperatureUnit) {
    HMCharacteristicValueTemperatureUnitCelsius = 0,
    HMCharacteristicValueTemperatureUnitFahrenheit,
} NS_ENUM_AVAILABLE_IOS(8_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueLockMechanismState

 @constant  HMCharacteristicValueLockMechanismStateUnsecured            Lock mechanism is unsecured.
 @constant  HMCharacteristicValueLockMechanismStateSecured              Lock mechanism is secured.
 @constant  HMCharacteristicValueLockMechanismStateJammed               Lock mechanism is jammed.
 @constant  HMCharacteristicValueLockMechanismStateUnknown              Lock mechanism is unknown.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueLockMechanismState) {
    HMCharacteristicValueLockMechanismStateUnsecured = 0,
    HMCharacteristicValueLockMechanismStateSecured,
    HMCharacteristicValueLockMechanismStateJammed,
    HMCharacteristicValueLockMechanismStateUnknown,
} NS_ENUM_AVAILABLE_IOS(8_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueLockMechanismLastKnownAction

 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementInterior       Last known action was secured using physical movement, interior.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementInterior     Last known action was unsecured using physical movement, interior.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementExterior       Last known action was secured using physical movement, exterior.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementExterior     Last known action was unsecured using physical movement, exterior.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredWithKeypad                          Last known action was secured with keypad.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredWithKeypad                        Last known action was unsecured with keypad.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredRemotely                            Last known action was secured remotely.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredRemotely                          Last known action was unsecured remotely.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredWithAutomaticSecureTimeout          Last known action was secured automatically after timeout.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovement               Last known action was secured using physical movement.
 @constant  HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovement             Last known action was unsecured using physical movement.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueLockMechanismLastKnownAction) {
    HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementInterior = 0,
    HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementInterior,
    HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovementExterior,
    HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovementExterior,
    HMCharacteristicValueLockMechanismLastKnownActionSecuredWithKeypad,
    HMCharacteristicValueLockMechanismLastKnownActionUnsecuredWithKeypad,
    HMCharacteristicValueLockMechanismLastKnownActionSecuredRemotely,
    HMCharacteristicValueLockMechanismLastKnownActionUnsecuredRemotely,
    HMCharacteristicValueLockMechanismLastKnownActionSecuredWithAutomaticSecureTimeout,
    HMCharacteristicValueLockMechanismLastKnownActionSecuredUsingPhysicalMovement,
    HMCharacteristicValueLockMechanismLastKnownActionUnsecuredUsingPhysicalMovement,
} NS_ENUM_AVAILABLE_IOS(8_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);


/*!
 @enum      HMCharacteristicValueAirParticulateSize

 @constant  HMCharacteristicValueAirParticulateSize2_5          Air particulate size of 2.5 micrometers.
 @constant  HMCharacteristicValueAirParticulateSize10           Air particulate size of 10 micrometers.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueAirParticulateSize) {
    HMCharacteristicValueAirParticulateSize2_5 = 0,
    HMCharacteristicValueAirParticulateSize10,
} NS_ENUM_AVAILABLE_IOS(9_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);


/*!
 @enum      HMCharacteristicValueAirQuality

 @constant  HMCharacteristicValueAirQualityUnknown              Air quality is unknown.
 @constant  HMCharacteristicValueAirQualityExcellent            Air quality is excellent.
 @constant  HMCharacteristicValueAirQualityGood                 Air quality is good.
 @constant  HMCharacteristicValueAirQualityFair                 Air quality is fair.
 @constant  HMCharacteristicValueAirQualityInferior             Air quality is inferior.
 @constant  HMCharacteristicValueAirQualityPoor                 Air quality is poor.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueAirQuality) {
    HMCharacteristicValueAirQualityUnknown = 0,
    HMCharacteristicValueAirQualityExcellent,
    HMCharacteristicValueAirQualityGood,
    HMCharacteristicValueAirQualityFair,
    HMCharacteristicValueAirQualityInferior,
    HMCharacteristicValueAirQualityPoor,
} NS_ENUM_AVAILABLE_IOS(9_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);


/*!
 @enum      HMCharacteristicValuePositionState

 @constant  HMCharacteristicValuePositionStateClosing           Position is moving towards minimum value.
 @constant  HMCharacteristicValuePositionStateOpening           Position is moving towards maximum value.
 @constant  HMCharacteristicValuePositionStateStopped           Position is Stopped.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValuePositionState) {
    HMCharacteristicValuePositionStateClosing = 0,
    HMCharacteristicValuePositionStateOpening,
    HMCharacteristicValuePositionStateStopped,
} NS_ENUM_AVAILABLE_IOS(9_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);


/*!
 @enum      HMCharacteristicValueCurrentSecuritySystemState

 @constant  HMCharacteristicValueCurrentSecuritySystemStateStayArm       Home is occupied and residents are active.
 @constant  HMCharacteristicValueCurrentSecuritySystemStateAwayArm       Home is unoccupied.
 @constant  HMCharacteristicValueCurrentSecuritySystemStateNightArm      Home is occupied and residents are sleeping.
 @constant  HMCharacteristicValueCurrentSecuritySystemStateDisarmed      SecuritySystem is disarmed.
 @constant  HMCharacteristicValueCurrentSecuritySystemStateTriggered     SecuritySystem is triggered.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueCurrentSecuritySystemState) {
    HMCharacteristicValueCurrentSecuritySystemStateStayArm = 0,
    HMCharacteristicValueCurrentSecuritySystemStateAwayArm,
    HMCharacteristicValueCurrentSecuritySystemStateNightArm,
    HMCharacteristicValueCurrentSecuritySystemStateDisarmed,
    HMCharacteristicValueCurrentSecuritySystemStateTriggered,
} NS_ENUM_AVAILABLE_IOS(9_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);


/*!
 @enum      HMCharacteristicValueTargetSecuritySystemState

 @constant  HMCharacteristicValueTargetSecuritySystemStateStayArm        Home is occupied and residents are active.
 @constant  HMCharacteristicValueTargetSecuritySystemStateAwayArm        Home is unoccupied.
 @constant  HMCharacteristicValueTargetSecuritySystemStateNightArm       Home is occupied and residents are sleeping.
 @constant  HMCharacteristicValueTargetSecuritySystemStateDisarm         Disarm.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueTargetSecuritySystemState) {
    HMCharacteristicValueTargetSecuritySystemStateStayArm = 0,
    HMCharacteristicValueTargetSecuritySystemStateAwayArm,
    HMCharacteristicValueTargetSecuritySystemStateNightArm,
    HMCharacteristicValueTargetSecuritySystemStateDisarm,
} NS_ENUM_AVAILABLE_IOS(9_0) __WATCHOS_AVAILABLE(2_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueBatteryStatus

 @constant  HMCharacteristicValueBatteryStatusNormal        Battery status is normal.
 @constant  HMCharacteristicValueBatteryStatusLow           Battery status is low.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueBatteryStatus) {
    HMCharacteristicValueBatteryStatusNormal = 0,
    HMCharacteristicValueBatteryStatusLow,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueJammedStatus

 @constant  HMCharacteristicValueJammedStatusNone               Not Jammed.
 @constant  HMCharacteristicValueJammedStatusJammed             Jammed.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueJammedStatus) {
    HMCharacteristicValueJammedStatusNone = 0,
    HMCharacteristicValueJammedStatusJammed,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueTamperStatus

 @constant  HMCharacteristicValueTamperStatusNone               Accessory is not tampered with.
 @constant  HMCharacteristicValueTamperStatusTampered           Accessory is tampered with.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueTamperedStatus) {
    HMCharacteristicValueTamperedStatusNone = 0,
    HMCharacteristicValueTamperedStatusTampered,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueLeakDetectionStatus

 @constant  HMCharacteristicValueLeakDetectionStatusNone        Leak is not detected.
 @constant  HMCharacteristicValueLeakDetectionStatusDetected    Leak is detected.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueLeakStatus) {
    HMCharacteristicValueLeakStatusNone = 0,
    HMCharacteristicValueLeakStatusDetected,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueSmokeDetectionStatus

 @constant  HMCharacteristicValueSmokeDetectionStatusNone       Smoke is not detected.
 @constant  HMCharacteristicValueSmokeDetectionStatusDetected   Smoke is detected.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueSmokeDetectionStatus) {
    HMCharacteristicValueSmokeDetectionStatusNone = 0,
    HMCharacteristicValueSmokeDetectionStatusDetected,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueChargingState

 @constant  HMCharacteristicValueChargingStateNone              Charging is not in progress.
 @constant  HMCharacteristicValueChargingStateInProgress        Charging is in progress.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueChargingState) {
    HMCharacteristicValueChargingStateNone = 0,
    HMCharacteristicValueChargingStateInProgress,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);


/*!
 @enum      HMCharacteristicValueContactState

 @constant  HMCharacteristicValueContactStateNone               Contact is not detected.
 @constant  HMCharacteristicValueContactStateDetected           Contact is detected.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueContactState) {
    HMCharacteristicValueContactStateNone = 0,
    HMCharacteristicValueContactStateDetected,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueStatusFault
 
 @constant  HMCharacteristicValueStatusFaultNoFault               No Fault.
 @constant  HMCharacteristicValueStatusFaultGeneralFault          General Fault.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueStatusFault) {
    HMCharacteristicValueStatusFaultNoFault = 0,
    HMCharacteristicValueStatusFaultGeneralFault,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueCarbonMonoxideDetectionStatus

 @constant  HMCharacteristicValueCarbonMonoxideDetectionStatusNotDetected       Carbon monoxide is not detected.
 @constant  HMCharacteristicValueCarbonMonoxideDetectionStatusDetected          Carbon monoxide is detected.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueCarbonMonoxideDetectionStatus) {
    HMCharacteristicValueCarbonMonoxideDetectionStatusNotDetected = 0,
    HMCharacteristicValueCarbonMonoxideDetectionStatusDetected,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueCarbonDioxideDetectionStatus

 @constant  HMCharacteristicValueCarbonDioxideDetectionStatusNotDetected    Carbon dioxide is not detected.
 @constant  HMCharacteristicValueCarbonDioxideDetectionStatusDetected       Carbon dioxide is detected.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueCarbonDioxideDetectionStatus) {
    HMCharacteristicValueCarbonDioxideDetectionStatusNotDetected = 0,
    HMCharacteristicValueCarbonDioxideDetectionStatusDetected,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueOccupancyStatus

 @constant  HMCharacteristicValueOccupancyStatusNotOccupied     Occupancy is not detected.
 @constant  HMCharacteristicValueOccupancyStatusOccupied        Occupancy is detected.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueOccupancyStatus) {
    HMCharacteristicValueOccupancyStatusNotOccupied = 0,
    HMCharacteristicValueOccupancyStatusOccupied,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);

/*!
 @enum      HMCharacteristicValueSecuritySystemAlarmType

 @constant  HMCharacteristicValueSecuritySystemAlarmTypeNoAlarm     No alarm.
 @constant  HMCharacteristicValueSecuritySystemAlarmTypeUnknown     Unknown alarm type.
 */
typedef NS_ENUM(NSInteger, HMCharacteristicValueSecuritySystemAlarmType) {
    HMCharacteristicValueSecuritySystemAlarmTypeNoAlarm = 0,
    HMCharacteristicValueSecuritySystemAlarmTypeUnknown,
} NS_ENUM_AVAILABLE_IOS(10_0) __WATCHOS_AVAILABLE(3_0) __TVOS_AVAILABLE(10_0);

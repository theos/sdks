//
//  HKQuery.h
//  HealthKit
//
//  Copyright (c) 2013-2022 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HealthKit/HKDefines.h>
#import <HealthKit/HKElectrocardiogram.h>
#import <HealthKit/HKFHIRResource.h>
#import <HealthKit/HKWorkout.h>

NS_ASSUME_NONNULL_BEGIN

@class HKObjectType;
@class HKQuantity;
@class HKSampleType;
@class HKSource;

HK_EXTERN API_AVAILABLE(ios(8.0), watchos(2.0), macCatalyst(13.0), macos(13.0))
@interface HKQuery : NSObject

@property (readonly, strong, nullable) HKObjectType *objectType API_AVAILABLE(ios(9.3), watchos(2.2), macCatalyst(13.0), macos(13.0));
@property (readonly, strong, nullable) HKSampleType *sampleType API_DEPRECATED_WITH_REPLACEMENT("objectType", ios(8.0, 9.3), watchos(2.0, 2.2));

@property (readonly, strong, nullable) NSPredicate *predicate;

- (instancetype)init NS_UNAVAILABLE;

@end

/**
 @enum      HKQueryOptions
 @abstract  Time interval options are used to describe how an HKSample's time period overlaps with a given time period.
 
 @constant  HKQueryOptionNone               The sample's time period must overlap with the predicate's time period.
 @constant  HKQueryOptionStrictStartDate    The sample's start date must fall in the time period (>= startDate, < endDate)
 @constant  HKQueryOptionStrictEndDate      The sample's end date must fall in the time period (>= startDate, < endDate)
 
 */
typedef NS_OPTIONS(NSUInteger, HKQueryOptions) {
    HKQueryOptionNone               = 0,
    HKQueryOptionStrictStartDate    = 1 << 0,
    HKQueryOptionStrictEndDate      = 1 << 1,
} API_AVAILABLE(ios(8.0), watchos(2.0), macCatalyst(13.0), macos(13.0));

@interface HKQuery (HKObjectPredicates)

/*!
 @method        predicateForObjectsWithMetadataKey:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches objects with metadata that contains a given key.
 
 @param         key     The metadata key.
 */
+ (NSPredicate *)predicateForObjectsWithMetadataKey:(NSString *)key;

/*!
 @method        predicateForObjectsWithMetadataKey:allowedValues:
 @abstract      Creates a predicate for use with HKQuery subclasses
 @discussion    Creates a query predicate that matches objects with metadata containing a value the matches one of the
                given values for the given key.
 
 @param         key             The metadata key.
 @param         allowedValues   The list of values that the metadata value can be equal to.
 */
+ (NSPredicate *)predicateForObjectsWithMetadataKey:(NSString *)key allowedValues:(NSArray *)allowedValues;

/*!
 @method        predicateForObjectsWithMetadataKey:operatorType:value:
 @abstract      Creates a predicate for use with HKQuery subclasses
 @discussion    Creates a query predicate that matches objects with a value for a given metadata key matches the given
                operator type and value.
 
 @param         key            The metadata key.
 @param         operatorType   The comparison operator type for the expression.
 @param         value          The value to be compared against.
 */
+ (NSPredicate *)predicateForObjectsWithMetadataKey:(NSString *)key operatorType:(NSPredicateOperatorType)operatorType value:(id)value;

/*!
 @method        predicateForObjectsFromSource:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches objects saved by a given source.
 
 @param         source  The source.
 */
+ (NSPredicate *)predicateForObjectsFromSource:(HKSource *)source;

/*!
 @method        predicateForObjectsFromSources:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches objects saved by any of the given sources.
 
 @param         sources The list of sources.
 */
+ (NSPredicate *)predicateForObjectsFromSources:(NSSet<HKSource *> *)sources;

/*!
 @method        predicateForObjectsFromSourceRevisions:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches objects saved by any of the specified HKSourceRevisions.
 
 @param         sourceRevisions The list of source revisions.
 */
+ (NSPredicate *)predicateForObjectsFromSourceRevisions:(NSSet<HKSourceRevision *> *)sourceRevisions API_AVAILABLE(ios(9.0), watchos(2.0), macCatalyst(13.0), macos(13.0));

/*!
 @method        predicateForObjectsFromDevices:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches objects associated with any of the given devices. All properties
                of each HKDevice are considered in the query and must match exactly, including nil values. To perform 
                searches based on specific device properties, use predicateForObjectsWithDeviceProperty:allowedValues:.
 
 @param         devices     The set of devices that generated data.
 */
+ (NSPredicate *)predicateForObjectsFromDevices:(NSSet<HKDevice *> *)devices API_AVAILABLE(ios(9.0), watchos(2.0), macCatalyst(13.0), macos(13.0));

/*!
 @method        predicateForObjectsWithDeviceProperty:allowedValues:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches objects associated with an HKDevice with the specified device
                property matching any value included in allowedValues. To query for samples with devices that match all 
                the properties of an HKDevice, use predicateForObjectsFromDevices.
 
 @param         key             The device property key. (See HKDevice.h)
 @param         allowedValues   The set of values for which the device property can match. An empty set will match all
                devices whose property value is nil.
 */
+ (NSPredicate *)predicateForObjectsWithDeviceProperty:(NSString *)key allowedValues:(NSSet<NSString *> *)allowedValues API_AVAILABLE(ios(9.0), watchos(2.0), macCatalyst(13.0), macos(13.0));

/*!
 @method        predicateForObjectWithUUID:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches the object saved with a particular UUID.
 
 @param         UUID The UUID of the object.
 */
+ (NSPredicate *)predicateForObjectWithUUID:(NSUUID *)UUID;

/*!
 @method        predicateForObjectsWithUUIDs:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches the objects saved with one of the given UUIDs.
 
 @param         UUIDs The set of NSUUIDs.
 */
+ (NSPredicate *)predicateForObjectsWithUUIDs:(NSSet<NSUUID *> *)UUIDs;

/*!
 @method        predicateForObjectsNoCorrelation
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches the objects that are not associated with an HKCorrelation.
 */
+ (NSPredicate *)predicateForObjectsWithNoCorrelation;

/*!
 @method        predicateForObjectsFromWorkout:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches the objects that have been added to the given workout.
 
 @param         workout     The HKWorkout that the object was added to.
 */
+ (NSPredicate *)predicateForObjectsFromWorkout:(HKWorkout *)workout;

/*!
 @method        predicateForObjectsAssociatedWithElectrocardiogram:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches the objects that have been added to the given electrocardiogram
 
 @param         electrocardiogram     The HKElectrocardiogram that the object was added to.
 */
+ (NSPredicate *)predicateForObjectsAssociatedWithElectrocardiogram:(HKElectrocardiogram *)electrocardiogram API_AVAILABLE(ios(14.0), watchos(7.0)) NS_SWIFT_NAME(predicateForObjectsAssociated(electrocardiogram:));


@end


@interface HKQuery (HKSamplePredicates)

/*!
 @method        predicateForSamplesWithStartDate:endDate:options:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches samples with a startDate and an endDate that lie inside of a
                given time interval.
 
 @param         startDate  The start date of the predicate's time interval.
 @param         endDate    The end date of the predicate's time interval.
 @param         options    The rules for how a sample's time interval overlaps with the predicate's time interval.
 */
+ (NSPredicate *)predicateForSamplesWithStartDate:(nullable NSDate *)startDate endDate:(nullable NSDate *)endDate options:(HKQueryOptions)options;

@end


@interface HKQuery (HKQuantitySamplePredicates)

/*!
 @method        predicateForQuantitySamplesWithOperatorType:quantity:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches quantity samples with values that match the expression formed by
                the given operator and quantity.
 
 @param         operatorType    The operator type for the expression.
 @param         quantity        The quantity that the sample's quantity is being compared to. It is the right hand side
                                of the expression.
 */
+ (NSPredicate *)predicateForQuantitySamplesWithOperatorType:(NSPredicateOperatorType)operatorType quantity:(HKQuantity *)quantity;

@end

@interface HKQuery (HKCategorySamplePredicates)

/*!
 @method        predicateForCategorySamplesWithOperatorType:value:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches category samples with values that match the expression formed by 
                the given operator and value.
 
 @param         operatorType    The operator type for the expression.
 @param         value           The value that the sample's value is being compared to. It is the right hand side of the
                                expression.
 */
#if defined(__swift__) && __swift__
+ (NSPredicate *)predicateForCategorySamplesWithOperatorType:(NSPredicateOperatorType)operatorType value:(NSInteger)value API_DEPRECATED("Use HKCategoryValuePredicateProviding.predicateForSamples(_:value:)", ios(8.0, API_TO_BE_DEPRECATED), watchos(2.0, API_TO_BE_DEPRECATED));
#else
+ (NSPredicate *)predicateForCategorySamplesWithOperatorType:(NSPredicateOperatorType)operatorType value:(NSInteger)value;
#endif // defined(__swift__) && __swift__

/*!
 @method predicateForCategorySamplesEqualToValues:
 @abstract Creates a predicate for use with HKQuery subclasses.
 @discussion Creates a query predicate that matches all specified category values.
 */
+ (NSPredicate *)predicateForCategorySamplesEqualToValues:(NSSet<NSNumber *> *)values NS_REFINED_FOR_SWIFT;

@end

@interface HKQuery (HKWorkoutPredicates)

/*!
 @method        predicateForWorkoutsWithWorkoutActivityType:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkouts with the given HKWorkoutActivityType.
 
 @param         workoutActivityType     The HKWorkoutActivity type of the workout
 */
+ (NSPredicate *)predicateForWorkoutsWithWorkoutActivityType:(HKWorkoutActivityType)workoutActivityType;

/*!
 @method        predicateForWorkoutsWithOperatorType:duration:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkouts by the given operator type and duration
 
 @param         operatorType    The operator type for the expression.
 @param         duration        The value that the workout's duration is being compared to. It is the right hand side of the
                                expression.
 */
+ (NSPredicate *)predicateForWorkoutsWithOperatorType:(NSPredicateOperatorType)operatorType duration:(NSTimeInterval)duration;

/*!
 @method        predicateForWorkoutsWithOperatorType:totalEnergyBurned:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkouts by the given operator type and totalEnergyBurned
 
 @param         operatorType        The operator type for the expression.
 @param         totalEnergyBurned   The value that the workout's totalEnergyBurned is being compared to. It is the right hand side of the
                                    expression. The unit for this value should be of type Energy.
 */
+ (NSPredicate *)predicateForWorkoutsWithOperatorType:(NSPredicateOperatorType)operatorType totalEnergyBurned:(HKQuantity *)totalEnergyBurned API_DEPRECATED("Use predicateForWorkoutActivitiesWithOperatorType:quantityType:sumQuantity: passing the HKQuantityType for HKQuantityTypeIdentifierActiveEnergyBurned", ios(8.0, API_TO_BE_DEPRECATED), watchos(2.0, API_TO_BE_DEPRECATED), macCatalyst(13.0, API_TO_BE_DEPRECATED), macos(13.0, API_TO_BE_DEPRECATED));

/*!
 @method        predicateForWorkoutsWithOperatorType:totalDistance:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkouts by the given operator type and totalEnergyBurned
 
 @param         operatorType    The operator type for the expression.
 @param         totalDistance   The value that the workout's totalEnergyBurned is being compared to. It is the right hand side of the
                                expression. The unit for this value should be of type Distance.
 */
+ (NSPredicate *)predicateForWorkoutsWithOperatorType:(NSPredicateOperatorType)operatorType totalDistance:(HKQuantity *)totalDistance API_DEPRECATED("Use predicateForWorkoutActivitiesWithOperatorType:quantityType:sumQuantity: passing the HKQuantityType for the desired distance type", ios(8.0, API_TO_BE_DEPRECATED), watchos(2.0, API_TO_BE_DEPRECATED), macCatalyst(13.0, API_TO_BE_DEPRECATED), macos(13.0, API_TO_BE_DEPRECATED));
/*!
 @method        predicateForWorkoutsWithOperatorType:totalSwimmingStrokeCount:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkouts by the given operator type and totalSwimmingStrokeCount
 
 @param         operatorType                The operator type for the expression.
 @param         totalSwimmingStrokeCount    The value that the workout's totalSwimmingStrokeCount is being compared to.
                                            It is the right hand side of the expression. The unit for this value should
                                            be of type Count.
 */
+ (NSPredicate *)predicateForWorkoutsWithOperatorType:(NSPredicateOperatorType)operatorType totalSwimmingStrokeCount:(HKQuantity *)totalSwimmingStrokeCount API_DEPRECATED("Use predicateForWorkoutActivitiesWithOperatorType:quantityType:sumQuantity:", ios(10.0, API_TO_BE_DEPRECATED), watchos(3.0, API_TO_BE_DEPRECATED), macCatalyst(13.0, API_TO_BE_DEPRECATED), macos(13.0, API_TO_BE_DEPRECATED));

/*!
 @method        predicateForWorkoutsWithOperatorType:totalFlightsClimbed:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkouts by the given operator type and totalFlightsClimbed
 
 @param         operatorType                The operator type for the expression.
 @param         totalFlightsClimbed         The value that the workout's totalFlightsClimbed is being compared to.
                                            It is the right hand side of the expression. The unit for this value should
                                            be of type Count.
 */
+ (NSPredicate *)predicateForWorkoutsWithOperatorType:(NSPredicateOperatorType)operatorType totalFlightsClimbed:(HKQuantity *)totalFlightsClimbed API_DEPRECATED("Use predicateForWorkoutActivitiesWithOperatorType:quantityType:sumQuantity: passing the HKQuantityType for HKQuantityTypeIdentifierSwimmingStrokeCount", ios(11.0, API_TO_BE_DEPRECATED), watchos(4.0, API_TO_BE_DEPRECATED), macCatalyst(13.0, API_TO_BE_DEPRECATED), macos(13.0, API_TO_BE_DEPRECATED));
                                                                                                                                                            
/*!
 @method        predicateForWorkoutsWithOperatorType:quantityType:sumQuantity:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkouts by the given operator type and sumQuantity in the statistics for
                the specified type.
 
 @param         operatorType    The operator type for the expression.
 @param         quantityType    The quantity type to compare statistics for. Should be a cumulative quantity type.
 @param         sumQuantity     The sum value that the workout statistics are being compared to. The unit for this value should
                                match the allowed values for the quantityType.
 */
+ (NSPredicate *)predicateForWorkoutsWithOperatorType:(NSPredicateOperatorType)operatorType
                                         quantityType:(HKQuantityType *)quantityType
                                          sumQuantity:(HKQuantity *)sumQuantity API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkouts(operatorType:quantityType:sumQuantity:));

/*!
 @method        predicateForWorkoutsWithOperatorType:quantityType:minimumQuantity:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkouts by the given operator type and minimumQuantity in the statistics
                for the specified type.
 
 @param         operatorType        The operator type for the expression.
 @param         quantityType        The quantity type to compare statistics for. Should be a discrete quantity type.
 @param         minimumQuantity     The minumum value that the workout statistics are being compared to. The unit for this value should
                                    match the allowed values for the quantityType.
 */
+ (NSPredicate *)predicateForWorkoutsWithOperatorType:(NSPredicateOperatorType)operatorType
                                         quantityType:(HKQuantityType *)quantityType
                                      minimumQuantity:(HKQuantity *)minimumQuantity API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkouts(operatorType:quantityType:minimumQuantity:));

/*!
 @method        predicateForWorkoutsWithOperatorType:quantityType:maximumQuantity:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkouts by the given operator type and maximumQuantity in the statistics
                for the specified type.
 
 @param         operatorType        The operator type for the expression.
 @param         quantityType        The quantity type to compare statistics for. Should be a discrete quantity type.
 @param         maximumQuantity     The maximum value that the workout statistics are being compared to. The unit for this value should
                                    match the allowed values for the quantityType.
 */
+ (NSPredicate *)predicateForWorkoutsWithOperatorType:(NSPredicateOperatorType)operatorType
                                         quantityType:(HKQuantityType *)quantityType
                                      maximumQuantity:(HKQuantity *)maximumQuantity API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkouts(operatorType:quantityType:maximumQuantity:));

/*!
 @method        predicateForWorkoutsWithOperatorType:quantityType:averageQuantity:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkouts by the given operator type and averageQuantity in the statistics
                for the specified type.
 
 @param         operatorType        The operator type for the expression.
 @param         quantityType        The quantity type to compare statistics for. Should be a discrete quantity type.
 @param         averageQuantity     The average value that the workout statistics are being compared to. The unit for this value should
                                    match the allowed values for the quantityType.
 */
+ (NSPredicate *)predicateForWorkoutsWithOperatorType:(NSPredicateOperatorType)operatorType
                                         quantityType:(HKQuantityType *)quantityType
                                      averageQuantity:(HKQuantity *)averageQuantity API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkouts(operatorType:quantityType:averageQuantity:));

@end

@interface HKQuery (HKWorkoutActivityPredicates)

/*!
 @method        predicateForWorkoutActivitiesWithWorkoutActivityType:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkoutActivity objects with the given HKWorkoutActivityType.
                The resulting predicate should be wrapped using predicateForWorkoutsWithActivityPredicate: before being used in a query.
 
 @param         workoutActivityType     The HKWorkoutActivity type of the workout
 */
+ (NSPredicate *)predicateForWorkoutActivitiesWithWorkoutActivityType:(HKWorkoutActivityType)workoutActivityType API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkoutActivities(workoutActivityType:));

/*!
 @method        predicateForWorkoutActivitiesWithOperatorType:duration:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkoutActivity objects by the given operator type and duration.
                The resulting predicate should be wrapped using predicateForWorkoutsWithActivityPredicate: before being used in a query.
 
 @param         operatorType    The operator type for the expression.
 @param         duration        The value that the workout's duration is being compared to. It is the right hand side of the
                                expression.
 */
+ (NSPredicate *)predicateForWorkoutActivitiesWithOperatorType:(NSPredicateOperatorType)operatorType
                                                      duration:(NSTimeInterval)duration API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkoutActivities(operatorType:duration:));

/*!
 @method        predicateForWorkoutActivitiesWithStartDate:endDate:options:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkoutActivity objects with a startDate and an endDate that lie inside of a
                given time interval. The resulting predicate should be wrapped using predicateForWorkoutsWithActivityPredicate:
                before being used in a query.
 
 @param         startDate   The start date of the predicate's time interval.
 @param         endDate     The end date of the predicate's time interval.
 @param         options     The rules for how a activity's time interval overlaps with the predicate's time interval.
 */
+ (NSPredicate *)predicateForWorkoutActivitiesWithStartDate:(nullable NSDate *)startDate
                                                    endDate:(nullable NSDate *)endDate
                                                    options:(HKQueryOptions)options API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkoutActivities(start:end:options:));

/*!
 @method        predicateForWorkoutActivitiesWithOperatorType:quantityType:sumQuantity:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkoutActivity objetcs by the given operator type and sumQuantity in the
                statistics for the specified type. The resulting predicate should be wrapped using predicateForWorkoutsWithActivityPredicate:
                before being used in a query.
 
 @param         operatorType    The operator type for the expression.
 @param         quantityType    The quantity type to compare statistics for. Should be a cumulative quantity type.
 @param         sumQuantity     The sum value that the activity statistics are being compared to. The unit for this value should
                                match the allowed values for the quantityType.
 */
+ (NSPredicate *)predicateForWorkoutActivitiesWithOperatorType:(NSPredicateOperatorType)operatorType
                                                  quantityType:(HKQuantityType *)quantityType
                                                   sumQuantity:(HKQuantity *)sumQuantity API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkoutActivities(operatorType:quantityType:sumQuantity:));

/*!
 @method        predicateForWorkoutActivitiesWithOperatorType:quantityType:minimumQuantity:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkoutActivity objetcs  by the given operator type and minimumQuantity in the
                statistics for the specified type. The resulting predicate should be wrapped using predicateForWorkoutsWithActivityPredicate:
                before being used in a query.
 
 @param         operatorType        The operator type for the expression.
 @param         quantityType        The quantity type to compare statistics for. Should be a discrete quantity type.
 @param         minimumQuantity     The minumum value that the activty statistics are being compared to. The unit for this value should
                                    match the allowed values for the quantityType.
 */
+ (NSPredicate *)predicateForWorkoutActivitiesWithOperatorType:(NSPredicateOperatorType)operatorType
                                                  quantityType:(HKQuantityType *)quantityType
                                               minimumQuantity:(HKQuantity *)minimumQuantity API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkoutActivities(operatorType:quantityType:minimumQuantity:));

/*!
 @method        predicateForWorkoutActivitiesWithOperatorType:quantityType:maximumQuantity:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkoutActivity objetcs by the given operator type and maximumQuantity in the
                statistics for the specified type. The resulting predicate should be wrapped using predicateForWorkoutsWithActivityPredicate:
                before being used in a query.
 
 @param         operatorType        The operator type for the expression.
 @param         quantityType        The quantity type to compare statistics for. Should be a discrete quantity type.
 @param         maximumQuantity     The maximum value that the activity statistics are being compared to. The unit for this value should
                                    match the allowed values for the quantityType.
 */
+ (NSPredicate *)predicateForWorkoutActivitiesWithOperatorType:(NSPredicateOperatorType)operatorType
                                                  quantityType:(HKQuantityType *)quantityType
                                               maximumQuantity:(HKQuantity *)maximumQuantity API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkoutActivities(operatorType:quantityType:maximumQuantity:));

/*!
 @method        predicateForWorkoutActivitiesWithOperatorType:quantityType:averageQuantity:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKWorkoutActivity objetcs by the given operator type and averageQuantity in the
                statistics for the specified type. The resulting predicate should be wrapped using predicateForWorkoutsWithActivityPredicate:
                before being used in a query.
 
 @param         operatorType        The operator type for the expression.
 @param         quantityType        The quantity type to compare statistics for. Should be a discrete quantity type.
 @param         averageQuantity     The average value that the activity statistics are being compared to. The unit for this value should
                                    match the allowed values for the quantityType.
 */
+ (NSPredicate *)predicateForWorkoutActivitiesWithOperatorType:(NSPredicateOperatorType)operatorType
                                                  quantityType:(HKQuantityType *)quantityType
                                               averageQuantity:(HKQuantity *)averageQuantity API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkoutActivities(operatorType:quantityType:averageQuantity:));

/*!
 @method        predicateForWorkoutsWithActivityPredicate:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches workouts containing an activity matching the passed predicate.
 
 @param         activityPredicate   The predicate on the activities of the workout
 */
+ (NSPredicate *)predicateForWorkoutsWithActivityPredicate:(NSPredicate *)activityPredicate API_AVAILABLE(ios(16.0), watchos(9.0), macCatalyst(16.0), macos(13.0)) NS_SWIFT_NAME(predicateForWorkouts(activityPredicate:));

@end

@interface HKQuery (HKActivitySummaryPredicates)

/*!
 @method        predicateForActivitySummaryWithDateComponents:
 @abstract      Creates a predicate for use with HKActivitySummaryQuery
 @discussion    Creates a query predicate that matches HKActivitySummaries with the given date components.
 
 @param         dateComponents  The date components of the activity summary. These date components should contain era, year, month,
                and day components in the gregorian calendar.
 */
+ (NSPredicate *)predicateForActivitySummaryWithDateComponents:(NSDateComponents *)dateComponents API_AVAILABLE(ios(9.3), watchos(2.2), macCatalyst(13.0), macos(13.0));

/*!
 @method        predicateForActivitySummariesBetweenStartDateComponents:endDateComponents:
 @abstract      Creates a predicate for use with HKActivitySummaryQuery
 @discussion    Creates a query predicate that matches HKActivitySummaries that fall between the given date components.
 
 @param         startDateComponents The date components that define the beginning of the range. These date components should contain 
                era, year, month, and day components in the gregorian calendar.
 
 @param         endDateComponents   The date components that define the end of the range. These date components should contain era, 
                year, month, and day components in the gregorian calendar.
 */
+ (NSPredicate *)predicateForActivitySummariesBetweenStartDateComponents:(NSDateComponents *)startDateComponents endDateComponents:(NSDateComponents *)endDateComponents API_AVAILABLE(ios(9.3), watchos(2.2), macCatalyst(13.0), macos(13.0));

@end

@interface HKQuery (HKClinicalRecordPredicates)

/*!
 @method        predicateForClinicalRecordsWithFHIRResourceType:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKClinicalRecords with a specific FHIR resource type.
 
 @param         resourceType    The FHIR resource type.
 */
+ (NSPredicate *)predicateForClinicalRecordsWithFHIRResourceType:(HKFHIRResourceType)resourceType API_AVAILABLE(ios(12.0), macCatalyst(13.0), macos(13.0)) API_UNAVAILABLE(watchos);

/*!
 @method        predicateForClinicalRecordsFromSource:withFHIRResourceType:identifier:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKClinicalRecords for a given source, FHIR resource type, and FHIR identifier.
 
 @param         source          The source.
 @param         resourceType    The FHIR resource type.
 @param         identifier      The FHIR identifier.
 */
+ (NSPredicate *)predicateForClinicalRecordsFromSource:(HKSource *)source
                                      FHIRResourceType:(HKFHIRResourceType)resourceType
                                            identifier:(NSString *)identifier API_AVAILABLE(ios(12.0), macCatalyst(13.0), macos(13.0)) API_UNAVAILABLE(watchos);

@end

@interface HKQuery (HKElectrocardiogramPredicates)

/*!
 @method        predicateForElectrocardiogramsWithClassification:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKElectrocardiograms with a specific classification.
 
 @param         classification    The classification for the electrocardiogram.
 */
+ (NSPredicate *)predicateForElectrocardiogramsWithClassification:(HKElectrocardiogramClassification)classification API_AVAILABLE(ios(14.0), watchos(7.0), macCatalyst(14.0), macos(13.0)) NS_SWIFT_NAME(predicateForElectrocardiograms(classification:));

/*!
 @method        predicateForElectrocardiogramsWithSymptomsStatus:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a query predicate that matches HKElectrocardiograms with a specificied symptoms status.
 
 @param         symptomsStatus    The symptoms status for the electrocardiogram.
 */
+ (NSPredicate *)predicateForElectrocardiogramsWithSymptomsStatus:(HKElectrocardiogramSymptomsStatus)symptomsStatus API_AVAILABLE(ios(14.0), watchos(7.0), macCatalyst(14.0), macos(13.0)) NS_SWIFT_NAME(predicateForElectrocardiograms(symptomsStatus:));

@end

@interface HKQuery (HKVerifiableClinicalRecordPredicates)

/**
 @method        predicateForVerifiableClinicalRecordsWithRelevantDateWithinDateInterval:
 @abstract      Creates a predicate for use with HKQuery subclasses.
 @discussion    Creates a predicate that matches HKVerifiableClinicalRecords with a relevant date within a date interval.
 
 @param         dateInterval      The date interval that the record's relevant date is in.
 */
+ (NSPredicate *)predicateForVerifiableClinicalRecordsWithRelevantDateWithinDateInterval:(NSDateInterval *)dateInterval API_AVAILABLE(ios(15.0), macCatalyst(15.0), macos(13.0)) NS_SWIFT_NAME(predicateForVerifiableClinicalRecords(withRelevantDateWithin:));

@end

NS_ASSUME_NONNULL_END

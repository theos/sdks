//
//  SRSensors+SRDeletionRecord.h
//  SensorKit
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <SensorKit/SRSensors.h>

SR_EXTERN API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(watchos) API_UNAVAILABLE(tvos, macos)
@interface NSString (SRDeletionRecord)
/**
 * @brief Returns a sensor stream that contains deletion records of the sensor
 *
 * @discussion This sensor stream should only be used for fetching. All other
 * operations will be ignored. Deletion records share the recording and authorization
 * state with their parent sensor.
 */
- (SRSensor)sr_sensorForDeletionRecordsFromSensor;
@end

/*
 *  CMMagnetometer.h
 *  CoreMotion
 *
 *  Copyright (c) 2011 Apple Inc. All rights reserved.
 *
 */

#import <Foundation/Foundation.h>
#import <CoreMotion/CMLogItem.h>

#import <CoreMotion/CMAvailability.h>

NS_ASSUME_NONNULL_BEGIN

/*
 *  CMMagneticField
 *  
 *  Discussion:
 *    A structure containing 3-axis magnetometer data.
 *
 *  Fields:
 *    x:
 *      X-axis magnetic field in microteslas.
 *    y:
 *      Y-axis magnetic field in microteslas.
 *    z:
 *      Z-axis magnetic field in microteslas.
 */
typedef struct {
    double x;
    double y;
    double z;
} CMMagneticField;

/*
 *  CMMagnetometerData
 *  
 *  Discussion:
 *    Contains a single magnetometer measurement.
 */
NS_CLASS_AVAILABLE(NA,5_0) __TVOS_PROHIBITED
@interface CMMagnetometerData : CMLogItem
{
@private
    id _internal;
}

/*
 *  magneticField
 *  
 *  Discussion:
 *    Returns the magnetic field measured by the magnetometer. Note
 *        that this is the total magnetic field observed by the device which
 *        is equal to the Earth's geomagnetic field plus bias introduced
 *        from the device itself and its surroundings.
 */
@property(readonly, nonatomic) CMMagneticField magneticField;

@end

NS_ASSUME_NONNULL_END

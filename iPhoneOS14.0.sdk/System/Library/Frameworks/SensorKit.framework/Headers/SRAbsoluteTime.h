//
//  SRAbsoluteTime.h
//  SensorKit
//
//  Copyright © 2017 Apple Inc. All rights reserved.
//

#ifndef SRAbsoluteTime_h
#define SRAbsoluteTime_h

#import <CoreFoundation/CoreFoundation.h>
#import <SensorKit/SRDefines.h>

typedef CFTimeInterval SRAbsoluteTime
API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(watchos, macos) API_UNAVAILABLE(tvos);

/**
 * @brief Get the current SRAbsoluteTime for this device.
 *
 * This timestamp ticks across sleeps and reboots.
 */
API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(watchos, macos) API_UNAVAILABLE(tvos)
SR_EXTERN SRAbsoluteTime SRAbsoluteTimeGetCurrent(void);

/**
 * @brief Convert a mach_continuous_time to an SRAbsoluteTime.
 *
 * Because mach_continuous_time is volatile and hardware specific, the
 * mach_continuous_time must originate from the same device and boot session
 * that SRAbsoluteTimeFromContinuousTime() is called from.
 * The return value for mach_continuous_times spanning boot sessions or devices
 * is undefined.
 */
API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(watchos, macos) API_UNAVAILABLE(tvos)
SR_EXTERN SRAbsoluteTime SRAbsoluteTimeFromContinuousTime(uint64_t cont);

/**
 * @brief Convert a SRAbsoluteTime to a CFAbsoluteTime.
 *
 * The CFAbsoluteTime returned is based on calculations relative to the current
 * wall clock. This means that if the system time is 5 seconds fast against UTC,
 * the result will be 5 seconds fast to when the event happened relative to UTC.
 */
API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(watchos, macos) API_UNAVAILABLE(tvos)
SR_EXTERN CFAbsoluteTime SRAbsoluteTimeToCFAbsoluteTime(SRAbsoluteTime sr);

/**
 * @brief Convert a CFAbsoluteTime to an SRAbsoluteTime.
 *
 * The SRAbsoluteTime returned is based on calculations relative to the current
 * wall clock. This means that if the system time is 5 seconds fast against UTC,
 * the result will be 5 seconds fast to when the event happened relative to UTC.
 */
API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(watchos, macos) API_UNAVAILABLE(tvos)
SR_EXTERN SRAbsoluteTime SRAbsoluteTimeFromCFAbsoluteTime(CFAbsoluteTime cf);

#endif /* SRAbsoluteTime_h */

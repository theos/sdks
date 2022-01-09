//
//  HMTimeEvent.h
//  HomeKit
//
//  Copyright (c) 2017 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HomeKit/HMDefines.h>
#import <HomeKit/HMEvent.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @brief This class is used to represent a generic time event.
 */
API_AVAILABLE(ios(11.0), watchos(4.0), tvos(11.0)) API_UNAVAILABLE(macos)
@interface HMTimeEvent : HMEvent

@end

NS_ASSUME_NONNULL_END

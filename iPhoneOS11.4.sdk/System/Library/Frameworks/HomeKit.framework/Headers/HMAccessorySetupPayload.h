//
//  HMAccessorySetupPayload.h
//  HomeKit
//
//  Copyright © 2017 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

API_AVAILABLE(ios(11.3)) __WATCHOS_PROHIBITED __TVOS_PROHIBITED
@interface HMAccessorySetupPayload : NSObject

- (instancetype)init NS_UNAVAILABLE;

/*!
 * @brief Creates a new accessory setup payload to add an accessory to the home.
 *
 * @param setupPayloadURL The HomeKit setup payload for the accessory being added to the home.
 *
 * @return Returns an accessory setup payload object if successful or nil on error.
 */
- (instancetype)initWithURL:(NSURL *)setupPayloadURL;

@end

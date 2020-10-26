//
//  INCar.h
//  Intents
//
//  Copyright (c) 2016-2020 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Intents/INChargingConnectorTypeOptions.h>

@class INColor;
@class INHeadUnit;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(14.0), watchos(7.0))
API_UNAVAILABLE(macos, tvos)
@interface INCar : NSObject <NSCopying, NSSecureCoding>

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithCarIdentifier:(NSString *)carIdentifier
                          displayName:(nullable NSString *)displayName
                                 year:(nullable NSNumber *)year
                                 make:(nullable NSString *)make
                                model:(nullable NSString *)model
                                color:(nullable INColor *)color
                             headUnit:(nullable INHeadUnit *)headUnit
          supportedChargingConnectors:(INChargingConnectorTypeOptions)supportedChargingConnectors NS_DESIGNATED_INITIALIZER NS_REFINED_FOR_SWIFT;

@property (readonly, copy, NS_NONATOMIC_IOSONLY) NSString *carIdentifier;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *displayName;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSNumber *year NS_REFINED_FOR_SWIFT;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *make;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *model;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) INColor *color;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) INHeadUnit *headUnit;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) INChargingConnectorTypeOptions supportedChargingConnectors;

- (void)setMaximumPower:(NSMeasurement<NSUnitEnergy *> *)power forChargingConnectorType:(INChargingConnectorTypeOptions)chargingConnectorType;

- (nullable NSMeasurement<NSUnitEnergy *> *)maximumPowerForChargingConnectorType:(INChargingConnectorTypeOptions)chargingConnectorType;

@end

NS_ASSUME_NONNULL_END

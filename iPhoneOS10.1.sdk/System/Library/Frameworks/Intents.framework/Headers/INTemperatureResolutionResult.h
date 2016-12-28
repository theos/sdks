//
//  INTemperatureResolutionResult.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INIntentResolutionResult.h>

@class INTemperature;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macosx)
@interface INTemperatureResolutionResult : INIntentResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed with a given temperature. The resolvedTemperature need not be identical to the input temperature. If the app extension wants to continue with a 'nil' value, it must use +notRequired.
+ (instancetype)successWithResolvedTemperature:(NSMeasurement<NSUnitTemperature *> *)resolvedTemperature NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to disambiguate between the provided temperatures.
+ (instancetype)disambiguationWithTemperaturesToDisambiguate:(NSArray<NSMeasurement<NSUnitTemperature *> *> *)temperaturesToDisambiguate NS_SWIFT_NAME(disambiguation(with:));

// This resolution result is to ask Siri to confirm if this is the temperature with which the user wants to continue.
+ (instancetype)confirmationRequiredWithTemperatureToConfirm:(nullable NSMeasurement<NSUnitTemperature *> *)temperatureToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

@end

NS_ASSUME_NONNULL_END

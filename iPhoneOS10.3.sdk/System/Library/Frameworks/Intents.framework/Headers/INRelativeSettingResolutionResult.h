//
//  INRelativeSettingResolutionResult.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INIntentResolutionResult.h>

#import <Intents/INRelativeSetting.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(macosx)
@interface INRelativeSettingResolutionResult : INIntentResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed, with a given INRelativeSetting. The resolvedValue can be different than the original INRelativeSetting. This allows app extensions to apply business logic constraints.
// Use +notRequired to continue with a 'nil' value.
+ (instancetype)successWithResolvedValue:(INRelativeSetting)resolvedValue NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to confirm if this is the value with which the user wants to continue.
+ (instancetype)confirmationRequiredWithValueToConfirm:(INRelativeSetting)valueToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

@end

NS_ASSUME_NONNULL_END

//
//  INCarAudioSourceResolutionResult.h
//  Intents
//
//  Copyright (c) 2016-2021 Apple Inc. All rights reserved.
//

#import <Intents/INIntentResolutionResult.h>

#import <Intents/INCarAudioSource.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(macos, tvos)
API_UNAVAILABLE(watchos)
@interface INCarAudioSourceResolutionResult : INIntentResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed, with a given INCarAudioSource. The resolvedValue can be different than the original INCarAudioSource. This allows app extensions to apply business logic constraints.
// Use +notRequired to continue with a 'nil' value.
+ (instancetype)successWithResolvedCarAudioSource:(INCarAudioSource)resolvedCarAudioSource NS_SWIFT_NAME(success(with:));

+ (instancetype)successWithResolvedValue:(INCarAudioSource)resolvedValue NS_SWIFT_UNAVAILABLE("Please use 'success(with:)' instead.") API_DEPRECATED_WITH_REPLACEMENT("+successWithResolvedCarAudioSource:", ios(10.0, 11.0)) API_UNAVAILABLE(macos, tvos);

// This resolution result is to ask Siri to confirm if this is the value with which the user wants to continue.
+ (instancetype)confirmationRequiredWithCarAudioSourceToConfirm:(INCarAudioSource)carAudioSourceToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

+ (instancetype)confirmationRequiredWithValueToConfirm:(INCarAudioSource)valueToConfirm NS_SWIFT_UNAVAILABLE("Please use 'confirmationRequired(with:)' instead.") API_DEPRECATED_WITH_REPLACEMENT("+confirmationRequiredWithCarAudioSourceToConfirm:", ios(10.0, 11.0)) API_UNAVAILABLE(macos, tvos);

@end

NS_ASSUME_NONNULL_END

//
//  INDateComponentsResolutionResult.m
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INIntentResolutionResult.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0))
@interface INDateComponentsResolutionResult : INIntentResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed with a given dateComponents. The resolvedDateComponents need not be identical to the input dateComponents. If the app extension wants to continue with a 'nil' value, it must use +notRequired.
+ (instancetype)successWithResolvedDateComponents:(NSDateComponents *)resolvedDateComponents NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to disambiguate between the provided dateComponentss.
+ (instancetype)disambiguationWithDateComponentsToDisambiguate:(NSArray<NSDateComponents *> *)dateComponentsToDisambiguate NS_SWIFT_NAME(disambiguation(with:));

// This resolution result is to ask Siri to confirm if this is the dateComponents with which the user wants to continue.
+ (instancetype)confirmationRequiredWithDateComponentsToConfirm:(nullable NSDateComponents *)dateComponentsToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

@end

NS_ASSUME_NONNULL_END

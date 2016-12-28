//
//  INCurrencyAmountResolutionResult.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INIntentResolutionResult.h>

@class INCurrencyAmount;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macosx)
@interface INCurrencyAmountResolutionResult : INIntentResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed with a given currency amount. The resolvedCurrencyAmount need not be identical to the input currency amount. If the app extension wants to continue with a 'nil' value, it must use +notRequired.
+ (instancetype)successWithResolvedCurrencyAmount:(INCurrencyAmount *)resolvedCurrencyAmount NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to disambiguate between the provided currency amounts.
+ (instancetype)disambiguationWithCurrencyAmountsToDisambiguate:(NSArray<INCurrencyAmount *> *)currencyAmountsToDisambiguate NS_SWIFT_NAME(disambiguation(with:));

// This resolution result is to ask Siri to confirm if this is the currency amount with which the user wants to continue.
+ (instancetype)confirmationRequiredWithCurrencyAmountToConfirm:(nullable INCurrencyAmount *)currencyAmountToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

@end

NS_ASSUME_NONNULL_END

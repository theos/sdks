//
//  INPlacemarkResolutionResult.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INIntentResolutionResult.h>

@class CLPlacemark;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(macosx(10.12), ios(10.0))
@interface INPlacemarkResolutionResult : INIntentResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed with a given placemark. The resolvedPlacemark need not be identical to the input placemark. If the app extension wants to continue with a 'nil' value, it must use +notRequired.
+ (instancetype)successWithResolvedPlacemark:(CLPlacemark *)resolvedPlacemark NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to disambiguate between the provided placemarks.
+ (instancetype)disambiguationWithPlacemarksToDisambiguate:(NSArray<CLPlacemark *> *)placemarksToDisambiguate NS_SWIFT_NAME(disambiguation(with:));

// This resolution result is to ask Siri to confirm if this is the placemark with which the user wants to continue.
+ (instancetype)confirmationRequiredWithPlacemarkToConfirm:(nullable CLPlacemark *)placemarkToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

@end

NS_ASSUME_NONNULL_END

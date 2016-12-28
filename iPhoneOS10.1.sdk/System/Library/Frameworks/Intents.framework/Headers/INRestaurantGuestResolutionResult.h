//
//  INRestaurantGuestResolutionResult.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//
//  This API requires you to work with Apple Maps before your application can use it. For information on how to get started, please go to MapsConnect.
//
//  http://mapsconnect.apple.com/info/extensions

#import <Intents/INIntentResolutionResult.h>

@class INRestaurantGuest;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0))
@interface INRestaurantGuestResolutionResult : INIntentResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed with a given restaurant guest. The resolvedRestaurantGuest need not be identical to the input restaurant. If the app extension wants to continue with a 'nil' value, it must use +notRequired.
+ (instancetype)successWithResolvedRestaurantGuest:(INRestaurantGuest *)resolvedRestaurantGuest NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to disambiguate between the provided restaurant guests.
+ (instancetype)disambiguationWithRestaurantGuestsToDisambiguate:(NSArray<INRestaurantGuest *> *)restaurantGuestsToDisambiguate NS_SWIFT_NAME(disambiguation(with:));

// This resolution result is to ask Siri to confirm if this is the restaurant guest with which the user wants to continue.
+ (instancetype)confirmationRequiredWithRestaurantGuestToConfirm:(nullable INRestaurantGuest *)restaurantGuestToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

@end

NS_ASSUME_NONNULL_END

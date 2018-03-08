//
//  INGetUserCurrentRestaurantReservationBookingsIntentResponse.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//
// This API requires you to work with Apple Maps before your application can use it. For information on how to get started, please go to MapsConnect.
//
// http://mapsconnect.apple.com/info/extensions

#import <Intents/INIntentResponse.h>
#import <Intents/INRestaurantReservationUserBooking.h>

typedef NS_ENUM(NSInteger, INGetUserCurrentRestaurantReservationBookingsIntentResponseCode) {
    INGetUserCurrentRestaurantReservationBookingsIntentResponseCodeSuccess,
    INGetUserCurrentRestaurantReservationBookingsIntentResponseCodeFailure,
    INGetUserCurrentRestaurantReservationBookingsIntentResponseCodeFailureRequestUnsatisfiable,
    INGetUserCurrentRestaurantReservationBookingsIntentResponseCodeUnspecified
};

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(macosx, watchos)
@interface INGetUserCurrentRestaurantReservationBookingsIntentResponse : INIntentResponse

- (instancetype)initWithUserCurrentBookings:(NSArray<INRestaurantReservationUserBooking *> *)userCurrentBookings code:(INGetUserCurrentRestaurantReservationBookingsIntentResponseCode)code userActivity:(nullable NSUserActivity *)userActivity NS_DESIGNATED_INITIALIZER;

@property (readonly, NS_NONATOMIC_IOSONLY) INGetUserCurrentRestaurantReservationBookingsIntentResponseCode code;

@property (copy, NS_NONATOMIC_IOSONLY) NSArray<INRestaurantReservationUserBooking *> *userCurrentBookings;

@end
NS_ASSUME_NONNULL_END

//
//  INRequestRideIntentResponse.h
//  Intents
//
//  Copyright © 2016 Apple Inc. All rights reserved.
//

#import <Intents/INIntentResponse.h>

@class INRideStatus;

typedef NS_ENUM(NSInteger, INRequestRideIntentResponseCode) {
    INRequestRideIntentResponseCodeUnspecified = 0,
    INRequestRideIntentResponseCodeReady,
    INRequestRideIntentResponseCodeInProgress,
    INRequestRideIntentResponseCodeSuccess,
    INRequestRideIntentResponseCodeFailure,
    INRequestRideIntentResponseCodeFailureRequiringAppLaunch,
    INRequestRideIntentResponseCodeFailureRequiringAppLaunchMustVerifyCredentials,
    INRequestRideIntentResponseCodeFailureRequiringAppLaunchNoServiceInArea,
    INRequestRideIntentResponseCodeFailureRequiringAppLaunchServiceTemporarilyUnavailable,
    INRequestRideIntentResponseCodeFailureRequiringAppLaunchPreviousRideNeedsCompletion,
} API_AVAILABLE(ios(10.0), watchos(3.2)) API_UNAVAILABLE(macosx);

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0), watchos(3.2))
API_UNAVAILABLE(macosx)
@interface INRequestRideIntentResponse : INIntentResponse

- (id)init NS_UNAVAILABLE;

// The app extension has the option of capturing its private state as an NSUserActivity and returning it as the 'currentActivity'.
// If the the app is launched, an NSUserActivity will be passed in with the private state.  The NSUserActivity may also be used to query the app's UI extension (if provided) for a view controller representing the current intent handling state.
// In the case of app launch, the NSUserActivity will have its activityType set to the name of the intent. This intent object will also be available in the NSUserActivity.interaction property.
- (instancetype)initWithCode:(INRequestRideIntentResponseCode)code userActivity:(nullable NSUserActivity *)userActivity NS_DESIGNATED_INITIALIZER;

@property (readonly, NS_NONATOMIC_IOSONLY) INRequestRideIntentResponseCode code;

@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) INRideStatus *rideStatus;
@end

NS_ASSUME_NONNULL_END

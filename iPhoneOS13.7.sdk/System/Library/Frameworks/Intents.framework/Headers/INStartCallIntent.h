//
//  INStartCallIntent.h
//  Intents
//
//  Copyright (c) 2016-2020 Apple Inc. All rights reserved.
//

#import <Intents/INIntent.h>
#import <Intents/INIntentResolutionResult.h>

#import <Intents/INCallAudioRoute.h>
#import <Intents/INCallCapability.h>
#import <Intents/INCallDestinationType.h>
#import <Intents/INCallRecordType.h>

@class INCallCapabilityResolutionResult;
@class INCallDestinationTypeResolutionResult;
@class INPerson;
@class INPersonResolutionResult;
@class INStartCallCallCapabilityResolutionResult;
@class INStartCallContactResolutionResult;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(13.0), watchos(6.0))
API_UNAVAILABLE(macos, tvos)
@interface INStartCallIntent : INIntent

- (instancetype)initWithAudioRoute:(INCallAudioRoute)audioRoute
                   destinationType:(INCallDestinationType)destinationType
                          contacts:(nullable NSArray<INPerson *> *)contacts
            recordTypeForRedialing:(INCallRecordType)recordTypeForRedialing
                    callCapability:(INCallCapability)callCapability NS_DESIGNATED_INITIALIZER;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) INCallAudioRoute audioRoute;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) INCallDestinationType destinationType;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSArray<INPerson *> *contacts;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) INCallRecordType recordTypeForRedialing;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) INCallCapability callCapability;

@end

@class INStartCallIntentResponse;

/*!
 @abstract Protocol to declare support for handling an INStartCallIntent. By implementing this protocol, a class can provide logic for resolving, confirming and handling the intent.
 @discussion The minimum requirement for an implementing class is that it should be able to handle the intent. The resolution and confirmation methods are optional. The handling method is always called last, after resolving and confirming the intent.
 */

API_AVAILABLE(ios(13.0), watchos(6.0))
API_UNAVAILABLE(macos, tvos)
@protocol INStartCallIntentHandling <NSObject>

@required

/*!
 @abstract Handling method - Execute the task represented by the INStartCallIntent that's passed in
 @discussion Called to actually execute the intent. The app must return a response for this intent.

 @param  intent The input intent
 @param  completion The response handling block takes a INStartCallIntentResponse containing the details of the result of having executed the intent

 @see  INStartCallIntentResponse
 */

- (void)handleStartCall:(INStartCallIntent *)intent
             completion:(void (^)(INStartCallIntentResponse *response))completion NS_SWIFT_NAME(handle(intent:completion:));

@optional

/*!
 @abstract Confirmation method - Validate that this intent is ready for the next step (i.e. handling)
 @discussion Called prior to asking the app to handle the intent. The app should return a response object that contains additional information about the intent, which may be relevant for the system to show the user prior to handling. If unimplemented, the system will assume the intent is valid following resolution, and will assume there is no additional information relevant to this intent.

 @param  intent The input intent
 @param  completion The response block contains an INStartCallIntentResponse containing additional details about the intent that may be relevant for the system to show the user prior to handling.

 @see INStartCallIntentResponse
 */

- (void)confirmStartCall:(INStartCallIntent *)intent
              completion:(void (^)(INStartCallIntentResponse *response))completion NS_SWIFT_NAME(confirm(intent:completion:));

/*!
 @abstract Resolution methods - Determine if this intent is ready for the next step (confirmation)
 @discussion Called to make sure the app extension is capable of handling this intent in its current form. This method is for validating if the intent needs any further fleshing out.

 @param  intent The input intent
 @param  completion The response block contains an INIntentResolutionResult for the parameter being resolved

 @see INIntentResolutionResult
 */

- (void)resolveDestinationTypeForStartCall:(INStartCallIntent *)intent
                    withCompletion:(void (^)(INCallDestinationTypeResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveDestinationType(for:with:));

- (void)resolveContactsForStartCall:(INStartCallIntent *)intent
                    withCompletion:(void (^)(NSArray<INStartCallContactResolutionResult *> *resolutionResults))completion NS_SWIFT_NAME(resolveContacts(for:with:));

- (void)resolveCallCapabilityForStartCall:(INStartCallIntent *)intent
                    withCompletion:(void (^)(INStartCallCallCapabilityResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveCallCapability(for:with:));

@end

NS_ASSUME_NONNULL_END

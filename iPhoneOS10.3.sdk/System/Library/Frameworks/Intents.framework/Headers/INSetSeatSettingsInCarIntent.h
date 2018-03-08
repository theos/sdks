//
//  INSetSeatSettingsInCarIntent.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INIntent.h>
#import <Intents/INIntentResolutionResult.h>

#import <Intents/INCarSeat.h>
#import <Intents/INRelativeSetting.h>

@class INBooleanResolutionResult;
@class INCarSeatResolutionResult;
@class INIntegerResolutionResult;
@class INRelativeSettingResolutionResult;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(watchos, macosx)
@interface INSetSeatSettingsInCarIntent : INIntent

- (instancetype)initWithEnableHeating:(nullable NSNumber *)enableHeating
                        enableCooling:(nullable NSNumber *)enableCooling
                        enableMassage:(nullable NSNumber *)enableMassage
                                 seat:(INCarSeat)seat
                                level:(nullable NSNumber *)level
                 relativeLevelSetting:(INRelativeSetting)relativeLevelSetting NS_DESIGNATED_INITIALIZER NS_REFINED_FOR_SWIFT;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSNumber *enableHeating NS_REFINED_FOR_SWIFT;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSNumber *enableCooling NS_REFINED_FOR_SWIFT;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSNumber *enableMassage NS_REFINED_FOR_SWIFT;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) INCarSeat seat;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSNumber *level NS_REFINED_FOR_SWIFT;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) INRelativeSetting relativeLevelSetting;

@end

@class INSetSeatSettingsInCarIntentResponse;

/*!
 @brief Protocol to declare support for handling an INSetSeatSettingsInCarIntent 
 @abstract By implementing this protocol, a class can provide logic for resolving, confirming and handling the intent.
 @discussion The minimum requirement for an implementing class is that it should be able to handle the intent. The resolution and confirmation methods are optional. The handling method is always called last, after resolving and confirming the intent.
 */

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(watchos, macosx)
@protocol INSetSeatSettingsInCarIntentHandling <NSObject>

@required

/*!
 @brief handling method

 @abstract Execute the task represented by the INSetSeatSettingsInCarIntent that's passed in
 @discussion Called to actually execute the intent. The app must return a response for this intent.

 @param  setSeatSettingsInCarIntent The input intent
 @param  completion The response handling block takes a INSetSeatSettingsInCarIntentResponse containing the details of the result of having executed the intent

 @see  INSetSeatSettingsInCarIntentResponse
 */

- (void)handleSetSeatSettingsInCar:(INSetSeatSettingsInCarIntent *)intent
                        completion:(void (^)(INSetSeatSettingsInCarIntentResponse *response))completion NS_SWIFT_NAME(handle(setSeatSettingsInCar:completion:));

@optional

/*!
 @brief Confirmation method
 @abstract Validate that this intent is ready for the next step (i.e. handling)
 @discussion Called prior to asking the app to handle the intent. The app should return a response object that contains additional information about the intent, which may be relevant for the system to show the user prior to handling. If unimplemented, the system will assume the intent is valid following resolution, and will assume there is no additional information relevant to this intent.

 @param  setSeatSettingsInCarIntent The input intent
 @param  completion The response block contains an INSetSeatSettingsInCarIntentResponse containing additional details about the intent that may be relevant for the system to show the user prior to handling.

 @see INSetSeatSettingsInCarIntentResponse

 */

- (void)confirmSetSeatSettingsInCar:(INSetSeatSettingsInCarIntent *)intent
                         completion:(void (^)(INSetSeatSettingsInCarIntentResponse *response))completion NS_SWIFT_NAME(confirm(setSeatSettingsInCar:completion:));

/*!
 @brief Resolution methods
 @abstract Determine if this intent is ready for the next step (confirmation)
 @discussion Called to make sure the app extension is capable of handling this intent in its current form. This method is for validating if the intent needs any further fleshing out.

 @param  setSeatSettingsInCarIntent The input intent
 @param  completion The response block contains an INIntentResolutionResult for the parameter being resolved

 @see INIntentResolutionResult

 */

- (void)resolveEnableHeatingForSetSeatSettingsInCar:(INSetSeatSettingsInCarIntent *)intent
                                     withCompletion:(void (^)(INBooleanResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveEnableHeating(forSetSeatSettingsInCar:with:));

- (void)resolveEnableCoolingForSetSeatSettingsInCar:(INSetSeatSettingsInCarIntent *)intent
                                     withCompletion:(void (^)(INBooleanResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveEnableCooling(forSetSeatSettingsInCar:with:));

- (void)resolveEnableMassageForSetSeatSettingsInCar:(INSetSeatSettingsInCarIntent *)intent
                                     withCompletion:(void (^)(INBooleanResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveEnableMassage(forSetSeatSettingsInCar:with:));

- (void)resolveSeatForSetSeatSettingsInCar:(INSetSeatSettingsInCarIntent *)intent
                            withCompletion:(void (^)(INCarSeatResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveSeat(forSetSeatSettingsInCar:with:));

- (void)resolveLevelForSetSeatSettingsInCar:(INSetSeatSettingsInCarIntent *)intent
                             withCompletion:(void (^)(INIntegerResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveLevel(forSetSeatSettingsInCar:with:));

- (void)resolveRelativeLevelSettingForSetSeatSettingsInCar:(INSetSeatSettingsInCarIntent *)intent
                                            withCompletion:(void (^)(INRelativeSettingResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveRelativeLevelSetting(forSetSeatSettingsInCar:with:));

@end

NS_ASSUME_NONNULL_END

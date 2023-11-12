//
//  INAnswerCallIntent.h
//  Intents
//
//  Copyright (c) 2016-2023 Apple Inc. All rights reserved.
//

#import <Intents/INIntent.h>
#import <Intents/INIntentResolutionResult.h>

#import <Intents/INCallAudioRoute.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(16.2), macos(13.1), watchos(9.2))
API_UNAVAILABLE(tvos)
@interface INAnswerCallIntent : INIntent

- (instancetype)initWithAudioRoute:(INCallAudioRoute)audioRoute
                    callIdentifier:(nullable NSString *)callIdentifier NS_DESIGNATED_INITIALIZER API_AVAILABLE(ios(16.2), watchos(9.2), macosx(13.1));

// The audio route to answer the call on.
@property (readonly, assign, NS_NONATOMIC_IOSONLY) INCallAudioRoute audioRoute API_UNAVAILABLE(tvos);

// The identifier of the call that the user wishes to answer.
@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *callIdentifier API_UNAVAILABLE(tvos);

@end

@class INAnswerCallIntentResponse;

/*!
 @abstract Protocol to declare support for handling an INAnswerCallIntent. By implementing this protocol, a class can provide logic for resolving, confirming and handling the intent.
 @discussion The minimum requirement for an implementing class is that it should be able to handle the intent. The resolution and confirmation methods are optional. The handling method is always called last, after resolving and confirming the intent.
 */

API_AVAILABLE(ios(16.2), macos(13.1), watchos(9.2))
API_UNAVAILABLE(tvos)
@protocol INAnswerCallIntentHandling <NSObject>

@required

/*!
 @abstract Handling method - Execute the task represented by the INAnswerCallIntent that's passed in
 @discussion Called to actually execute the intent. The app must return a response for this intent.

 @param  intent The input intent
 @param  completion The response handling block takes a INAnswerCallIntentResponse containing the details of the result of having executed the intent

 @see  INAnswerCallIntentResponse
 */

- (void)handleAnswerCall:(INAnswerCallIntent *)intent
              completion:(void (^)(INAnswerCallIntentResponse *response))completion NS_SWIFT_NAME(handle(intent:completion:));

@optional

/*!
 @abstract Confirmation method - Validate that this intent is ready for the next step (i.e. handling)
 @discussion Called prior to asking the app to handle the intent. The app should return a response object that contains additional information about the intent, which may be relevant for the system to show the user prior to handling. If unimplemented, the system will assume the intent is valid following resolution, and will assume there is no additional information relevant to this intent.

 @param  intent The input intent
 @param  completion The response block contains an INAnswerCallIntentResponse containing additional details about the intent that may be relevant for the system to show the user prior to handling.

 @see INAnswerCallIntentResponse
 */

- (void)confirmAnswerCall:(INAnswerCallIntent *)intent
               completion:(void (^)(INAnswerCallIntentResponse *response))completion NS_SWIFT_NAME(confirm(intent:completion:));

@end

NS_ASSUME_NONNULL_END

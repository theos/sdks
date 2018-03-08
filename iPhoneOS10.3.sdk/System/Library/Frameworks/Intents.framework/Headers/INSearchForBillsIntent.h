//
//  INSearchForBillsIntent.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INIntent.h>
#import <Intents/INIntentResolutionResult.h>

#import <Intents/INBillType.h>
#import <Intents/INPaymentStatus.h>

@class INBillPayee;
@class INBillPayeeResolutionResult;
@class INDateComponentsRange;
@class INDateComponentsRangeResolutionResult;
@class INBillTypeResolutionResult;
@class INPaymentStatusResolutionResult;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.3), watchos(3.2))
API_UNAVAILABLE(macosx)
@interface INSearchForBillsIntent : INIntent

- (instancetype)initWithBillPayee:(nullable INBillPayee *)billPayee
                 paymentDateRange:(nullable INDateComponentsRange *)paymentDateRange
                         billType:(INBillType)billType
                           status:(INPaymentStatus)status
                     dueDateRange:(nullable INDateComponentsRange *)dueDateRange NS_DESIGNATED_INITIALIZER;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) INBillPayee *billPayee;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) INDateComponentsRange *paymentDateRange;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) INBillType billType;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) INPaymentStatus status;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) INDateComponentsRange *dueDateRange;

@end

@class INSearchForBillsIntentResponse;

/*!
 @brief Protocol to declare support for handling an INSearchForBillsIntent 
 @abstract By implementing this protocol, a class can provide logic for resolving, confirming and handling the intent.
 @discussion The minimum requirement for an implementing class is that it should be able to handle the intent. The resolution and confirmation methods are optional. The handling method is always called last, after resolving and confirming the intent.
 */

API_AVAILABLE(ios(10.3), watchos(3.2))
API_UNAVAILABLE(macosx)
@protocol INSearchForBillsIntentHandling <NSObject>

@required

/*!
 @brief handling method

 @abstract Execute the task represented by the INSearchForBillsIntent that's passed in
 @discussion Called to actually execute the intent. The app must return a response for this intent.

 @param  searchForBillsIntent The input intent
 @param  completion The response handling block takes a INSearchForBillsIntentResponse containing the details of the result of having executed the intent

 @see  INSearchForBillsIntentResponse
 */

- (void)handleSearchForBills:(INSearchForBillsIntent *)intent
                  completion:(void (^)(INSearchForBillsIntentResponse *response))completion NS_SWIFT_NAME(handle(searchForBills:completion:));

@optional

/*!
 @brief Confirmation method
 @abstract Validate that this intent is ready for the next step (i.e. handling)
 @discussion Called prior to asking the app to handle the intent. The app should return a response object that contains additional information about the intent, which may be relevant for the system to show the user prior to handling. If unimplemented, the system will assume the intent is valid following resolution, and will assume there is no additional information relevant to this intent.

 @param  searchForBillsIntent The input intent
 @param  completion The response block contains an INSearchForBillsIntentResponse containing additional details about the intent that may be relevant for the system to show the user prior to handling.

 @see INSearchForBillsIntentResponse

 */

- (void)confirmSearchForBills:(INSearchForBillsIntent *)intent
                   completion:(void (^)(INSearchForBillsIntentResponse *response))completion NS_SWIFT_NAME(confirm(searchForBills:completion:));

/*!
 @brief Resolution methods
 @abstract Determine if this intent is ready for the next step (confirmation)
 @discussion Called to make sure the app extension is capable of handling this intent in its current form. This method is for validating if the intent needs any further fleshing out.

 @param  searchForBillsIntent The input intent
 @param  completion The response block contains an INIntentResolutionResult for the parameter being resolved

 @see INIntentResolutionResult

 */

- (void)resolveBillPayeeForSearchForBills:(INSearchForBillsIntent *)intent
                           withCompletion:(void (^)(INBillPayeeResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveBillPayee(forSearchForBills:with:));

- (void)resolvePaymentDateRangeForSearchForBills:(INSearchForBillsIntent *)intent
                                  withCompletion:(void (^)(INDateComponentsRangeResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolvePaymentDateRange(forSearchForBills:with:));

- (void)resolveBillTypeForSearchForBills:(INSearchForBillsIntent *)intent
                          withCompletion:(void (^)(INBillTypeResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveBillType(forSearchForBills:with:));

- (void)resolveStatusForSearchForBills:(INSearchForBillsIntent *)intent
                        withCompletion:(void (^)(INPaymentStatusResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveStatus(forSearchForBills:with:));

- (void)resolveDueDateRangeForSearchForBills:(INSearchForBillsIntent *)intent
                              withCompletion:(void (^)(INDateComponentsRangeResolutionResult *resolutionResult))completion NS_SWIFT_NAME(resolveDueDateRange(forSearchForBills:with:));

@end

NS_ASSUME_NONNULL_END

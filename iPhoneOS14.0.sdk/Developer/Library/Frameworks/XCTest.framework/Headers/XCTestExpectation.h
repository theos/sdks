//
//  Copyright (c) 2016 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @class XCTestExpectation
 *
 * @discussion
 * Expectations represent specific conditions in asynchronous testing.
 */
@interface XCTestExpectation : NSObject

/*!
 * @method -initWithDescription:
 * Designated initializer, requires a nonnull description of the condition the expectation is checking.
 */
- (instancetype)initWithDescription:(NSString *)expectationDescription NS_DESIGNATED_INITIALIZER;

/*!
 * @property expectationDescription
 * The human readable string used to describe the expectation in log output and test reports.
 */
@property (copy) NSString *expectationDescription;

/*!
 * @property inverted
 * If an expectation is set to have inverted behavior, then fulfilling it will have a similar effect that
 * failing to fulfill a conventional expectation has, as handled by the waiter and its delegate. Furthermore,
 * waiters that wait on an inverted expectation will allow the full timeout to elapse and not report
 * timeout to the delegate if it is not fulfilled.
 */
@property (getter=isInverted) BOOL inverted;

/*!
 * @property expectedFulfillmentCount
 * The expectedFulfillmentCount is the number of times -fulfill must be called on the expectation in order for it
 * to report complete fulfillment to its waiter. By default, expectations have a fufillmentCount of 1.
 * This value must be greater than 0 and is not meaningful if combined with \@inverted.
 */
@property (nonatomic) NSUInteger expectedFulfillmentCount;

/*!
 * If set, calls to fulfill() after the expectation has already been fulfilled - exceeding the fulfillment
 * count - will raise. This is the legacy behavior of expectations created through APIs on XCTestCase
 * but is not enabled for expectations created using XCTestExpectation initializers.
 */
@property (nonatomic) BOOL assertForOverFulfill;

/*!
 * @method -fulfill
 *
 * @discussion
 * Call -fulfill to mark an expectation as having been met. It's an error to call -fulfill on an
 * expectation more times than its `expectedFulfillmentCount` value specifies, or when the test case
 * that vended the expectation has already completed. If `assertForOverFulfill` is set when either
 * of these occur, -fulfill will raise an exception.
 */
- (void)fulfill;

@end

NS_ASSUME_NONNULL_END

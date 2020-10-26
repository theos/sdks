//
//  Copyright (c) 2016 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>

@class XCTestExpectation;
@protocol XCTWaiterDelegate;

NS_ASSUME_NONNULL_BEGIN

/*!
 * @enum XCTWaiterResult
 * Values returned by a waiter when it completes, times out, or is interrupted due to another waiter
 * higher in the call stack timing out.
 */
typedef NS_ENUM(NSInteger, XCTWaiterResult) {
    XCTWaiterResultCompleted = 1,
    XCTWaiterResultTimedOut,
    XCTWaiterResultIncorrectOrder,
    XCTWaiterResultInvertedFulfillment,
    XCTWaiterResultInterrupted
};

/*!
 * @class XCTWaiter
 * Manages waiting - pausing the current execution context - for an array of XCTestExpectations. Waiters
 * can be used with or without a delegate to respond to events such as completion, timeout, or invalid 
 * expectation fulfillment. XCTestCase conforms to the delegate protocol and will automatically report
 * timeouts and other unexpected events as test failures.
 *
 * Waiters can be used without a delegate or any association with a test case instance. This allows test
 * support libraries to provide convenience methods for waiting without having to pass test cases through
 * those APIs.
 */
@interface XCTWaiter : NSObject

/*!
 * @method -initWithDelegate:
 * Creates a new waiter with the specified delegate.
 */
- (instancetype)initWithDelegate:(nullable id<XCTWaiterDelegate>)delegate NS_DESIGNATED_INITIALIZER;

/*!
 * @property delegate
 * The waiter delegate will be called with various events described in <XCTWaiterDelegate>.
 */
@property (nullable, weak) id<XCTWaiterDelegate> delegate;

/*!
 * @property fulfilledExpectations
 * Returns an array containing the expectations that were fulfilled, in that order, up until the waiter
 * stopped waiting. Expectations fulfilled after the waiter stopped waiting will not be in the array.
 * The array will be empty until the waiter has started waiting, even if expectations have already been
 * fulfilled.
 */
@property (readonly) NSArray<XCTestExpectation *> *fulfilledExpectations;

/*!
 * @method -waitForExpectations:timeout:
 * Wait on a group of expectations for up to the specified timeout. May return early based on fulfillment
 * of the waited on expectations.
 */
- (XCTWaiterResult)waitForExpectations:(NSArray<XCTestExpectation *> *)expectations timeout:(NSTimeInterval)seconds;

/*!
 * @method -waitForExpectations:timeout:enforceOrder:
 * Wait on expectations and specify whether they must be fulfilled in the given order. Expectations can
 * only appear in the list once.
 */
- (XCTWaiterResult)waitForExpectations:(NSArray<XCTestExpectation *> *)expectations timeout:(NSTimeInterval)seconds enforceOrder:(BOOL)enforceOrderOfFulfillment;

/*!
 * @method +waitForExpectations:timeout:
 * Convenience API that creates a waiter object which then waits on a group of expectations for up to
 * the specified timeout. May return early based on fulfillment of the waited on expectations. The waiter
 * is discarded when the wait completes.
 */
+ (XCTWaiterResult)waitForExpectations:(NSArray<XCTestExpectation *> *)expectations timeout:(NSTimeInterval)seconds XCT_WARN_UNUSED;

/*!
 * @method +waitForExpectations:timeout:enforceOrder:
 * Convenience API that creates a waiter object which then waits on a group of expectations and optionally
 * enforces the order in which they are fulfilled. Expectations can only appear in the list once. The waiter
 * is discarded when the wait completes.
 */
+ (XCTWaiterResult)waitForExpectations:(NSArray<XCTestExpectation *> *)expectations timeout:(NSTimeInterval)seconds enforceOrder:(BOOL)enforceOrderOfFulfillment XCT_WARN_UNUSED;

@end

/*!
 * @protocol XCTWaiterDelegate
 * Events are reported to the waiter's delegate via these methods. XCTestCase conforms to the delegate
 * protocol and will automatically report timeouts and other unexpected events as test failures.
 *
 * @note These methods are invoked on an arbitrary queue.
 */
@protocol XCTWaiterDelegate <NSObject>

/*!
 * @method -waiter:didTimeoutWithUnfulfilledExpectations:
 * Invoked when not all waited on expectations are fulfilled during the timeout period. If the delegate
 * is an XCTestCase instance, this will be reported as a test failure.
 */
- (void)waiter:(XCTWaiter *)waiter didTimeoutWithUnfulfilledExpectations:(NSArray<XCTestExpectation *> *)unfulfilledExpectations;

/*!
 * @method -waiter:fulfillmentDidViolateOrderingConstraintsForExpectation:requiredExpectation:
 * Invoked when the -wait call has specified that fulfillment order should be enforced and an expectation
 * has been fulfilled in the wrong order. If the delegate is an XCTestCase instance, this will be reported
 * as a test failure.
 */
- (void)waiter:(XCTWaiter *)waiter fulfillmentDidViolateOrderingConstraintsForExpectation:(XCTestExpectation *)expectation requiredExpectation:(XCTestExpectation *)requiredExpectation;

/*!
 * @method -waiter:didFulfillInvertedExpectation:
 * Invoked when an expectation marked as inverted (/see inverted) is fulfilled. If the delegate is an
 * XCTestCase instance, this will be reported as a test failure.
 */
- (void)waiter:(XCTWaiter *)waiter didFulfillInvertedExpectation:(XCTestExpectation *)expectation;

/*!
 * @method -nestedWaiter:wasInterruptedByTimedOutWaiter:
 * Invoked when the waiter is interrupted prior to its expectations being fulfilled or timing out.
 * This occurs when an "outer" waiter times out, resulting in any waiters nested inside it being
 * interrupted to allow the call stack to quickly unwind.
 */
- (void)nestedWaiter:(XCTWaiter *)waiter wasInterruptedByTimedOutWaiter:(XCTWaiter *)outerWaiter;

@end

NS_ASSUME_NONNULL_END


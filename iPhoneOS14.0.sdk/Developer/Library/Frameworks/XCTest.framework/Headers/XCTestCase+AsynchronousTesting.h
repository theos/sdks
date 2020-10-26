//
//  Copyright © 2014-2017 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestCase.h>
#import <XCTest/XCTWaiter.h>
#import <XCTest/XCTKVOExpectation.h>
#import <XCTest/XCTNSNotificationExpectation.h>
#import <XCTest/XCTNSPredicateExpectation.h>

@class XCTestExpectation;

NS_ASSUME_NONNULL_BEGIN

/*!
 * @category AsynchronousTesting
 *
 * @discussion
 * This category introduces support for asynchronous testing in XCTestCase. The mechanism
 * allows you to specify one or more "expectations" that will occur asynchronously
 * as a result of actions in the test. Once all expectations have been set, a "wait"
 * API is called that will block execution of subsequent test code until all expected
 * conditions have been fulfilled or a timeout occurs.
 */
@interface XCTestCase (AsynchronousTesting) <XCTWaiterDelegate>

/*!
 * @method -expectationWithDescription:
 *
 * @param description
 * This string will be displayed in the test log to help diagnose failures.
 *
 * @discussion
 * Creates and returns an expectation associated with the test case.
 */
- (XCTestExpectation *)expectationWithDescription:(NSString *)description XCT_WARN_UNUSED;

/*!
 * @typedef XCWaitCompletionHandler
 * A block to be invoked when a call to -waitForExpectationsWithTimeout:handler: times out or has
 * had all associated expectations fulfilled.
 *
 * @param error
 * If the wait timed out or a failure was raised while waiting, the error's code
 * will specify the type of failure. Otherwise error will be nil.
 */
typedef void (^XCWaitCompletionHandler)(NSError * _Nullable error);

/*!
 * @method -waitForExpectationsWithTimeout:handler:
 *
 * @param timeout
 * The amount of time within which all expectations must be fulfilled.
 *
 * @param handler
 * If provided, the handler will be invoked both on timeout or fulfillment of all
 * expectations. Timeout is always treated as a test failure.
 *
 * @discussion
 * -waitForExpectationsWithTimeout:handler: creates a point of synchronization in the flow of a
 * test. Only one -waitForExpectationsWithTimeout:handler: can be active at any given time, but
 * multiple discrete sequences of { expectations -> wait } can be chained together.
 *
 * -waitForExpectationsWithTimeout:handler: runs the run loop while handling events until all expectations
 * are fulfilled or the timeout is reached. Clients should not manipulate the run
 * loop while using this API.
 */
- (void)waitForExpectationsWithTimeout:(NSTimeInterval)timeout handler:(nullable XCWaitCompletionHandler)handler;

/*!
 * @method -waitForExpectations:timeout:
 * Wait on a group of expectations for up to the specified timeout. May return early based on fulfillment
 * of the waited on expectations.
 */
- (void)waitForExpectations:(NSArray<XCTestExpectation *> *)expectations timeout:(NSTimeInterval)seconds;

/*!
 * @method -waitForExpectations:timeout:enforceOrder:
 * Wait on expectations and specify whether they must be fulfilled in the given order. Expectations
 * can only appear in the list once.
 */
- (void)waitForExpectations:(NSArray<XCTestExpectation *> *)expectations timeout:(NSTimeInterval)seconds enforceOrder:(BOOL)enforceOrderOfFulfillment;

#pragma mark Convenience APIs

/*!
 * @method -keyValueObservingExpectationForObject:keyPath:expectedValue:
 *
 * @discussion
 * A convenience method for asynchronous tests that use Key Value Observing to detect changes
 * to values on an object. This variant takes an expected value and observes changes on the object
 * until the keyPath's value matches the expected value using -[NSObject isEqual:]. If
 * other comparisons are needed, use the variant below that takes a handler block.
 *
 * @param objectToObserve
 * The object to observe.
 *
 * @param keyPath
 * The key path to observe.
 *
 * @param expectedValue
 * Expected value of the keyPath for the object. The expectation will fulfill itself when the
 * keyPath is equal, as tested using -[NSObject isEqual:]. If nil, the expectation will be
 * fulfilled by the first change to the key path of the observed object.
 *
 * @return
 * Creates and returns an expectation associated with the test case.
 */
- (XCTestExpectation *)keyValueObservingExpectationForObject:(id)objectToObserve keyPath:(NSString *)keyPath expectedValue:(nullable id)expectedValue;

/*!
 * @method -keyValueObservingExpectationForObject:keyPath:handler:
 *
 * @discussion
 * Variant of the convenience for tests that use Key Value Observing. Takes a handler
 * block instead of an expected value. Every KVO change will run the handler block until
 * it returns YES (or the wait times out). Returning YES from the block will fulfill the
 * expectation. XCTAssert and related APIs can be used in the block to report a failure.
 *
 * @param objectToObserve
 * The object to observe.
 *
 * @param keyPath
 * The key path to observe.
 *
 * @param handler
 * Optional handler, /see XCKeyValueObservingExpectationHandler. If not provided, the expectation will
 * be fulfilled by the first change to the key path of the observed object.
 *
 * @return
 * Creates and returns an expectation associated with the test case.
 */
- (XCTestExpectation *)keyValueObservingExpectationForObject:(id)objectToObserve keyPath:(NSString *)keyPath handler:(nullable XCKeyValueObservingExpectationHandler)handler;

/*!
 * @method -expectationForNotification:object:handler:
 *
 * @discussion
 * A convenience method for asynchronous tests that observe NSNotifications from the default
 * NSNotificationCenter.
 *
 * @param notificationName
 * The notification to register for.
 *
 * @param objectToObserve
 * The object to observe.
 *
 * @param handler
 * Optional handler, /see XCNotificationExpectationHandler. If not provided, the expectation
 * will be fulfilled by the first notification matching the specified name from the
 * observed object.
 *
 * @return
 * Creates and returns an expectation associated with the test case.
 */
- (XCTestExpectation *)expectationForNotification:(NSNotificationName)notificationName object:(nullable id)objectToObserve handler:(nullable XCNotificationExpectationHandler)handler;

/*!
 * @method -expectationForNotification:object:notificationCenter:handler:
 *
 * @discussion
 * A convenience method for asynchronous tests that observe NSNotifications from a specific
 * NSNotificationCenter.
 *
 * @param notificationName
 * The notification to register for.
 *
 * @param objectToObserve
 * The object to observe.
 *
 * @param notificationCenter
 * The notification center from which to observe the notification.
 *
 * @param handler
 * Optional handler, /see XCNotificationExpectationHandler. If not provided, the expectation
 * will be fulfilled by the first notification matching the specified name from the
 * observed object.
 *
 * @return
 * Creates and returns an expectation associated with the test case.
 */
- (XCTestExpectation *)expectationForNotification:(NSNotificationName)notificationName object:(nullable id)objectToObserve notificationCenter:(NSNotificationCenter *)notificationCenter handler:(nullable XCNotificationExpectationHandler)handler;

/*!
 * @method -expectationForPredicate:evaluatedWithObject:handler:
 * Creates an expectation that is fulfilled if the predicate returns true when evaluated with the given
 * object. The expectation periodically evaluates the predicate and also may use notifications or other
 * events to optimistically re-evaluate.
 */
- (XCTestExpectation *)expectationForPredicate:(NSPredicate *)predicate evaluatedWithObject:(nullable id)object handler:(nullable XCPredicateExpectationHandler)handler;

@end

NS_ASSUME_NONNULL_END

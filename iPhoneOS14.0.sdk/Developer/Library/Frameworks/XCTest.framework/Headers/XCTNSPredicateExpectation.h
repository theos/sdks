//
//  Copyright (c) 2016 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCTestExpectation.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @typedef
 * Handler called when evaluating the predicate against the object returns true. If the handler is not
 * provided the first successful evaluation will fulfill the expectation. If provided, the handler will
 * be queried each time the notification is received to determine whether the expectation should be fulfilled
 * or not.
 */
typedef BOOL (^XCPredicateExpectationHandler)(void);

/*!
 * @class XCTNSPredicateExpectation
 * Expectation subclass for waiting on a condition defined by an NSPredicate and an object.
 */
@interface XCTNSPredicateExpectation : XCTestExpectation

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDescription:(NSString *)expectationDescription NS_UNAVAILABLE;

/*!
 * @method -initWithPredicate:object:
 * Initializes an expectation that waits for a predicate to evaluate as true with the provided object.
 */
- (instancetype)initWithPredicate:(NSPredicate *)predicate object:(nullable id)object NS_DESIGNATED_INITIALIZER;

/*!
 * @property predicate
 * Returns the predicate used by the expectation.
 */
@property (readonly, copy) NSPredicate *predicate;

/*!
 * @property object
 * Returns the object against which the predicate is evaluated.
 */
@property (nullable, readonly, strong) id object;

/*!
 * @property handler
 * Allows the caller to install a special handler to do custom evaluation of predicate and its object.
 */
@property (nullable, copy) XCPredicateExpectationHandler handler;

/*!
 * @property expectedFulfillmentCount
 * Unavailable on this class; XCTNSPredicateExpectation repeatedly evaluates its predicate until it becomes
 * true. Once the predicate has become true, it is expected to remain true and will not be evaluated again.
 * Setting expectedFulfillmentCount has no impact on fulfillment of the expectation.
 */
@property (nonatomic) NSUInteger expectedFulfillmentCount NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

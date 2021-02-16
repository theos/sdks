//
//  Copyright © 2016-2017 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCTestExpectation.h>
#import <XCTest/XCTestCase+AsynchronousTesting.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @typedef
 * Handler called when the expectation has received the Darwin notification. If the handler is not
 * provided the first posting of the notification will fulfill the expectation. If provided, the handler
 * will be queried each time the notification is received to determine whether the expectation should
 * be fulfilled or not. This allows the caller to check Darwin state variables or perform other logic
 * beyond simply verifying that the notification has been posted.
 */
typedef BOOL (^XCTDarwinNotificationExpectationHandler)(void);

/*!
 * @class XCTDarwinNotificationExpectation
 * Expectation subclass for waiting on a condition defined by a Darwin notification. The notification
 * which may be posted in the same process or by other processes. Be aware that Darwin notifications
 * may be coalesced when posted in quick succession, so be careful especially when using the
 * `expectedFulfillmentCount` property with this class.
 */
@interface XCTDarwinNotificationExpectation : XCTestExpectation

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDescription:(NSString *)expectationDescription NS_UNAVAILABLE;

/*!
 * @method -initWithNotificationName:
 *
 * @discussion
 * Initializes an expectation that waits for a Darwin notification to be posted.
 */
- (instancetype)initWithNotificationName:(NSString *)notificationName NS_DESIGNATED_INITIALIZER;

/*!
 * @property notificationName
 * Returns the value of the notification name that was provided to the initializer.
 */
@property (readonly, copy) NSString *notificationName;

/*!
 * @property handler
 * Allows the caller to install a special handler to do custom evaluation when the notification is posted.
 */
@property (nullable, copy) XCTDarwinNotificationExpectationHandler handler;

@end

NS_ASSUME_NONNULL_END

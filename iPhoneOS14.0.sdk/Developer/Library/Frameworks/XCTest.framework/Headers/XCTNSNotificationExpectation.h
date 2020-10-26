//
//  Copyright (c) 2016 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCTestExpectation.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @typedef
 * A block to be invoked when a notification matching the specified name is observed
 * from the object.
 *
 * @param notification
 * The notification object.
 *
 * @return
 * Return YES if the expectation is fulfilled, NO if it is not.
 */
typedef BOOL (^XCNotificationExpectationHandler)(NSNotification *notification);

/*!
 * @class XCTNSNotificationExpectation
 * Expectation subclass for waiting on a condition defined by an NSNotification.
 */
@interface XCTNSNotificationExpectation : XCTestExpectation

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDescription:(NSString *)expectationDescription NS_UNAVAILABLE;

/*!
 * @method -initWithName:object:notificationCenter:
 *
 * @discussion
 * Initializes an expectation that waits for an NSNotification to be posted by an optional object from
 * a given notification center.
 */
- (instancetype)initWithName:(NSNotificationName)notificationName object:(nullable id)object notificationCenter:(NSNotificationCenter *)notificationCenter NS_DESIGNATED_INITIALIZER;

/*!
 * @method -initWithName:object:
 *
 * @discussion
 * Initializes an expectation that waits for an NSNotification to be posted by an optional object from
 * the default notification center.
 */
- (instancetype)initWithName:(NSNotificationName)notificationName object:(nullable id)object;

/*!
 * @method -initWithName:object:
 *
 * @discussion
 * Initializes an expectation that waits for an NSNotification to be posted by any object from
 * the default notification center.
 */
- (instancetype)initWithName:(NSNotificationName)notificationName;

/*!
 * @property notificationName
 * Returns the name of the notification being waited on.
 */
@property (readonly, copy) NSNotificationName notificationName;

/*!
 * @property observedObject
 * Returns the object that will post the notification.
 */
@property (nullable, readonly, strong) id observedObject;

/*!
 * @property notificationCenter
 * Returns the notification center that is being used.
 */
@property (readonly, strong) NSNotificationCenter *notificationCenter;

/*!
 * @property handler
 * Allows the caller to install a special handler to do custom evaluation of received notifications
 * matching the specified object and notification center.
 */
@property (nullable, copy) XCNotificationExpectationHandler handler;

@end

NS_ASSUME_NONNULL_END

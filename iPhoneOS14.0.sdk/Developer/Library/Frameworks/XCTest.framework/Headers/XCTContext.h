//
//  Copyright © 2017 Apple. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCTActivity.h>

NS_ASSUME_NONNULL_BEGIN

@interface XCTContext : NSObject

- (instancetype)init XCT_UNAVAILABLE("XCTContext is not to be instantiated directly, use +[XCTContext runActivityNamed:block:] to run an activity.");
+ (instancetype)new XCT_UNAVAILABLE("XCTContext is not to be instantiated directly, use +[XCTContext runActivityNamed:block:] to run an activity.");

/*!
 * @method -runActivityNamed:block:
 *
 * Call to create a named activity around the block.
 * Can be used to group low level actions, such as typing and tapping, into high level
 * tasks, such as filling of a form in a UI test.
 * @textblock
 
 - (void)testSignUpFlow {
     XCUIElement *form = ...
     [XCTContext runActivityNamed:@"Fill in account information" block:^{
         [form.textFields[@"Email"] typeText:@"john.appleseed@icloud.com"];
         [form.secureTextFields[@"New Password"] typeText:@"myPassword"];
     }];
     [XCTContext runActivityNamed:@"Create account" block:^{
         XCUIElement *submit = form.buttons[@"Create"];
         XCTAssert(submit.isEnabled);
         [submit tap];
     }];
 }
 
 * @/textblock
 * Such test would result in an activity hierarchy of:
 * @textblock
 
 - Fill in account information
     - Type "john.appleseed@icloud.com" into "Email"
     - Type "myPassword" into "New Password"
 - Create account
     - Tap "Create"
 
 * @/textblock
 *
 * Must be called from the main thread.
 *
 * @param name A string that will help identify the activity.
 *
 * @param block A block whose contents are wrapped in the new activity.
 */
+ (void)runActivityNamed:(NSString *)name block:(XCT_NOESCAPE void(^)(id<XCTActivity> activity))block NS_REFINED_FOR_SWIFT;

@end

NS_ASSUME_NONNULL_END

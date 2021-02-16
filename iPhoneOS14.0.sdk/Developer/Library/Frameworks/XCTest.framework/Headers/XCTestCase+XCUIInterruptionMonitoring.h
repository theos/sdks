//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCTestCase.h>

NS_ASSUME_NONNULL_BEGIN

#if XCT_UI_TESTING_AVAILABLE

@interface XCTestCase (XCUIInterruptionMonitoring)

/*!
 * @method addUIInterruptionMonitorWithDescription:handler:
 *
 * @abstract Adds a monitor to the test. Monitors are automatically removed at the end of the test or can be manually removed using -removeUIInterruptionMonitor:.
 * Monitors are invoked in the reverse order in which they are added until one of the monitors returns true, indicating that it has handled the interruption.
 *
 * @param handlerDescription
 * Explanation of the behavior and purpose of this monitor, mainly used for debugging and analysis.
 *
 * @param handler
 * Handler block for asynchronous, non-deterministic interrupting UI such as alerts and other dialogs. Handlers should return true if they handled the UI, false if they did not.
 * The handler is passed an XCUIElement representing the top level UI element for the alert.
 *
 * @return Returns an opaque token that can be used to remove the monitor.
 *
 * @discussion
 * A "UI interruption" is any element which unexpectedly blocks access to an element with which a UI test is trying to interact. Interrupting elements are most commonly alerts,
 * dialogs, or other windows, but can be of other types as well. Interruptions are unexpected or at least not deterministic: the appearance of an alert in direct response to
 * a test action such as clicking a button is not an interruption and should not be handled using a UI interruption monitor. Instead, it's simply part of the UI and should be
 * found using standard queries and interacted with using standard event methods. Note that some interruptions are part of the app's own UI, others are presented on
 * behalf of system apps and services, so queries for these elements must be constructed with the right process at their root.
 *
 * Use a UI interruption monitor for alerts that appear unexpectedly or with non-deterministic timing. Monitors are not invoked simply by the appearance of an alert or similar
 * UI, they are called when the presence of such UI interferes with actions the test is attempting to take. For example, consider the following sequence:
 *
 * - test taps button
 * - app displays confirmation dialog
 *
 * In this case, the dialog that is presented can be anticipated by the test, so a UI interruption monitor should not be used. Instead, the sequence should look like:
 *
 * - test taps button
 * - test constructs an XCUIElement for the dialog and uses XCUIElement.waitForExistence(timeout:) to wait for it to appear
 * - app displays confirmation dialog
 * - test synthesizes a tap for the appropriate button in the dialog
 * - test continues execution
 *
 * There was no UI interruption in this example because every step was deterministic and known in advance. Note the use of XCUIElement.waitForExistence(timeout:) to deal with
 * asynchronous delays in the display of the dialog.
 *
 * By contrast, consider the next sequence, where use of a UI interruption monitor is the correct solution:
 *
 * - test launches app
 * - app initiates asynchronous network request
 * - test interacts with app
 * - network request completes, app decides to display a dialog to the user
 * - dialog appears just as the test is about to tap on a button
 *      - the appearance of the dialog is not deterministic
 *      - the test can anticipate that the dialog might be displayed at some point, but not when
 *      - accordingly, the test has installed a UI interruption monitor that knows how to handle the network response dialog
 * - when XCTest computes a hit point for the button, it discovers the dialog and treats it as "interrupting UI"
 * - the previously installed UI interruption monitor is invoked
 * - it handles the dialog
 * - XCTest computes the hit point for the button and synthesizes the requested tap event
 * - test execution continues...
 *
 * Monitors can be designed to be general or specific in how they handle interruptions. The simplest general approach might simply attempt to cancel/dismiss/close
 * any interrupting dialog/alert/window without consideration for its contents or purpose. A more specific monitor might make decisions based on the UI and contents
 * of the interruption. Tests may install multiple monitors, which will be invoked in reverse order of installation. If a more specific monitor wishes to be skipped for a
 * given interruption, its handler can simply return false - the next monitor will be invoked, and so on, until one of them returns true, signifying that it has handled
 * the interruption. In some cases, a default monitor may handle interruptions.
 */
- (id<NSObject>)addUIInterruptionMonitorWithDescription:(NSString *)handlerDescription
                                                handler:(BOOL (^)(XCUIElement *interruptingElement))handler API_AVAILABLE(macos(10.11), ios(9.0), tvos(9.0));

/*!
 * @method removeUIInterruptionMonitor:
 * 
 * @abstract Removes a monitor using the token provided when it was added.
 *
 * @param monitor
 * The token representing the monitor returned from the call to addUIInterruptionMonitorWithDescription:handler: where it was registered.
 */
- (void)removeUIInterruptionMonitor:(id<NSObject>)monitor API_AVAILABLE(macos(10.11), ios(9.0), tvos(9.0));

@end

#endif

NS_ASSUME_NONNULL_END

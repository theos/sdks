//
//  Copyright (c) 2014-2015 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCUIElement.h>
#import <XCTest/XCUIProtectedResource.h>

NS_ASSUME_NONNULL_BEGIN

#if XCT_UI_TESTING_AVAILABLE

typedef NS_ENUM(NSUInteger, XCUIApplicationState) {
    XCUIApplicationStateUnknown = 0,
    XCUIApplicationStateNotRunning = 1,
#if !TARGET_OS_OSX
    XCUIApplicationStateRunningBackgroundSuspended = 2,
#endif
    XCUIApplicationStateRunningBackground = 3,
    XCUIApplicationStateRunningForeground = 4
};

NS_CLASS_AVAILABLE(10_11, 9_0)

/*! Proxy for an application that may or may not be running. */
@interface XCUIApplication : XCUIElement

/*!
 * Returns a proxy for the application specified by the "Target Application" target setting.
 */
- (instancetype)init NS_DESIGNATED_INITIALIZER;
+ (instancetype)new;

/*!
 * Returns a proxy for an application associated with the specified bundle identifier.
 */
- (instancetype)initWithBundleIdentifier:(NSString *)bundleIdentifier NS_DESIGNATED_INITIALIZER;

#if TARGET_OS_OSX || TARGET_OS_MACCATALYST

/*!
 * Returns a proxy for the application at the specified file system URL.
 */
- (instancetype)initWithURL:(NSURL *)url NS_DESIGNATED_INITIALIZER;

#endif

/*!
 * Launches the application synchronously. On return the application ready to handle events. If the
 * application is already running, the existing instance will be terminated to ensure a clean state
 * for the launched instance.
 *
 * Any failure in the launch sequence will be reported as a test failure and the test will be halted
 * at that point.
*/
- (void)launch;

/*!
 * Activates the application synchronously. On return the application is ready to handle events.
 * If the application was not running prior, it will be launched automatically. If the application
 * would be launched as a result of this method and was previously launched via -launch, the launch
 * arguments and environment variables that were used then will be supplied again for the new launch.
 *
 * Unlike -launch, if the application is already running this call will not terminate the existing
 * instance.
 *
 * Any failure in the activation or launch sequence will be reported as a test failure and the test
 * will be halted at that point.
*/
- (void)activate;

/*!
 * Terminates any running instance of the application. If the application has an existing debug session
 * via Xcode, the termination is implemented as a halt via that debug connection. Otherwise, a SIGKILL
 * is sent to the process.
 */
- (void)terminate;

/*!
 * The arguments that will be passed to the application on launch. If not modified, these are the
 * arguments that Xcode will pass on launch. Those arguments can be changed, added to, or removed.
 * Unlike NSTask, it is legal to modify these arguments after the application has been launched. These
 * changes will not affect the current launch session, but will take effect the next time the application
 * is launched.
 */
@property (nonatomic, copy) NSArray <NSString *> *launchArguments;

/*!
 * The environment that will be passed to the application on launch. If not modified, this is the
 * environment that Xcode will pass on launch. Those variables can be changed, added to, or removed.
 * Unlike NSTask, it is legal to modify the environment after the application has been launched. These
 * changes will not affect the current launch session, but will take effect the next time the application
 * is launched.
 */
@property (nonatomic, copy) NSDictionary <NSString *, NSString *> *launchEnvironment;

/*!
 * The most recently observed state of the application. Applications are passively monitored to update
 * this property as they change state. Consequently, updates to this property are inherently asynchronous.
 *
 * Some guarantees are made, however:
 *
 *    - When -launch and -activate return, if they were successful, the state of the application will be
 *      XCUIApplicationStateRunningBackground or XCUIApplicationStateRunningForeground, whichever is
 *      appropriate for the application. Most applications will be XCUIApplicationStateRunningForeground
 *      after launch or activation.
 *
 *    - When -terminate returns, if it was successful, the state of the application will be
 *      XCUIApplicationStateNotRunning.
 */
@property (readonly) XCUIApplicationState state;

/*!
 * Waits for the application to become a specific state, giving up after a number of seconds.
 *
 * Returns YES if the application is currently in or transitions to the desired state within the specified
 * timeout period.
 */
- (BOOL)waitForState:(XCUIApplicationState)state timeout:(NSTimeInterval)timeout XCT_WARN_UNUSED;

/*!
 * Reset the authorization status for a protected resource, such that the system will display the
 * authorization prompt the next time the resource is accessed. The app does not have to be in a running state to
 * use this API. If the app is running, it might get terminated while the reset occurs for some protected resources.
 *
 * Example usage:
 * @code
 * XCUIApplication *app = [XCUIApplication new];
 * [app resetAuthorizationStatusForResource:XCUIProtectedResourcePhotos];
 * [app launch];
 * @endcode
 */
- (void)resetAuthorizationStatusForResource:(XCUIProtectedResource)resource XCT_PROTECTED_RESOURCES_RESET_API_AVAILABLE;

@end

#endif

NS_ASSUME_NONNULL_END

//
//  Copyright (c) 2014-2015 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCUISiriService.h>

#if XCT_UI_TESTING_AVAILABLE

#if TARGET_OS_IPHONE && !TARGET_OS_MACCATALYST

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @enum XCUIDeviceButton
 *
 * Represents a physical button on a device.
 *
 * @note Some buttons are not available in the Simulator, and should not be used in your tests.
 * You can use a block like this:
 *
 *     #if !TARGET_OS_SIMULATOR
 *     // test code that depends on buttons not available in the Simulator
 *     #endif
 *
 * in your test code to ensure it does not call unavailable APIs.
 */
typedef NS_ENUM(NSInteger, XCUIDeviceButton) {
    XCUIDeviceButtonHome = 1,
    XCUIDeviceButtonVolumeUp XCTEST_SIMULATOR_UNAVAILABLE("This API is not available in the Simulator, see the XCUIDeviceButton documentation for details.") = 2,
    XCUIDeviceButtonVolumeDown XCTEST_SIMULATOR_UNAVAILABLE("This API is not available in the Simulator, see the XCUIDeviceButton documentation for details.") = 3
};

/*! Represents a device, providing an interface for simulating events involving physical buttons and device state. */
NS_CLASS_AVAILABLE(NA, 9_0)
@interface XCUIDevice : NSObject

/*! The current device. */
@property (class, readonly) XCUIDevice *sharedDevice;

+ (instancetype)new XCT_UNAVAILABLE("Access XCUIDevice through +sharedDevice");
- (instancetype)init XCT_DEPRECATED_WITH_REPLACEMENT("sharedDevice");

#if TARGET_OS_IOS
/*! The orientation of the device. */
@property (nonatomic) UIDeviceOrientation orientation;

/*!
 * Provides access to an object representing the Siri interface on the device.
 */
@property (readonly) XCUISiriService *siriService NS_AVAILABLE_IOS(10_3);
#endif

/*! Simulates the user pressing a physical button. */
- (void)pressButton:(XCUIDeviceButton)button;

@end

NS_ASSUME_NONNULL_END

#endif

#endif


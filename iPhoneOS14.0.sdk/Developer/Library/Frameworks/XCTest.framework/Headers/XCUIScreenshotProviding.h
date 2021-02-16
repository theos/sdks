//
//  Copyright © 2017 Apple. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCUIScreenshot.h>

#if XCT_UI_TESTING_AVAILABLE

NS_ASSUME_NONNULL_BEGIN

@protocol XCUIScreenshotProviding <NSObject>

/*!
 * Captures and returns a screenshot of the receiver.
 *
 * Equivalent to capturing a screenshot manually, e.g. if two windows are overlapping and
 * the occluded window is captured, the front window will be visible in the screenshot.
 */
- (XCUIScreenshot *)screenshot;

@end

NS_ASSUME_NONNULL_END

#endif // XCT_UI_TESTING_AVAILABLE

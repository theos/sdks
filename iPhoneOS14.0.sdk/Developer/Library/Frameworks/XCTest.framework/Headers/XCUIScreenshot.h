//
//  Copyright © 2017 Apple. All rights reserved.
//

#import <XCTest/XCTestDefines.h>

#if XCT_UI_TESTING_AVAILABLE

#if TARGET_OS_OSX
@class NSImage;
#elif TARGET_OS_IPHONE
@class UIImage;
#endif

NS_ASSUME_NONNULL_BEGIN

/*!
 * Represents a captured screenshot.
 */
@interface XCUIScreenshot : NSObject

+ (instancetype)new XCT_UNAVAILABLE("Only XCUIScreenshotProviding objects create screenshots. See XCUIScreen or XCUIElement.");
- (instancetype)init XCT_UNAVAILABLE("Only XCUIScreenshotProviding objects create screenshots. See XCUIScreen or XCUIElement.");

/*!
 * @property image
 * Underlying platform-specific image object.
 */
#if TARGET_OS_OSX
@property (readonly, copy) NSImage *image;
#else
@property (readonly, copy) UIImage *image;
#endif

/*!
 * @property PNGRepresentation
 * PNG image data of the underlying image.
 */
@property (readonly, copy) NSData *PNGRepresentation;

@end

NS_ASSUME_NONNULL_END

#endif

//
//  Copyright © 2017 Apple Inc. All rights reserved.
//

#import <XCTest/XCUIElementTypeQueryProvider.h>

NS_ASSUME_NONNULL_BEGIN

#if XCT_UI_TESTING_AVAILABLE && TARGET_OS_IOS && !TARGET_OS_MACCATALYST

/*!
 * @class XCUISiriService
 * Represents a device's Siri interface and allows issuing textual queries
 * and producing element queries for UI shown by Siri.
 */
NS_CLASS_AVAILABLE_IOS(10_3)
@interface XCUISiriService : NSObject

+ (instancetype)new XCT_UNAVAILABLE("Access XCUISiriService through the siriService property on XCUIDevice.");
- (instancetype)init XCT_UNAVAILABLE("Access XCUISiriService through the siriService property on XCUIDevice.");

/*!
 * Provides debugging information about the element representing the root of the Siri UI.
 * @seealso XCUIElement
 */
@property (readonly, copy) NSString *debugDescription;

/*!
 * Presents the Siri UI, if it is not currently active, and accepts a string
 * which is then processed as if it were recognized speech.
 *
 * @param text The string to pass to Siri for processing.
 */
- (void)activateWithVoiceRecognitionText:(NSString *)text;

@end

@interface XCUISiriService (XCUIElementTypeQueryProvider) <XCUIElementTypeQueryProvider>
@end

#endif

NS_ASSUME_NONNULL_END

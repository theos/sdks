//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>

NS_ASSUME_NONNULL_BEGIN

#if XCT_UI_TESTING_AVAILABLE

XCT_PROTECTED_RESOURCES_RESET_API_AVAILABLE
typedef NS_ENUM(NSInteger, XCUIProtectedResource) {
    // All platforms
    XCUIProtectedResourceContacts               = 1,
    XCUIProtectedResourceCalendar               = 2,
    XCUIProtectedResourceReminders              = 3,
    XCUIProtectedResourcePhotos                 = 4,
    XCUIProtectedResourceMicrophone             = 5,
    XCUIProtectedResourceCamera                 = 6,
    XCUIProtectedResourceMediaLibrary           = 7,
    XCUIProtectedResourceHomeKit                = 8,

#if TARGET_OS_OSX // macOS-specific resources

    XCUIProtectedResourceSystemRootDirectory    = 0x40000000,
    XCUIProtectedResourceUserDesktopDirectory   = 0x40000001,
    XCUIProtectedResourceUserDownloadsDirectory = 0x40000002,
    XCUIProtectedResourceUserDocumentsDirectory = 0x40000003,

#elif TARGET_OS_IPHONE // iOS Family-specific resources

    XCUIProtectedResourceBluetooth                                    = -0x40000000,
    XCUIProtectedResourceKeyboardNetwork                              = -0x40000001,
    XCUIProtectedResourceLocation                                     = -0x40000002,
    XCUIProtectedResourceHealth API_AVAILABLE(ios(14.0), tvos(14.0))  = -0x40000003,

#endif
};

#endif // XCT_UI_TESTING_AVAILABLE

NS_ASSUME_NONNULL_END

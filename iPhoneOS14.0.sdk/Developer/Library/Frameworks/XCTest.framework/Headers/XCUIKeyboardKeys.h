//
//  Copyright (c) 2015 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#if XCT_UI_TESTING_AVAILABLE

/*!
    Constants for use with -[XCUIElement typeKey:modifierFlags:],
    representing keys that have no textual representation. These comprise
    the set of control, function, and modifier keys found on most keyboards.
*/

typedef NSString * XCUIKeyboardKey NS_EXTENSIBLE_STRING_ENUM;

extern XCUIKeyboardKey const XCUIKeyboardKeyDelete;
extern XCUIKeyboardKey const XCUIKeyboardKeyReturn;
extern XCUIKeyboardKey const XCUIKeyboardKeyEnter;
extern XCUIKeyboardKey const XCUIKeyboardKeyTab;
extern XCUIKeyboardKey const XCUIKeyboardKeySpace;
extern XCUIKeyboardKey const XCUIKeyboardKeyEscape;

extern XCUIKeyboardKey const XCUIKeyboardKeyUpArrow;
extern XCUIKeyboardKey const XCUIKeyboardKeyDownArrow;
extern XCUIKeyboardKey const XCUIKeyboardKeyLeftArrow;
extern XCUIKeyboardKey const XCUIKeyboardKeyRightArrow;

extern XCUIKeyboardKey const XCUIKeyboardKeyF1;
extern XCUIKeyboardKey const XCUIKeyboardKeyF2;
extern XCUIKeyboardKey const XCUIKeyboardKeyF3;
extern XCUIKeyboardKey const XCUIKeyboardKeyF4;
extern XCUIKeyboardKey const XCUIKeyboardKeyF5;
extern XCUIKeyboardKey const XCUIKeyboardKeyF6;
extern XCUIKeyboardKey const XCUIKeyboardKeyF7;
extern XCUIKeyboardKey const XCUIKeyboardKeyF8;
extern XCUIKeyboardKey const XCUIKeyboardKeyF9;
extern XCUIKeyboardKey const XCUIKeyboardKeyF10;
extern XCUIKeyboardKey const XCUIKeyboardKeyF11;
extern XCUIKeyboardKey const XCUIKeyboardKeyF12;
extern XCUIKeyboardKey const XCUIKeyboardKeyF13;
extern XCUIKeyboardKey const XCUIKeyboardKeyF14;
extern XCUIKeyboardKey const XCUIKeyboardKeyF15;
extern XCUIKeyboardKey const XCUIKeyboardKeyF16;
extern XCUIKeyboardKey const XCUIKeyboardKeyF17;
extern XCUIKeyboardKey const XCUIKeyboardKeyF18;
extern XCUIKeyboardKey const XCUIKeyboardKeyF19;

extern XCUIKeyboardKey const XCUIKeyboardKeyForwardDelete;
extern XCUIKeyboardKey const XCUIKeyboardKeyHome;
extern XCUIKeyboardKey const XCUIKeyboardKeyEnd;
extern XCUIKeyboardKey const XCUIKeyboardKeyPageUp;
extern XCUIKeyboardKey const XCUIKeyboardKeyPageDown;
extern XCUIKeyboardKey const XCUIKeyboardKeyClear;
extern XCUIKeyboardKey const XCUIKeyboardKeyHelp;

extern XCUIKeyboardKey const XCUIKeyboardKeyCapsLock;
extern XCUIKeyboardKey const XCUIKeyboardKeyShift;
extern XCUIKeyboardKey const XCUIKeyboardKeyControl;
extern XCUIKeyboardKey const XCUIKeyboardKeyOption;
extern XCUIKeyboardKey const XCUIKeyboardKeyCommand;
extern XCUIKeyboardKey const XCUIKeyboardKeyRightShift;
extern XCUIKeyboardKey const XCUIKeyboardKeyRightControl;
extern XCUIKeyboardKey const XCUIKeyboardKeyRightOption;
extern XCUIKeyboardKey const XCUIKeyboardKeyRightCommand;
extern XCUIKeyboardKey const XCUIKeyboardKeySecondaryFn;

#endif

NS_ASSUME_NONNULL_END

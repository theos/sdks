//
//  Copyright (c) 2015 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCUIElementTypes.h>

#if XCT_UI_TESTING_AVAILABLE

#if TARGET_OS_IPHONE

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, XCUIUserInterfaceSizeClass) {
    XCUIUserInterfaceSizeClassUnspecified = UIUserInterfaceSizeClassUnspecified,
    XCUIUserInterfaceSizeClassCompact     = UIUserInterfaceSizeClassCompact,
    XCUIUserInterfaceSizeClassRegular     = UIUserInterfaceSizeClassRegular,
};

#else

#import <AppKit/AppKit.h>

typedef NS_ENUM(NSInteger, XCUIUserInterfaceSizeClass) {
    XCUIUserInterfaceSizeClassUnspecified = 0,
};

#endif

NS_ASSUME_NONNULL_BEGIN

/*! Protocol describing the attributes exposed on user interface elements and available during query matching. These attributes represent data exposed to the Accessibility system. */
NS_AVAILABLE(10_11, 9_0)
@protocol XCUIElementAttributes

/*! The accessibility identifier. */
@property (readonly) NSString *identifier;

/*! The frame of the element in the screen coordinate space. */
@property (readonly) CGRect frame;

/*! The raw value attribute of the element. Depending on the element, the actual type can vary. */
@property (readonly, nullable) id value;

/*! The title attribute of the element. */
@property (readonly, copy) NSString *title;

/*! The label attribute of the element. */
@property (readonly, copy) NSString *label;

/*! The type of the element. /seealso XCUIElementType. */
@property (readonly) XCUIElementType elementType;

/*! Whether or not the element is enabled for user interaction. */
@property (readonly, getter = isEnabled) BOOL enabled;

/*! The horizontal size class of the element. */
@property (readonly) XCUIUserInterfaceSizeClass horizontalSizeClass;

/*! The vertical size class of the element. */
@property (readonly) XCUIUserInterfaceSizeClass verticalSizeClass;

/*! The value that is displayed when the element has no value. */
@property (readonly, nullable) NSString *placeholderValue;

/*! Whether or not the element is selected. */
@property (readonly, getter = isSelected) BOOL selected;

#if TARGET_OS_TV
/*! Whether or not the elment has UI focus. */
@property (readonly) BOOL hasFocus;
#endif

@end

/*!
 * @enum Constants for use with APIs that accept or return objects with element attributes specified,
 * such as the dictionaries returned by XCUIElement.dictionaryRepresentation.
 */
typedef NSString * XCUIElementAttributeName NS_TYPED_ENUM;
/// An array of the element's children.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameChildren;
/// The element's type, an NSNumber-wrapped XCUIElementType.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameElementType;
/// The element's accessibility identifier.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameIdentifier;
/// The element's accessibility value, an NSString or NSNumber.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameValue;
/// The element's placeholder value.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNamePlaceholderValue;
/// The element's title.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameTitle;
/// The element's label.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameLabel;
/// A dictionary representation of the element's frame, as returned by CGRectCreateDictionaryRepresentation.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameFrame;
/// True if the element is enabled, false otherwise, an NSNumber-wrapped BOOL.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameEnabled;
/// True if the element is selected, false otherwise, an NSNumber-wrapped BOOL.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameSelected;
/// True if the element is focused, false otherwise, an NSNumber-wrapped BOOL.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameHasFocus;
/// The element's horizontal size class, an NSNumber-wrapped XCUIUserInterfaceSizeClass.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameHorizontalSizeClass;
/// The element's vertical size class, an NSNumber-wrapped XCUIUserInterfaceSizeClass.
XCT_EXPORT XCUIElementAttributeName const XCUIElementAttributeNameVerticalSizeClass;

NS_ASSUME_NONNULL_END

#endif

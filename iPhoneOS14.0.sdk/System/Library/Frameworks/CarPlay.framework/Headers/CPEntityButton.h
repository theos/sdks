//
//  CPEntityButton.h
//  CarPlay
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CPEntityButtonType) {
    CPEntityButtonTypeDefault,
    CPEntityButtonTypeMessage,
    CPEntityButtonTypeCall,
    CPEntityButtonTypeDirections,
    CPEntityButtonTypeCustom,
};

typedef NS_ENUM(NSUInteger, CPEntityButtonColors) {
    CPEntityButtonColors_None,
    CPEntityButtonColors_Gray,
    CPEntityButtonColors_Green
};

typedef NS_ENUM(NSUInteger, CPEntityButtonStyle) {
    CPEntityButtonStyle_None,
    CPEntityButtonStyle_Rounded
};


/**
 Button attribute keys
 */

// Optional button label for buttons of type CPEntityButtonTypeCustom
extern NSString *const CPEntityButtonLabelKey;
extern NSString *const CPEntityButtonBackgroundColorKey;    // CPEntityButtonColors
extern NSString *const CPEntityButtonIsRoundedKey;          // CPEntityButtonStyle


API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface CPEntityButton : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 Initialize a button with a system-provided default image.
 
 @param buttonType A CPEntityButtonType enum. Specifies which CPEntityButton corresponds to which system-provided default image.
 @param handler A block to execute when the user selects the button. The block has no return value and takes the selected button as its only parameter.
 */
- (instancetype)initWithButtonType:(CPEntityButtonType)buttonType
                           handler:(void (^ _Nullable)(CPEntityButton *entityButton))handler NS_DESIGNATED_INITIALIZER;

/**
 The type of button on the entity template.
 */
@property (nonatomic, readonly) CPEntityButtonType entityButtonType;

/**
 A Boolean value indicating whether the button is enabled.
 
 @discussion Set the value of this property to @c YES to enable the button or @c NO to disable it. The default value of this property is @c YES.
 */
@property (nonatomic, assign, getter=isEnabled) BOOL enabled;


/**
 Attributes for button customization
 
 @discussion Attributes used by buttons of type CPEntityButtonTypeCustom. includes CPEntityButtonLabelKey, CPEntityButtonBackgroundColorKey, and CPEntityButtonIsRoundedKey.
 */
@property (nonatomic, strong, nullable) NSDictionary *buttonAttributes;

@end

NS_ASSUME_NONNULL_END

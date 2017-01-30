//
//  UIScreen.h
//  UIKit
//
//  Copyright (c) 2007-2015 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UITraitCollection.h>
#import <UIKit/UIView.h>

NS_ASSUME_NONNULL_BEGIN

@class UIScreenMode, CADisplayLink, UIView;

// Object is the UIScreen that represents the new screen. Connection notifications are not sent for screens present when the application is first launched
UIKIT_EXTERN NSString *const UIScreenDidConnectNotification NS_AVAILABLE_IOS(3_2);
// Object is the UIScreen that represented the disconnected screen.
UIKIT_EXTERN NSString *const UIScreenDidDisconnectNotification NS_AVAILABLE_IOS(3_2);
// Object is the UIScreen which changed. [object currentMode] is the new UIScreenMode.
UIKIT_EXTERN NSString *const UIScreenModeDidChangeNotification NS_AVAILABLE_IOS(3_2);
UIKIT_EXTERN NSString *const UIScreenBrightnessDidChangeNotification NS_AVAILABLE_IOS(5_0);

// when the connected screen is overscanning, UIScreen can attempt to compensate for the overscan to avoid clipping
typedef NS_ENUM(NSInteger, UIScreenOverscanCompensation) {
    UIScreenOverscanCompensationScale,                           // the final composited framebuffer for the screen is scaled to avoid clipping
    UIScreenOverscanCompensationInsetBounds,                     // the screen's bounds will be inset in the framebuffer to avoid clipping. no scaling will occur
    UIScreenOverscanCompensationNone NS_ENUM_AVAILABLE_IOS(9_0), // no scaling will occur. use overscanCompensationInsets to determine the necessary insets to avoid clipping
    
    UIScreenOverscanCompensationInsetApplicationFrame NS_ENUM_DEPRECATED_IOS(5_0, 9_0, "Use UIScreenOverscanCompensationNone") = 2,
};

NS_CLASS_AVAILABLE_IOS(2_0) @interface UIScreen : NSObject <UITraitEnvironment>

+ (NSArray<UIScreen *> *)screens NS_AVAILABLE_IOS(3_2);          // all screens currently attached to the device
+ (UIScreen *)mainScreen;      // the device's internal screen

@property(nonatomic,readonly) CGRect  bounds;                // Bounds of entire screen in points
@property(nonatomic,readonly) CGFloat scale NS_AVAILABLE_IOS(4_0);

@property(nonatomic,readonly,copy) NSArray<UIScreenMode *> *availableModes NS_AVAILABLE_IOS(3_2);             // The list of modes that this screen supports
@property(nullable, nonatomic,readonly,strong) UIScreenMode *preferredMode NS_AVAILABLE_IOS(4_3);       // Preferred mode of this screen. Choosing this mode will likely produce the best results
@property(nullable, nonatomic,strong) UIScreenMode *currentMode NS_AVAILABLE_IOS(3_2);                  // Current mode of this screen
@property(nonatomic) UIScreenOverscanCompensation overscanCompensation NS_AVAILABLE_IOS(5_0); // Default is UIScreenOverscanCompensationScale. Determines how the screen behaves if the connected display is overscanning

@property(nonatomic,readonly) UIEdgeInsets overscanCompensationInsets NS_AVAILABLE_IOS(9_0);  // The amount that should be inset to avoid clipping

@property(nullable, nonatomic,readonly,strong) UIScreen *mirroredScreen NS_AVAILABLE_IOS(4_3);          // The screen being mirrored by the receiver. nil if mirroring is disabled or unsupported. Moving a UIWindow to this screen will disable mirroring

@property(nonatomic) CGFloat brightness NS_AVAILABLE_IOS(5_0) __TVOS_PROHIBITED;        // 0 .. 1.0, where 1.0 is maximum brightness. Only supported by main screen.
@property(nonatomic) BOOL wantsSoftwareDimming NS_AVAILABLE_IOS(5_0) __TVOS_PROHIBITED; // Default is NO. If YES, brightness levels lower than that of which the hardware is capable are emulated in software, if neccessary. Having enabled may entail performance cost.

@property (readonly) id <UICoordinateSpace> coordinateSpace NS_AVAILABLE_IOS(8_0);
@property (readonly) id <UICoordinateSpace> fixedCoordinateSpace NS_AVAILABLE_IOS(8_0);

@property(nonatomic,readonly) CGRect  nativeBounds NS_AVAILABLE_IOS(8_0);  // Native bounds of the physical screen in pixels
@property(nonatomic,readonly) CGFloat nativeScale  NS_AVAILABLE_IOS(8_0);  // Native scale factor of the physical screen

- (nullable CADisplayLink *)displayLinkWithTarget:(id)target selector:(SEL)sel NS_AVAILABLE_IOS(4_0);

@property (nullable, nonatomic, weak, readonly) UIView *focusedView NS_AVAILABLE_IOS(9_0);
@property (readonly, nonatomic) BOOL supportsFocus NS_AVAILABLE_IOS(9_0);

@property(nonatomic,readonly) CGRect applicationFrame NS_DEPRECATED_IOS(2_0, 9_0, "Use -[UIScreen bounds]") __TVOS_PROHIBITED;

@end

@interface UIScreen (UISnapshotting)
// Please see snapshotViewAfterScreenUpdates: in UIView.h for some important details on the behavior of this method when called from layoutSubviews.
- (UIView *)snapshotViewAfterScreenUpdates:(BOOL)afterUpdates NS_AVAILABLE_IOS(7_0);
@end

NS_ASSUME_NONNULL_END

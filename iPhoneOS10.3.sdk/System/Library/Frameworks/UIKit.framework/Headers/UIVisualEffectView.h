//
//  UIVisualEffectView.h
//  UIKit
//
//  Copyright (c) 2014-2016 Apple Inc. All rights reserved.
//

#import <UIKit/UIView.h>

NS_ASSUME_NONNULL_BEGIN

/* UIVisualEffectView is a class that provides a simple abstraction over complex visual effects. Depending on the desired effect, the results may affect content layered behind the view or content added to the view's contentView. Please see the notes for each UIVisualEffect for more details.

 Proper use of this class requires some assistance on your part. Namely:

 • Avoid alpha values < 1 - By default, when a view is partially transparent, the system composites that view and all of its subviews in an offscreen render pass to get the correct translucency. However, UIVisualEffects require being composited as part of the content they are logically layered on top of to look correct. If alpha is less than 1 on the UIVisualEffectView or any of its superviews, many effects will look incorrect or won't show up at all. Setting the alpha on views placed inside the contentView is supported.

 • Judicious masking - Masks have similar semantics to non-opaque views with regards to offscreen rendering. Masks applied to the UIVisualEffectView itself are forwarded to all internal views, including the contentView. You are free to apply a mask to just the contentView. The mask you provide to UIVisualEffectView will not be the view that actually performs the mask. UIKit will make copies of the view to apply to each subview. To reflect a size change to the mask, you must apply the change to the original mask view and reset it on the effect view. Applying a mask to a superview of a UIVisualEffectView (via setMaskView: or the layer's mask property) will cause the effect to fail.

 • Correctly capturing snapshots - Many effects require support from the window that hosts the view. As such, attempting to take a snapshot of just the UIVisualEffectView will result in the snapshot not containing the effect at all or it appearing incorrectly. To properly snapshot a view hierarchy that contains a UIVisualEffectView, you must snapshot the entire UIWindow or UIScreen that contains it.
 */

typedef NS_ENUM(NSInteger, UIBlurEffectStyle) {
    UIBlurEffectStyleExtraLight,
    UIBlurEffectStyleLight,
    UIBlurEffectStyleDark,
    UIBlurEffectStyleExtraDark __TVOS_AVAILABLE(10_0) __IOS_PROHIBITED __WATCHOS_PROHIBITED,
    UIBlurEffectStyleRegular NS_ENUM_AVAILABLE_IOS(10_0), // Adapts to user interface style
    UIBlurEffectStyleProminent NS_ENUM_AVAILABLE_IOS(10_0), // Adapts to user interface style
} NS_ENUM_AVAILABLE_IOS(8_0);

NS_CLASS_AVAILABLE_IOS(8_0) @interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding> @end

/* UIBlurEffect will provide a blur that appears to have been applied to the content layered behind the UIVisualEffectView. Views added to the contentView of a blur visual effect are not blurred themselves. */
NS_CLASS_AVAILABLE_IOS(8_0) @interface UIBlurEffect : UIVisualEffect
+ (UIBlurEffect *)effectWithStyle:(UIBlurEffectStyle)style;
@end

/* UIVibrancyEffect amplifies and adjusts the color of content layered behind the view, allowing content placed inside the contentView to become more vivid. It is intended to be placed over, or as a subview of, a UIVisualEffectView that has been configured with a UIBlurEffect. This effect only affects content added to the contentView. Because the vibrancy effect is color dependent, subviews added to the contentView need to be tintColorDidChange aware and must be prepared to update themselves accordingly. UIImageView will need its image to have a rendering mode of UIImageRenderingModeAlwaysTemplate to receive the proper effect.
 */
NS_CLASS_AVAILABLE_IOS(8_0) @interface UIVibrancyEffect : UIVisualEffect
+ (UIVibrancyEffect *)effectForBlurEffect:(UIBlurEffect *)blurEffect;
@end

NS_CLASS_AVAILABLE_IOS(8_0) @interface UIVisualEffectView : UIView <NSSecureCoding>
@property (nonatomic, strong, readonly) UIView *contentView; // Do not add subviews directly to UIVisualEffectView, use this view instead.
@property (nonatomic, copy, nullable) UIVisualEffect *effect;
- (instancetype)initWithEffect:(nullable UIVisualEffect *)effect NS_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;
@end

NS_ASSUME_NONNULL_END


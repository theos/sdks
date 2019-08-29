//
//  TVCaptionButtonView.h
//  TVUIKit
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <TVUIKit/TVLockupView.h>
@class _TVLockupLabel;

NS_ASSUME_NONNULL_BEGIN

/**
 Set of options for focus motion direction
 @discussion These options alter the motion axis of the floating view.
 */
API_AVAILABLE(tvos(12.0)) API_UNAVAILABLE(ios, watchos)
typedef NS_ENUM(NSInteger, TVCaptionButtonViewMotionDirection) {
    /** The floating view will not have any motion. **/
    TVCaptionButtonViewMotionDirectionNone = 0,
    
    /** The floating view will slide horizontally. **/
    TVCaptionButtonViewMotionDirectionHorizontal,
    
    /** The floating view will slide vertically. **/
    TVCaptionButtonViewMotionDirectionVertical,
    
    /** The floating view will slide in both axes. **/
    TVCaptionButtonViewMotionDirectionAll
};

/**
 TVCaptionButtonView is a button-like lockup view with a caption (or a footer), which itself consists of a title and a subtitle.
 @discussion The caption button view can have either a content image or content text. The system adds it to a floating view with a knock-out effect. When in focus, the floating view will scale up in the .leading, .top., and .trailing directions by a fixed amount determined by the system. Overriding .focusSizeIncrease has no visible effect.
 */
__attribute__((visibility("default"))) API_AVAILABLE(tvos(12.0)) API_UNAVAILABLE(ios, watchos)
@interface TVCaptionButtonView : TVLockupView

@property (nonatomic, assign) TVCaptionButtonViewMotionDirection motionDirection; // default is TVCaptionButtonViewMotionDirectionHorizontal.

/**
 The content image
 @discussion If a contentText exists, setting contentImage will remove it and take its place. By default, the system creates a template image from the alpha values in the source image. To prevent system coloring, provide the source image with UIImageRenderingModeAlwaysOriginal.
 */
@property (nullable, nonatomic, strong) UIImage *contentImage;

/**
 The content text
 @discussion If a contentImage exists, setting contentText will remove it and take its place.
 */
@property (nullable, nonatomic, copy) NSString *contentText;

/**
 The title text
 */
@property (nullable, nonatomic, copy) NSString *title;

/**
 The subtitle text
 */
@property (nullable, nonatomic, copy) NSString *subtitle;


@end

NS_ASSUME_NONNULL_END

//
//  TVPosterView.h
//  TVUIKit
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <TVUIKit/TVLockupView.h>

NS_ASSUME_NONNULL_BEGIN

/**
 TVPosterView is a lockup view specializing in presenting an image and optional title and subtitle labels.
 @discussion The framework provides system default appearance and behavior, including the optimal .focusSizeIncrease, which is calculated based on the .image. Overriding .focusSizeIncrease has no visible effect.
 */
__attribute__((visibility("default"))) API_AVAILABLE(tvos(12.0)) API_UNAVAILABLE(ios, watchos)
@interface TVPosterView : TVLockupView

/**
 A convenience initializer.
 @param image The image to become the main content.
 */
- (instancetype)initWithImage:(nullable UIImage *)image;

/**
 The image.
 @discussion When no frame or contentSize is explicitly set on the poster view, its size will be determined by the natural size of this image.
 */
@property (nullable, nonatomic, strong) UIImage *image; // default is nil

/**
 The image view.
 @discussion Avoid setting an image directly on the image view. Instead, always use the .image property of the poster view.
 */
@property (nonatomic, readonly, strong) UIImageView *imageView;

/**
 The optional title.
 */
@property (nullable, nonatomic, copy) NSString *title;

/**
 The optional subtitle.
 */
@property (nullable, nonatomic, copy) NSString *subtitle;

@end

NS_ASSUME_NONNULL_END

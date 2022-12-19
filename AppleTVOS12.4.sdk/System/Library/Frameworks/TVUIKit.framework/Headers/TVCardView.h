//
//  TVCardView.h
//  TVUIKit
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <TVUIKit/TVLockupView.h>

NS_ASSUME_NONNULL_BEGIN

/**
 TVCardView is a floating style lockup view.
 @discussion Clients should add custom subviews to .contentView, which floats and responds to focus interaction with a motion effect that applies to all subviews as one unit.
 */
__attribute__((visibility("default"))) API_AVAILABLE(tvos(12.0)) API_UNAVAILABLE(ios, watchos)
@interface TVCardView : TVLockupView


/**
 The background color of the content view
 @discussion The system applies alpha for focus and highlighted states
 */
@property (nullable, nonatomic, strong) UIColor *cardBackgroundColor; // Set this to nil for system default background color

@end

NS_ASSUME_NONNULL_END

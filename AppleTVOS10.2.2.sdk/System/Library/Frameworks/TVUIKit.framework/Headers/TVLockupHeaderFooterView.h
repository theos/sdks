//
//  TVLockupHeaderFooterView.h
//  TVUIKit
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TVUIKit/TVLockupView.h>

NS_ASSUME_NONNULL_BEGIN

/**
 A header or footer view to be used in TVLockupView.
 */
__attribute__((visibility("default"))) API_AVAILABLE(tvos(12.0)) API_UNAVAILABLE(ios, watchos)
@interface TVLockupHeaderFooterView : UIView <TVLockupViewComponent>

@property (nullable, nonatomic, readonly, strong) UILabel *titleLabel;
@property (nullable, nonatomic, readonly, strong) UILabel *subtitleLabel;

/**
 Determines whether headerFooterView should be hidden when its ancestor is not in focus
 @discussion It will always be shown when in focus regardless of this setting.
 */
@property (nonatomic, assign) BOOL showsOnlyWhenAncestorFocused;

@end

NS_ASSUME_NONNULL_END

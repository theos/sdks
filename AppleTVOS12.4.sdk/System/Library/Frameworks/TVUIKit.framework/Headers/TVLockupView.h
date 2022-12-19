//
//  TVLockupView.h
//  TVUIKit
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TVLockupHeaderFooterView;

NS_ASSUME_NONNULL_BEGIN

/**
 Component views inside the lockup view may conform to this protocol in order to participate in the state changes of the containing lockup view by altering their appearances.
 */
API_AVAILABLE(tvos(12.0)) API_UNAVAILABLE(ios, watchos)
@protocol TVLockupViewComponent <NSObject>
@optional
/**
 This is called when a lockup view's state changes.

 @discussion If implemented, allows the lockup view's components to update their appearance when the lockup view's state changes. This will also be called on the components' subviews that conform to the protocol and implement the method.
 @param state The state of the lockup view. Relevant values are .normal, .highlighted (for pressed state), .enabled, and .focused.
 */
- (void)updateAppearanceForLockupViewState:(UIControlState)state;
@end

/**
 TVLockupView is a composed view specializing in presenting a main content, and optional header or footer.
 */
__attribute__((visibility("default"))) API_AVAILABLE(tvos(12.0)) API_UNAVAILABLE(ios, watchos)
@interface TVLockupView : UIControl

/**
 The container view where subviews are added.
 @discussion Clients should add their subviews to the contentView. Views added directly to the lockup view have undefined behaviors.
 */
@property (nonatomic, strong, readonly) UIView *contentView; // add custom subviews to the lock view's contentView

/**
 The size of the content
 @discussion Clients can use this to explicitly set the size of the content. Default results in system default contentSize.
 */
@property (nonatomic, assign) CGSize contentSize; // default is CGSizeZero


/**
 The optional header and footer views.
 @discussion Subclass TVLockupHeaderFooterView for additional customization.
 */
@property (nullable, nonatomic, strong) __kindof TVLockupHeaderFooterView *headerView;
@property (nullable, nonatomic, strong) __kindof TVLockupHeaderFooterView *footerView;

/**
 The spacing between the content view and its sibling and parent views
 @discussion .top and .bottom are spaces between the contentView and headerView and footerView, respectively. .leading and .trailing are between contentView and the lockup view itself. Use negative values for positive spacing.
 */
@property (nonatomic, assign) NSDirectionalEdgeInsets contentViewInsets; // default is NSDirectionalEdgeInsetsZero

/**
 The size increase when the lockup view or its subview is in focus
 @discussion The amount by which headerView and footerView will move when the lockup view or its subview is in focus. Use negative values for positive increase.
 */
@property (nonatomic, assign) NSDirectionalEdgeInsets focusSizeIncrease; // default is NSDirectionalEdgeInsetsZero


@end

NS_ASSUME_NONNULL_END

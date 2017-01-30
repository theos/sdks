//
//  UIStackView.h
//  UIKit
//
//  Copyright © 2015 Apple Inc. All rights reserved.
//

#import <UIKit/UIView.h>

/* Distribution—the layout along the stacking axis.
 
 All UIStackViewDistribution enum values fit first and last arranged subviews tightly to the container,
 and except for UIStackViewDistributionFillEqually, fit all items to intrinsicContentSize when possible.
 */
typedef NS_ENUM(NSInteger, UIStackViewDistribution) {
    
    /* When items do not fit (overflow) or fill (underflow) the space available
     adjustments occur according to compressionResistance or hugging
     priorities of items, or when that is ambiguous, according to arrangement
     order.
     */
    UIStackViewDistributionFill = 0,
    
    /* Items are all the same size.
     When space allows, this will be the size of the item with the largest
     intrinsicContentSize (along the axis of the stack).
     Overflow or underflow adjustments are distributed equally among the items.
     */
    UIStackViewDistributionFillEqually,
    
    /* Overflow or underflow adjustments are distributed among the items proportional
     to their intrinsicContentSizes.
     */
    UIStackViewDistributionFillProportionally,
    
    /* Additional underflow spacing is divided equally in the spaces between the items.
     Overflow squeezing is controlled by compressionResistance priorities followed by
     arrangement order.
     */
    UIStackViewDistributionEqualSpacing,
    
    /* Equal center-to-center spacing of the items is maintained as much
     as possible while still maintaining a minimum edge-to-edge spacing within the
     allowed area.
        Additional underflow spacing is divided equally in the spacing. Overflow 
     squeezing is distributed first according to compressionResistance priorities 
     of items, then according to subview order while maintaining the configured 
     (edge-to-edge) spacing as a minimum.
     */
    UIStackViewDistributionEqualCentering,
} NS_ENUM_AVAILABLE_IOS(9_0);

/* Alignment—the layout transverse to the stacking axis.
 */
typedef NS_ENUM(NSInteger, UIStackViewAlignment) {
    /* Align the leading and trailing edges of vertically stacked items
     or the top and bottom edges of horizontally stacked items tightly to the container.
     */
    UIStackViewAlignmentFill,
    
    /* Align the leading edges of vertically stacked items
     or the top edges of horizontally stacked items tightly to the relevant edge
     of the container
     */
    UIStackViewAlignmentLeading,
    UIStackViewAlignmentTop = UIStackViewAlignmentLeading,
    UIStackViewAlignmentFirstBaseline, // Valid for horizontal axis only
    
    /* Center the items in a vertical stack horizontally
     or the items in a horizontal stack vertically
     */
    UIStackViewAlignmentCenter,
    
    /* Align the trailing edges of vertically stacked items
     or the bottom edges of horizontally stacked items tightly to the relevant
     edge of the container
     */
    UIStackViewAlignmentTrailing,
    UIStackViewAlignmentBottom = UIStackViewAlignmentTrailing,
    UIStackViewAlignmentLastBaseline, // Valid for horizontal axis only
} NS_ENUM_AVAILABLE_IOS(9_0);

/* UIStackView is a non-rendering subclass of UIView, intended for managing layout of its subviews.
 You may not override +[UIStackView layerClass], and -drawLayer:inContext: will not be sent to
 UIStackView.

 UIStackView arranges its subviews in its arrangedSubviews list in the order of 
 that list along a vertical or horizontal axis, with exact arrangement determined
 by the distribution, alignment, and spacing properties.
 
 The layout will update automatically when arrangedSubviews list changes
 due to adding, removing, or inserting arrangedSubviews, and also when
 views in the arrangedSubviews list change their hidden property.
 
 A horizontal UIStackView will return its tallest view for -viewForFirst/LastBaselineLayout,
 or if that is another stack view, then the relevant viewForFirst/LastBaselineLayout from that
 stack view.
 
 A vertical UIStackView will return its first view for -viewForFirstBaselineLayout and its
 last view for -viewForLastBaselineLayout, or if that is another stack view, then the relevant  
 viewForFirst/LastBaselineLayout from that stack view.
 */
NS_ASSUME_NONNULL_BEGIN
NS_CLASS_AVAILABLE_IOS(9_0)
@interface UIStackView : UIView

/* UIStackView enforces that all views in the arrangedSubviews list
 must be subviews of the UIStackView.
    Thus, when a view is added to the arrangedSubviews, UIStackView
 adds it as a subview if it isn't already. And when a view in a
 UIStackView's arrangedSubviews list receives -removeFromSuperview
 it is also removed from the arrangedSubviews.
 */
- (instancetype)initWithArrangedSubviews:(NSArray<__kindof UIView *> *)views; // Adds views as subviews of the receiver.
@property(nonatomic,readonly,copy) NSArray<__kindof UIView *> *arrangedSubviews;

/* Add a view to the end of the arrangedSubviews list.
 Maintains the rule that the arrangedSubviews list is a subset of the
 subviews list by adding the view as a subview of the receiver if
 necessary.
    Does not affect the subview ordering if view is already a subview 
 of the receiver.
 */
- (void)addArrangedSubview:(UIView *)view;

/* Removes a subview from the list of arranged subviews without removing it as
 a subview of the receiver.
    To remove the view as a subview, send it -removeFromSuperview as usual;
 the relevant UIStackView will remove it from its arrangedSubviews list
 automatically.
 */
- (void)removeArrangedSubview:(UIView *)view;
/*
 Adds the view as a subview of the container if it isn't already.
    Updates the stack index (but not the subview index) of the
 arranged subview if it's already in the arrangedSubviews list.
 */
- (void)insertArrangedSubview:(UIView *)view atIndex:(NSUInteger)stackIndex;

/* A stack with a horizontal axis is a row of arrangedSubviews,
and a stack with a vertical axis is a column of arrangedSubviews.
 */
@property(nonatomic) UILayoutConstraintAxis axis;

/* The layout of the arrangedSubviews along the axis
 */
@property(nonatomic) UIStackViewDistribution distribution;

/* The layout of the arrangedSubviews transverse to the axis;
 e.g., leading/trailing edges in a vertical stack
 */
@property(nonatomic) UIStackViewAlignment alignment;

/* Spacing between adjacent edges of arrangedSubviews.
 Used as a strict spacing for the Fill distributions, and
 as a minimum spacing for the EqualCentering and EqualSpacing
 distributions. Use negative values to allow overlap.
 */
@property(nonatomic) CGFloat spacing;

/* Baseline-to-baseline spacing in vertical stacks.
    The baselineRelativeArrangement property supports specifications of vertical 
 space from the last baseline of one text-based view to the first baseline of a
 text-based view below, or from the  top (or bottom) of a container to the first
 (or last) baseline of a contained text-based view.
    This property is ignored in horizontal stacks. Use the alignment property
 to specify baseline alignment in horizontal stacks.
    Defaults to NO.
 */
@property(nonatomic,getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;

/* Uses margin layout attributes for edge constraints where applicable.
    Defaults to NO.
 */
@property(nonatomic,getter=isLayoutMarginsRelativeArrangement) BOOL layoutMarginsRelativeArrangement;    
@end
NS_ASSUME_NONNULL_END

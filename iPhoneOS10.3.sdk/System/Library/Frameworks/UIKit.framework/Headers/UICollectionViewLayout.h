//
//  UICollectionViewLayout.h
//  UIKit
//
//  Copyright (c) 2011-2016 Apple Inc. All rights reserved.
//

#import <UIKit/UIKitDefines.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <QuartzCore/CATransform3D.h>
#import <UIKit/UIDynamicBehavior.h>

// The UICollectionViewLayout class is provided as an abstract class for subclassing to define custom collection layouts.
// Defining a custom layout is an advanced operation intended for applications with complex needs.

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, UICollectionElementCategory) {
    UICollectionElementCategoryCell,
    UICollectionElementCategorySupplementaryView,
    UICollectionElementCategoryDecorationView
};

@class UICollectionViewLayoutAttributes;
@class UICollectionView;
@class UINib;

NS_CLASS_AVAILABLE_IOS(6_0) @interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem>

@property (nonatomic) CGRect frame;
@property (nonatomic) CGPoint center;
@property (nonatomic) CGSize size;
@property (nonatomic) CATransform3D transform3D;
@property (nonatomic) CGRect bounds NS_AVAILABLE_IOS(7_0);
@property (nonatomic) CGAffineTransform transform NS_AVAILABLE_IOS(7_0);
@property (nonatomic) CGFloat alpha;
@property (nonatomic) NSInteger zIndex; // default is 0
@property (nonatomic, getter=isHidden) BOOL hidden; // As an optimization, UICollectionView might not create a view for items whose hidden attribute is YES
@property (nonatomic, strong) NSIndexPath *indexPath;

@property (nonatomic, readonly) UICollectionElementCategory representedElementCategory;
@property (nonatomic, readonly, nullable) NSString *representedElementKind; // nil when representedElementCategory is UICollectionElementCategoryCell

+ (instancetype)layoutAttributesForCellWithIndexPath:(NSIndexPath *)indexPath;
+ (instancetype)layoutAttributesForSupplementaryViewOfKind:(NSString *)elementKind withIndexPath:(NSIndexPath *)indexPath;
+ (instancetype)layoutAttributesForDecorationViewOfKind:(NSString *)decorationViewKind withIndexPath:(NSIndexPath *)indexPath;

@end

typedef NS_ENUM(NSInteger, UICollectionUpdateAction) {
    UICollectionUpdateActionInsert,
    UICollectionUpdateActionDelete,
    UICollectionUpdateActionReload,
    UICollectionUpdateActionMove,
    UICollectionUpdateActionNone
};

NS_CLASS_AVAILABLE_IOS(6_0) @interface UICollectionViewUpdateItem : NSObject

@property (nonatomic, readonly, nullable) NSIndexPath *indexPathBeforeUpdate; // nil for UICollectionUpdateActionInsert
@property (nonatomic, readonly, nullable) NSIndexPath *indexPathAfterUpdate; // nil for UICollectionUpdateActionDelete
@property (nonatomic, readonly) UICollectionUpdateAction updateAction;

@end

NS_CLASS_AVAILABLE_IOS(7_0) @interface UICollectionViewLayoutInvalidationContext : NSObject

@property (nonatomic, readonly) BOOL invalidateEverything; // set to YES when invalidation occurs because the collection view is sent -reloadData
@property (nonatomic, readonly) BOOL invalidateDataSourceCounts; // if YES, the layout should requery section and item counts from the collection view - set to YES when the collection view is sent -reloadData and when items are inserted or deleted

- (void)invalidateItemsAtIndexPaths:(NSArray<NSIndexPath *> *)indexPaths NS_AVAILABLE_IOS(8_0);
- (void)invalidateSupplementaryElementsOfKind:(NSString *)elementKind atIndexPaths:(NSArray<NSIndexPath *> *)indexPaths NS_AVAILABLE_IOS(8_0);
- (void)invalidateDecorationElementsOfKind:(NSString *)elementKind atIndexPaths:(NSArray<NSIndexPath *> *)indexPaths NS_AVAILABLE_IOS(8_0);
@property (nonatomic, readonly, nullable) NSArray<NSIndexPath *> *invalidatedItemIndexPaths NS_AVAILABLE_IOS(8_0);
@property (nonatomic, readonly, nullable) NSDictionary<NSString *, NSArray<NSIndexPath *> *> *invalidatedSupplementaryIndexPaths NS_AVAILABLE_IOS(8_0); // keys are element kind strings - values are NSArrays of NSIndexPaths
@property (nonatomic, readonly, nullable) NSDictionary<NSString *, NSArray<NSIndexPath *> *> *invalidatedDecorationIndexPaths NS_AVAILABLE_IOS(8_0); // keys are element kind strings - values are NSArrays of NSIndexPaths

@property (nonatomic) CGPoint contentOffsetAdjustment NS_AVAILABLE_IOS(8_0); // delta to be applied to the collection view's current contentOffset - default is CGPointZero
@property (nonatomic) CGSize contentSizeAdjustment NS_AVAILABLE_IOS(8_0); // delta to be applied to the current content size - default is CGSizeZero

// Reordering support
@property (nonatomic, readonly, copy, nullable) NSArray<NSIndexPath *> *previousIndexPathsForInteractivelyMovingItems NS_AVAILABLE_IOS(9_0); // index paths of moving items prior to the invalidation
@property (nonatomic, readonly, copy, nullable) NSArray<NSIndexPath *> *targetIndexPathsForInteractivelyMovingItems NS_AVAILABLE_IOS(9_0); // index paths of moved items following the invalidation
@property (nonatomic, readonly) CGPoint interactiveMovementTarget NS_AVAILABLE_IOS(9_0);

@end

NS_CLASS_AVAILABLE_IOS(6_0) @interface UICollectionViewLayout : NSObject <NSCoding>

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

// Methods in this class are meant to be overridden and will be called by its collection view to gather layout information.
// To get the truth on the current state of the collection view, call methods on UICollectionView rather than these.

@property (nullable, nonatomic, readonly) UICollectionView *collectionView;

// Call -invalidateLayout to indicate that the collection view needs to requery the layout information.
// Subclasses must always call super if they override.
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(UICollectionViewLayoutInvalidationContext *)context NS_AVAILABLE_IOS(7_0);

- (void)registerClass:(nullable Class)viewClass forDecorationViewOfKind:(NSString *)elementKind;
- (void)registerNib:(nullable UINib *)nib forDecorationViewOfKind:(NSString *)elementKind;

@end

@interface UICollectionViewLayout (UISubclassingHooks)

#if UIKIT_DEFINE_AS_PROPERTIES
@property(class, nonatomic, readonly) Class layoutAttributesClass; // override this method to provide a custom class to be used when instantiating instances of UICollectionViewLayoutAttributes
@property(class, nonatomic, readonly) Class invalidationContextClass NS_AVAILABLE_IOS(7_0); // override this method to provide a custom class to be used for invalidation contexts
#else
+ (Class)layoutAttributesClass; // override this method to provide a custom class to be used when instantiating instances of UICollectionViewLayoutAttributes
+ (Class)invalidationContextClass NS_AVAILABLE_IOS(7_0); // override this method to provide a custom class to be used for invalidation contexts
#endif

// The collection view calls -prepareLayout once at its first layout as the first message to the layout instance.
// The collection view calls -prepareLayout again after layout is invalidated and before requerying the layout information.
// Subclasses should always call super if they override.
- (void)prepareLayout;

// UICollectionView calls these four methods to determine the layout information.
// Implement -layoutAttributesForElementsInRect: to return layout attributes for for supplementary or decoration views, or to perform layout in an as-needed-on-screen fashion.
// Additionally, all layout subclasses should implement -layoutAttributesForItemAtIndexPath: to return layout attributes instances on demand for specific index paths.
// If the layout supports any supplementary or decoration view types, it should also implement the respective atIndexPath: methods for those types.
- (nullable NSArray<__kindof UICollectionViewLayoutAttributes *> *)layoutAttributesForElementsInRect:(CGRect)rect; // return an array layout attributes instances for all the views in the given rect
- (nullable UICollectionViewLayoutAttributes *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)indexPath;
- (nullable UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)indexPath;
- (nullable UICollectionViewLayoutAttributes *)layoutAttributesForDecorationViewOfKind:(NSString*)elementKind atIndexPath:(NSIndexPath *)indexPath;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)newBounds; // return YES to cause the collection view to requery the layout for geometry information
- (UICollectionViewLayoutInvalidationContext *)invalidationContextForBoundsChange:(CGRect)newBounds NS_AVAILABLE_IOS(7_0);

- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(UICollectionViewLayoutAttributes *)preferredAttributes withOriginalAttributes:(UICollectionViewLayoutAttributes *)originalAttributes NS_AVAILABLE_IOS(8_0);
- (UICollectionViewLayoutInvalidationContext *)invalidationContextForPreferredLayoutAttributes:(UICollectionViewLayoutAttributes *)preferredAttributes withOriginalAttributes:(UICollectionViewLayoutAttributes *)originalAttributes NS_AVAILABLE_IOS(8_0);

- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset withScrollingVelocity:(CGPoint)velocity; // return a point at which to rest after scrolling - for layouts that want snap-to-point scrolling behavior
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset NS_AVAILABLE_IOS(7_0); // a layout can return the content offset to be applied during transition or update animations

#if UIKIT_DEFINE_AS_PROPERTIES
@property(nonatomic, readonly) CGSize collectionViewContentSize; // Subclasses must override this method and use it to return the width and height of the collection view’s content. These values represent the width and height of all the content, not just the content that is currently visible. The collection view uses this information to configure its own content size to facilitate scrolling.
#else
- (CGSize)collectionViewContentSize; // Subclasses must override this method and use it to return the width and height of the collection view’s content. These values represent the width and height of all the content, not just the content that is currently visible. The collection view uses this information to configure its own content size to facilitate scrolling.
#endif

@end

@interface UICollectionViewLayout (UIUpdateSupportHooks)

// This method is called when there is an update with deletes/inserts to the collection view.
// It will be called prior to calling the initial/final layout attribute methods below to give the layout an opportunity to do batch computations for the insertion and deletion layout attributes.
// The updateItems parameter is an array of UICollectionViewUpdateItem instances for each element that is moving to a new index path.
- (void)prepareForCollectionViewUpdates:(NSArray<UICollectionViewUpdateItem *> *)updateItems;
- (void)finalizeCollectionViewUpdates; // called inside an animation block after the update

- (void)prepareForAnimatedBoundsChange:(CGRect)oldBounds; // UICollectionView calls this when its bounds have changed inside an animation block before displaying cells in its new bounds
- (void)finalizeAnimatedBoundsChange; // also called inside the animation block

// UICollectionView calls this when prior the layout transition animation on the incoming and outgoing layout
- (void)prepareForTransitionToLayout:(UICollectionViewLayout *)newLayout NS_AVAILABLE_IOS(7_0);
- (void)prepareForTransitionFromLayout:(UICollectionViewLayout *)oldLayout NS_AVAILABLE_IOS(7_0);
- (void)finalizeLayoutTransition NS_AVAILABLE_IOS(7_0);  // called inside an animation block after the transition


// This set of methods is called when the collection view undergoes an animated transition such as a batch update block or an animated bounds change.
// For each element on screen before the invalidation, finalLayoutAttributesForDisappearingXXX will be called and an animation setup from what is on screen to those final attributes.
// For each element on screen after the invalidation, initialLayoutAttributesForAppearingXXX will be called and an animation setup from those initial attributes to what ends up on screen.
- (nullable UICollectionViewLayoutAttributes *)initialLayoutAttributesForAppearingItemAtIndexPath:(NSIndexPath *)itemIndexPath;
- (nullable UICollectionViewLayoutAttributes *)finalLayoutAttributesForDisappearingItemAtIndexPath:(NSIndexPath *)itemIndexPath;
- (nullable UICollectionViewLayoutAttributes *)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)elementIndexPath;
- (nullable UICollectionViewLayoutAttributes *)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)elementIndexPath;
- (nullable UICollectionViewLayoutAttributes *)initialLayoutAttributesForAppearingDecorationElementOfKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)decorationIndexPath;
- (nullable UICollectionViewLayoutAttributes *)finalLayoutAttributesForDisappearingDecorationElementOfKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)decorationIndexPath;

// These methods are called by collection view during an update block.
// Return an array of index paths to indicate views that the layout is deleting or inserting in response to the update.
- (NSArray<NSIndexPath *> *)indexPathsToDeleteForSupplementaryViewOfKind:(NSString *)elementKind NS_AVAILABLE_IOS(7_0);
- (NSArray<NSIndexPath *> *)indexPathsToDeleteForDecorationViewOfKind:(NSString *)elementKind NS_AVAILABLE_IOS(7_0);
- (NSArray<NSIndexPath *> *)indexPathsToInsertForSupplementaryViewOfKind:(NSString *)elementKind NS_AVAILABLE_IOS(7_0);
- (NSArray<NSIndexPath *> *)indexPathsToInsertForDecorationViewOfKind:(NSString *)elementKind NS_AVAILABLE_IOS(7_0);

@end

@interface UICollectionViewLayout (UIReorderingSupportHooks)

- (NSIndexPath *)targetIndexPathForInteractivelyMovingItem:(NSIndexPath *)previousIndexPath withPosition:(CGPoint)position NS_AVAILABLE_IOS(9_0);
- (UICollectionViewLayoutAttributes *)layoutAttributesForInteractivelyMovingItemAtIndexPath:(NSIndexPath *)indexPath withTargetPosition:(CGPoint)position NS_AVAILABLE_IOS(9_0);

- (UICollectionViewLayoutInvalidationContext *)invalidationContextForInteractivelyMovingItems:(NSArray<NSIndexPath *> *)targetIndexPaths withTargetPosition:(CGPoint)targetPosition previousIndexPaths:(NSArray<NSIndexPath *> *)previousIndexPaths previousPosition:(CGPoint)previousPosition NS_AVAILABLE_IOS(9_0);
- (UICollectionViewLayoutInvalidationContext *)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(NSArray<NSIndexPath *> *)indexPaths previousIndexPaths:(NSArray<NSIndexPath *> *)previousIndexPaths movementCancelled:(BOOL)movementCancelled NS_AVAILABLE_IOS(9_0);

@end

NS_ASSUME_NONNULL_END

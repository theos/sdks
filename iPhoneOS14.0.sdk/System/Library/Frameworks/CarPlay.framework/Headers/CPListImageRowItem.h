//
//  CPListImageRowItem.h
//  CarPlay
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <CarPlay/CPImageSet.h>
#import <CarPlay/CPListSection.h>
#import <CarPlay/CPBaseListItem.h>

/**
 * The maximum number of images allowed in a @c CPListImageRowItem.
 * The system may display fewer than this number of images, depending on the available width of the car screen.
 */
extern NSUInteger const CPMaximumNumberOfGridImages;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface CPListImageRowItem : CPBaseListItem

/**
 Initialize a list image row item with a text string and an array of CPImageSets to use
 for the grid of images.
 
 @note The expected image size is given by CPImageRowImageSize. Images provided
 will be resized to this size.
 
 @discussion To properly size your images, your app should size them to the display scale of the car screen.
 See -[CPInterfaceController carTraitCollection].
 */
- (instancetype)initWithText:(NSString *)text gridImages:(NSArray<CPImageSet *> *)gridImages;

/**
 Read-only access to the grid images shown in a row in the cell.
 
 @note The maximum number of images shown is CPMaximumNumberOfGridImages.
 If you supply more images, only the first CPMaximumNumberOfGridImages will be used.
 */
@property (nonatomic, strong, readonly) NSArray<UIImage *> *gridImages;

/**
 Update the grid images displayed in this image row item. If this image row
 item is already displayed in a list template, this image row item will be
 automatically reloaded.
 
 @see To update/reload the title of the image row item, assign to
 the @c text property of the image row item.
 */
- (void)updateGridImages:(NSArray <CPImageSet *> *)gridImages;

typedef void (^CPListImageRowHandler) (CPListImageRowItem *item,          // The image row item that the user selected.
                                       NSInteger index,                   // The index of the image in the image row item that the user selected.
                                       dispatch_block_t completionBlock); // A completion block you must call after processing the user's selection.

/**
 A block that is fired when the user selects one of the images in this image row item.
 
 The user may also select the cell itself - for that event, specify a @c listItemHandler.
 */
@property (nullable, nonatomic, copy) CPListImageRowHandler listImageRowHandler;

/**
 The expected image size for the grid images in your @c CPListImageRowItem. Images provided
 will be resized to this size.
 
 @discussion To properly size your images, your app should size them to the display scale of the car screen.
 See -[CPInterfaceController carTraitCollection].
 */
@property (nonatomic, class, readonly) CGSize maximumImageSize;

@end

NS_ASSUME_NONNULL_END

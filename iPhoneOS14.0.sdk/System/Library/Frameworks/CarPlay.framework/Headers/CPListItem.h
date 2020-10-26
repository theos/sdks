//
//  CPListItem.h
//  CarPlay
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CarPlay/CPListSection.h>
#import <CarPlay/CPBaseListItem.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
typedef NS_ENUM(NSUInteger, CPListItemAccessoryType) {
    CPListItemAccessoryTypeNone = 0,             // The list item will render without a trailing accessory, or using your custom image.
    CPListItemAccessoryTypeDisclosureIndicator,  // The list item will display a disclosure indicator on its trailing side.
    CPListItemAccessoryTypeCloud                 // The list item will display a cloud image on its trailing side, perhaps indicating remotely-available content.
};

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
typedef NS_ENUM(NSInteger, CPListItemPlayingIndicatorLocation) {
    CPListItemPlayingIndicatorLocationLeading = 0, // The list item will display its now playing indicator on the leading side.
    CPListItemPlayingIndicatorLocationTrailing,    // The list item will display its now playing indicator on the trailing side.
};

/**
 @c CPListItem describes a single object appearing in a list template.
 Each @c CPListItem is displayed as a single cell in the list.
 */
API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface CPListItem : CPBaseListItem

/**
 Initialize a list item with text, detailtext, an image, an accessory type, and an accessory image.

 @note The expected size of the image is given by +[CPListItem maximumImageSize].
 Images that are not exactly this size will be resized.
 
 If you specify an @c accessoryImage, your @c accessoryType will be set to @c CPListItemAccessoryTypeNone.
 
 @discussion To properly size your list images, your app should consider the display scale of the car screen.
 See -[CPInterfaceController carTraitCollection].
 */
- (instancetype)initWithText:(nullable NSString *)text
                  detailText:(nullable NSString *)detailText
                       image:(nullable UIImage *)image
              accessoryImage:(nullable UIImage *)accessoryImage
               accessoryType:(CPListItemAccessoryType)accessoryType NS_DESIGNATED_INITIALIZER API_AVAILABLE(ios(14.0));

/**
 Initialize a list item with text, detailtext, an image, and a disclosure indicator.

 @note The expected size of the image is given by +[CPListItem maximumImageSize].
 Images that are not exactly this size will be resized.
 
 @discussion To properly size your list images, your app should size them to the display scale of the car screen.
 See -[CPInterfaceController carTraitCollection].
 */
- (instancetype)initWithText:(nullable NSString *)text
                  detailText:(nullable NSString *)detailText
                       image:(nullable UIImage *)image
    showsDisclosureIndicator:(BOOL)showsDisclosureIndicator API_DEPRECATED_WITH_REPLACEMENT("initWithText:detailText:image:accessoryImage:accessoryType:", ios(12.0, 14.0));

/**
 Initialize a list item with text, detail text, and an image.

 @note The expected size of the image is given by +[CPListItem maximumImageSize].
 Images that are not exactly this size will be resized.
 
 @discussion To properly size your list images, your app should size them to the display scale of the car screen.
 See -[CPInterfaceController carTraitCollection].
 */
- (instancetype)initWithText:(nullable NSString *)text
                  detailText:(nullable NSString *)detailText
                       image:(nullable UIImage *)image;

/**
 Initialize a list item with text and detail text.
 */
- (instancetype)initWithText:(nullable NSString *)text
                  detailText:(nullable NSString *)detailText;

/**
 Any extra text displayed below the primary text in a cell displaying this list item.
 */
@property (nullable, nonatomic, copy, readonly) NSString *detailText;

/**
 An image displayed on the leading side of a cell displaying this list item.

 @discussion Animated images are not supported. If an animated image is assigned, only the first image will be used.
 To properly size your list images, your app should size them to the display scale of the car screen.
 See -[CPInterfaceController carTraitCollection].
 */
@property (nullable, nonatomic, strong, readonly) UIImage *image;

/**
 An image displayed on the trailing side of a cell displaying this list item.
 
 @discussion Animated images are not supported. If an animated image is assigned, only the first image will be used.
 
 @note The expected size of the image is given by +[CPListItem maximumImageSize].
 Images that are not exactly this size will be resized.
 
 @note If set, this property takes precedence over the @c accessoryType.
 */
@property (nullable, nonatomic, strong, readonly) UIImage *accessoryImage;

/**
 An accessory image type to display in the trailing portion of this list item.
 
 @note If you specify a custom accessoryImage, it will take priority over one of the
 built-in accessory types specified here.
 */
@property (nonatomic, assign) CPListItemAccessoryType accessoryType API_AVAILABLE(ios(14.0));

/**
 If YES, a cell displaying this list item will render with a disclosure indicator
 in the trailing side of the cell.
 
 @note If set, this property takes precedence over showsCloudLabel.

 Defaults to NO.
 */
@property (nonatomic, readonly, assign) BOOL showsDisclosureIndicator API_DEPRECATED_WITH_REPLACEMENT("CPListItemAccessoryType", ios(12.0, 14.0));

/**
 If YES, a cell displaying this list item will render with an explicit label to the trailing edge of the text
 
 Defaults to NO.
 */
@property (nonatomic, assign) BOOL showsExplicitLabel API_AVAILABLE(ios(14.0));

/**
 Set a fractional value between 0 and 1 to display a progress bar on this list item.
 */
@property (nonatomic, assign) CGFloat playbackProgress API_AVAILABLE(ios(14.0));

/**
 Indicate that this list item represents content that is currently playing. This list item
 will render with an icon indicating that this item is playing.
 */
@property (nonatomic, assign, getter=isPlaying) BOOL playing API_AVAILABLE(ios(14.0));

/**
 Specify the location in the list item for the now playing indicator.
 
 Defaults to CPListItemPlayingIndicatorLocationLeading.
 */
@property (nonatomic, assign) CPListItemPlayingIndicatorLocation playingIndicatorLocation API_AVAILABLE(ios(14.0));

/**
 The expected image size for your @c CPListItem.
 
 @discussion Images that are not exactly this size will be resized.
 To properly size your list images, your app should size them to the display scale of the car screen.
 See -[CPInterfaceController carTraitCollection].
 */
@property (nonatomic, class, readonly) CGSize maximumImageSize API_AVAILABLE(ios(14.0));

#pragma mark - Dynamic List Item Updates

/**
 Update the detail text in this list item, reloading this item in the table if needed.
 */
- (void)setDetailText:(NSString *)detailText API_AVAILABLE(ios(14.0));

/**
 Update the image in this list item, reloading this item in the table if needed.
 */
- (void)setImage:(UIImage *)image API_AVAILABLE(ios(14.0));

/**
 Update the accessory image in this list item, reloading this item in the table if needed.
 */
- (void)setAccessoryImage:(UIImage *)accessoryImage API_AVAILABLE(ios(14.0));

@end

NS_ASSUME_NONNULL_END

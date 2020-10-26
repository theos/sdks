//
//  CPNowPlayingButton.h
//  CarPlay
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CPNowPlayingButtonType) {
    CPNowPlayingButtonTypeShuffle,
    CPNowPlayingButtonTypeAddToLibrary,
    CPNowPlayingButtonTypeMore,
    CPNowPlayingButtonTypePlaybackRate,
    CPNowPlayingButtonTypeRepeat,
    CPNowPlayingButtonTypeImage
};

extern CGSize const CPNowPlayingButtonMaximumImageSize;

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface CPNowPlayingButton : NSObject <NSSecureCoding>

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 Initialize a button with a system-provided default image.
 
 @param buttonType A CPNowPlayingButtonType enum. Specifies which CPNowPlayingButton corresponds to which system-provided default image.
 @param handler A block to execute when the user selects the button. The block has no return value and takes the selected button as its only parameter.
 */
- (instancetype)initWithButtonType:(CPNowPlayingButtonType)buttonType
                           handler:(void (^ _Nullable)(CPNowPlayingButton *nowPlayingButton))handler;

/**
 Initialize a button with a custom image.
 
 @param image A custom image for this button. The maximum image size is CPNowPlayingButtonMaximumImageSize; larger images will be scaled down.
 @param handler A block to execute when the user selects the button. The block has no return value and takes the selected button as its only parameter.
 */
- (instancetype)initWithImage:(UIImage *)image
                      handler:(void (^ _Nullable)(CPNowPlayingButton *nowPlayingButton))handler;

/**
 The type of button on the now playing template. For buttons using a custom image, the type is CPNowPlayingButtonTypeImage.
 */
@property (nonatomic, readonly) CPNowPlayingButtonType nowPlayingButtonType;

/**
 A Boolean value indicating whether the button is enabled.

 @discussion Set the value of this property to @c YES to enable the button or @c NO to disable it. The default value of this property is @c YES.
 */
@property (nonatomic, assign, getter=isEnabled) BOOL enabled;

/**
 A Boolean value indicating whether the button is selected. When selected, the button draws with a selected appearance to
 indicate its selected state.
 
 @discussion Only custom image buttons may display a custom selected state. Other system-provided buttons, like repeat
 and shuffle, change their selected states depending on what your app reports for current repeat and shuffle states.
 */
@property (nonatomic, assign, getter=isSelected) BOOL selected;

/**
 The custom image, if any, displayed on the button.

 @discussion Animated images are not supported. If an animated image is assigned, only the first image will be used.
 */
@property (nullable, nonatomic, readonly, strong) UIImage *image;

@end

NS_ASSUME_NONNULL_END

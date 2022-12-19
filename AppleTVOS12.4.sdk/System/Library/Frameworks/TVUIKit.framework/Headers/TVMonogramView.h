//
//  TVMonogramView.h
//  TVUIKit
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <TVUIKit/TVLockupView.h>

NS_ASSUME_NONNULL_BEGIN

/**
 TVMonogramView is a lockup view specializing in presenting monograms.
 @discussion The system provides a generic silhouette placeholder image. If personNameComponents is set, the system composes an appropriate 'monogram' image with the initials. When an 'image' is set, the system uses it instead. When no frame or contentSize is explicitly set, the system uses a default size. 
 */
__attribute__((visibility("default"))) API_AVAILABLE(tvos(12.0)) API_UNAVAILABLE(ios, watchos)
@interface TVMonogramView : TVLockupView

/**
 The name to be monogrammed
 */
@property (nullable, nonatomic, strong) NSPersonNameComponents *personNameComponents;

/**
 An optional image
 @discussion If provided, the system uses this image instead of the generated monogram image
 */
@property (nullable, nonatomic, strong) UIImage *image;

/**
 An optional title.
 */
@property (nullable, nonatomic, copy) NSString *title;

/**
 An optional subtitle.
 */
@property (nullable, nonatomic, copy) NSString *subtitle;

@end

NS_ASSUME_NONNULL_END

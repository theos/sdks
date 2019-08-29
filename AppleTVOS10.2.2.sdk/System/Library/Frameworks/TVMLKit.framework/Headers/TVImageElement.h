//
//  TVImageElement.h
//  TVMLKit
//
//  Copyright (c) 2014-2015 Apple. All rights reserved.
//

#import <TVMLKit/TVViewElement.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TVImageType) {
    TVImageTypeImage,
    
    TVImageTypeFullscreen,
    TVImageTypeDecoration,
    TVImageTypeHero
} NS_ENUM_AVAILABLE_IOS(9_0);

/*!
 @decription Convenience class representing <img /> element.
 */
TV_EXTERN_CLASS_AVAILABLE(9_0)
@interface TVImageElement : TVViewElement

@property (nonatomic, readonly, nullable) NSURL *URL;
@property (nonatomic, readonly, nullable) NSDictionary<NSString *, NSURL *> *srcset;
@property (nonatomic, readonly) TVImageType imageType;

@end

NS_ASSUME_NONNULL_END

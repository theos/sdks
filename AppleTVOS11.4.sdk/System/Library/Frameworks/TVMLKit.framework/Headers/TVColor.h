//
//  TVColor.h
//  TVMLKit
//
//  Copyright (c) 2014-2015 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TVMLKit/TVMLKitDefines.h>
#import <UIKit/UIColor.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TVColorType) {
    TVColorTypeNone,
    
    TVColorTypePlain,
    TVColorTypeLinearGradientTopToBottom,
    TVColorTypeLinearGradientLeftToRight
} NS_ENUM_AVAILABLE_IOS(9_0);

/*!
 @description Defines the color data for styles of type TVViewElementStyleTypeColor.
 */
TV_EXTERN_CLASS_AVAILABLE(9_0)
@interface TVColor : NSObject <NSCopying>

@property (nonatomic, readonly) TVColorType colorType;

// Valid when colorType is TVColorTypePlain
@property (nonatomic, readonly, nullable) UIColor *color;

// Valid when colorType is either TVColorTypeLinearGradientTopToBottom or TVColorTypeLinearGradientLeftToRight
@property (nonatomic, readonly, nullable) NSArray<UIColor *> *gradientColors;

// Valid when colorType is either TVColorTypeLinearGradientTopToBottom or TVColorTypeLinearGradientLeftToRight
// These are the stops for colors provided by gradientColors for a gradient.
@property (nonatomic, readonly, nullable) NSArray<NSNumber *> *gradientPoints;

@end

NS_ASSUME_NONNULL_END

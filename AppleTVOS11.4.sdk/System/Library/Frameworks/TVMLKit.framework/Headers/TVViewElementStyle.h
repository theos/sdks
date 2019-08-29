//
//  TVViewElementStyle.h
//  TVMLKit
//
//  Copyright (c) 2014-2015 Apple. All rights reserved.
//

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>
#import <TVMLKit/TVColor.h>
#import <TVMLKit/TVMLKitDefines.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TVElementAlignment) {
    TVElementAlignmentUndefined,
    
    TVElementAlignmentLeft,
    TVElementAlignmentCenter,
    TVElementAlignmentRight,
    
    TVElementAlignmentLeading,
    TVElementAlignmentTrailing,
} NS_ENUM_AVAILABLE_IOS(9_0);

typedef NS_ENUM(NSInteger, TVElementContentAlignment) {
    TVElementContentAlignmentUndefined,
    
    TVElementContentAlignmentTop,
    TVElementContentAlignmentCenter,
    TVElementContentAlignmentBottom
} NS_ENUM_AVAILABLE_IOS(9_0);

typedef NS_ENUM(NSInteger, TVElementPosition) {
    TVElementPositionUndefined,

    TVElementPositionCenter,
    TVElementPositionTop,
    TVElementPositionBottom,
    TVElementPositionLeft,
    TVElementPositionRight,
    TVElementPositionTopLeft,
    TVElementPositionTopRight,
    TVElementPositionBottomLeft,
    TVElementPositionBottomRight,
    TVElementPositionHeader,
    TVElementPositionFooter,

    TVElementPositionLeading,
    TVElementPositionTrailing,
    TVElementPositionTopLeading,
    TVElementPositionTopTrailing,
    TVElementPositionBottomLeading,
    TVElementPositionBottomTrailing,
} NS_ENUM_AVAILABLE_IOS(9_0);

/*!
 @description An instance of TVViewElementStyle contains the set of styles applied to the view element.
 */
TV_EXTERN_CLASS_AVAILABLE(9_0)
@interface TVViewElementStyle : NSObject <NSCopying>

// Returns the value associated with a given style name.
- (nullable id)valueForStyleProperty:(NSString *)name;

// Convenience API's for AppleTV defined styles
@property (nonatomic, readonly, nullable) TVColor *backgroundColor;
@property (nonatomic, readonly, nullable) TVColor *color;
@property (nonatomic, readonly) CGFloat fontSize;
@property (nonatomic, readonly, nullable) NSString *fontWeight;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, readonly) UIEdgeInsets margin;
@property (nonatomic, readonly) UIEdgeInsets focusMargin NS_AVAILABLE_IOS(10_0);
@property (nonatomic, readonly) CGFloat maxHeight;
@property (nonatomic, readonly) CGFloat maxWidth;
@property (nonatomic, readonly) CGFloat minHeight;
@property (nonatomic, readonly) CGFloat minWidth;
@property (nonatomic, readonly) UIEdgeInsets padding;
@property (nonatomic, readonly) NSTextAlignment textAlignment;
@property (nonatomic, readonly) CGFloat width;

@property (nonatomic, readonly) TVElementAlignment alignment;
@property (nonatomic, readonly) TVElementContentAlignment contentAlignment;
@property (nonatomic, readonly, nullable) TVColor *highlightColor;
@property (nonatomic, readonly, nullable) NSString *imageTreatmentName;
@property (nonatomic, readonly) CGFloat interitemSpacing;
@property (nonatomic, readonly, nullable) NSString *textHighlightStyle;
@property (nonatomic, readonly) CGFloat textMinimumScaleFactor;
@property (nonatomic, readonly) TVElementPosition position;
@property (nonatomic, readonly, nullable) NSString *ratingStyle;
@property (nonatomic, readonly) NSUInteger maxTextLines;
@property (nonatomic, readonly, nullable) NSString *textStyle;
@property (nonatomic, readonly, nullable) TVColor *tintColor;

@end

NS_ASSUME_NONNULL_END

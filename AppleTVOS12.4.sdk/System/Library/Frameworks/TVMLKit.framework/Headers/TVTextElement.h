//
//  TVTextElement.h
//  TVMLKit
//
//  Copyright (c) 2014-2015 Apple. All rights reserved.
//

#import <TVMLKit/TVViewElement.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TVTextElementStyle) {
    TVTextElementStyleNone,

    TVTextElementStyleTitle,
    TVTextElementStyleSubtitle,
    TVTextElementStyleDescription,
    TVTextElementStyleDecoration
} NS_ENUM_AVAILABLE_IOS(9_0);

/*!
 @decription Represents textual content for the DOM element.
 */
TV_EXTERN_CLASS_AVAILABLE(9_0)
@interface TVTextElement : TVViewElement

@property (nonatomic, readonly, nullable) NSAttributedString *attributedText;
@property (nonatomic, readonly) TVTextElementStyle textStyle;

- (NSAttributedString *)attributedStringWithFont:(UIFont *)font;
- (NSAttributedString *)attributedStringWithFont:(UIFont *)font
                                 foregroundColor:(nullable UIColor *)foregroundColor
                                   textAlignment:(NSTextAlignment)alignment;

@end

NS_ASSUME_NONNULL_END

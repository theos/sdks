//
//  TVStyleFactory.h
//  TVMLKit
//
//  Copyright (c) 2014-2015 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TVMLKit/TVMLKitDefines.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TVViewElementStyleType) {
    TVViewElementStyleTypeInteger = 1,
    TVViewElementStyleTypeDouble,
    TVViewElementStyleTypePoint,
    TVViewElementStyleTypeString,
    TVViewElementStyleTypeColor,
    TVViewElementStyleTypeURL,
    TVViewElementStyleTypeTransform,
    TVViewElementStyleTypeEdgeInsets
} NS_ENUM_AVAILABLE_IOS(9_0);

/*!
 @description Factory to register new styles to define custom style data.
 */
TV_EXTERN_CLASS_AVAILABLE(9_0)
@interface TVStyleFactory : NSObject

+ (void)registerStyle:(NSString *)styleName withType:(TVViewElementStyleType)type inherited:(BOOL)inherited;

@end

NS_ASSUME_NONNULL_END

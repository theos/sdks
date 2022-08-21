//
//  TVElementFactory.h
//  TVMLKit
//
//  Copyright (c) 2014-2015 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TVMLKit/TVMLKitDefines.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 @description Factory for registration of new elements that extend Apple TV markup language. Registration is required
        in order for the framework to parse these new elements and should happen prior to initializing TVApplicationController.
 */
TV_EXTERN_CLASS_AVAILABLE(9_0)
@interface TVElementFactory : NSObject

+ (void)registerViewElementClass:(Class)elementClass forElementName:(NSString *)elementName;

@end

NS_ASSUME_NONNULL_END

#if USE_UIKIT_PUBLIC_HEADERS || !__has_include(<UIKitCore/UIStoryboard.h>)
//
//  UIStoryboard.h
//  UIKit
//
//  Copyright 2011-2018 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@class UIViewController;

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE_IOS(5_0) @interface UIStoryboard : NSObject {
}

+ (UIStoryboard *)storyboardWithName:(NSString *)name bundle:(nullable NSBundle *)storyboardBundleOrNil;

- (nullable __kindof UIViewController *)instantiateInitialViewController;
- (__kindof UIViewController *)instantiateViewControllerWithIdentifier:(NSString *)identifier;

@end

NS_ASSUME_NONNULL_END

#else
#import <UIKitCore/UIStoryboard.h>
#endif

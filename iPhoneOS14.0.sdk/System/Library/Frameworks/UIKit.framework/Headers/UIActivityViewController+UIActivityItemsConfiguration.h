#if (defined(USE_UIKIT_PUBLIC_HEADERS) && USE_UIKIT_PUBLIC_HEADERS) || !__has_include(<UIKitCore/UIActivityViewController+UIActivityItemsConfiguration.h>)
//
//  UIActivityViewController+UIActivityItemsConfiguration.h
//  UIKit
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <UIKit/ShareSheet.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UIActivityItemsConfigurationReading;

@interface UIActivityViewController (UIActivityItemsConfiguration)

- (instancetype)initWithActivityItemsConfiguration:(id<UIActivityItemsConfigurationReading>)activityItemsConfiguration API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(tvos, watchos);

@end

NS_ASSUME_NONNULL_END

#else
#import <UIKitCore/UIActivityViewController+UIActivityItemsConfiguration.h>
#endif

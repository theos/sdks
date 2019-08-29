#if USE_UIKIT_PUBLIC_HEADERS || !__has_include(<UIKitCore/UIDragPreviewParameters.h>)
//
//  UIDragPreviewParameters.h
//  UIKit
//
//  Copyright © 2017-2018 Apple Inc. All rights reserved.
//

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class UIBezierPath, UIColor;

UIKIT_EXTERN API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(watchos, tvos) @interface UIDragPreviewParameters : NSObject <NSCopying>

/* The default parameters. Use these for most drags.
 */
- (instancetype)init NS_DESIGNATED_INITIALIZER;

/* Parameters to show a preview of text.
 *
 * To clip the preview to only specific lines of text, specify one or more
 * `NSValue`s containing `CGRect`s of those lines, in the view's coordinate
 * system.
 *
 * The `visiblePath` property below will be set to a path based on the rects.
 * If `textLineRects` is empty, the whole view will be shown.
 */
- (instancetype)initWithTextLineRects:(NSArray<NSValue /* CGRect */ *> *)textLineRects;

/* The part of the view that should be shown in the preview.
 * If `nil`, the whole view will be shown.
 * Specify a path in the coordinate space of the view.
 */
@property (nonatomic, copy, nullable) UIBezierPath *visiblePath;

/* The background color that the preview draws behind the specified view.
 * Set this to `nil` to reset to the default value.
 */
@property (nonatomic, copy, null_resettable) UIColor *backgroundColor;

@end

NS_ASSUME_NONNULL_END

#else
#import <UIKitCore/UIDragPreviewParameters.h>
#endif

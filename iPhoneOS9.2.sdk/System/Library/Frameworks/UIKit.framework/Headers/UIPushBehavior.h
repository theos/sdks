//
//  UIPushBehavior.h
//  UIKit
//
//  Copyright (c) 2012-2015 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>
#import <UIKit/UIDynamicBehavior.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, UIPushBehaviorMode) {
    UIPushBehaviorModeContinuous,
    UIPushBehaviorModeInstantaneous
} NS_ENUM_AVAILABLE_IOS(7_0);

NS_CLASS_AVAILABLE_IOS(7_0) @interface UIPushBehavior : UIDynamicBehavior

- (instancetype)initWithItems:(NSArray<id <UIDynamicItem>> *)items mode:(UIPushBehaviorMode)mode NS_DESIGNATED_INITIALIZER;

- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;
@property (nonatomic, readonly, copy) NSArray<id <UIDynamicItem>> *items;

- (UIOffset)targetOffsetFromCenterForItem:(id <UIDynamicItem>)item;
- (void)setTargetOffsetFromCenter:(UIOffset)o forItem:(id <UIDynamicItem>)item;

@property (nonatomic, readonly) UIPushBehaviorMode mode;
@property (nonatomic, readwrite) BOOL active;

@property (readwrite, nonatomic) CGFloat angle;
// A continuous force vector with a magnitude of 1.0, applied to a 100 point x 100 point view whose density value is 1.0, results in view acceleration of 100 points per s^2
@property (readwrite, nonatomic) CGFloat magnitude;
@property (readwrite, nonatomic) CGVector pushDirection;

- (void)setAngle:(CGFloat)angle magnitude:(CGFloat)magnitude;

@end

NS_ASSUME_NONNULL_END

//
//  UIAccessibilityCustomAction.h
//  UIKit
//
//  Copyright (c) 2014-2015 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE_IOS(8_0) @interface UIAccessibilityCustomAction : NSObject

- (instancetype)initWithName:(NSString *)name target:(nullable id)target selector:(SEL)selector;

/*
 A localized name that describes the action.
 */
@property (nonatomic, copy) NSString *name;

/*
 The object that will perform the action.
 */
@property (nullable, nonatomic, weak) id target;

/*
 The method that will be called on the target to perform the action.
 It must conform to one of the following signatures:
 - (BOOL)myPerformActionMethod;
 - (BOOL)myPerformActionMethod:(UIAccessibilityCustomAction *)action;
 */
@property (nonatomic, assign) SEL selector;

@end

NS_ASSUME_NONNULL_END

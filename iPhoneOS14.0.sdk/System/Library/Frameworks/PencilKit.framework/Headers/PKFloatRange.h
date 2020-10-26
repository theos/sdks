//
//  PKFloatRange.h
//  PencilKit
//
//  Created by Will Thimbleby on 1/24/20.
//  Copyright © 2020 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_REFINED_FOR_SWIFT
API_AVAILABLE(ios(14.0), macos(10.16))
@interface PKFloatRange : NSObject <NSCopying>

@property (nonatomic, readonly) CGFloat lowerBound;
@property (nonatomic, readonly) CGFloat upperBound;

- (instancetype)initWithLowerBound:(CGFloat)lowerBound upperBound:(CGFloat)upperBound;

@end

NS_ASSUME_NONNULL_END

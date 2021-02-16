//
//  MLCSliceLayer.h
//  MLCompute
//
//  Copyright © 2019 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MLCompute/MLCLayer.h>
#import <MLCompute/MLCMatMulDescriptor.h>

NS_ASSUME_NONNULL_BEGIN

/*! @abstract   Slice layer is used to slice a given source.
 *  @discussion Slicing should not decrease the tensor dimension.
 *  The start, end and stride vectors must be of the same size equal to the source tensor dimension. Only positive stride is supported.
 */
MLCOMPUTE_CLASS_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
@interface MLCSliceLayer : MLCLayer

@property (readonly, nonatomic, copy) NSArray<NSNumber *> *start NS_REFINED_FOR_SWIFT;
@property (readonly, nonatomic, copy) NSArray<NSNumber *> *end NS_REFINED_FOR_SWIFT;
@property (readonly, nonatomic, copy, nullable) NSArray<NSNumber *> *stride NS_REFINED_FOR_SWIFT;

/*!
 @abstract Create a slice layer
 @param    stride If set to nil, it will be set to 1.
 @return   A new layer for slicing tensors.
 */
+ (instancetype _Nullable)sliceLayerWithStart:(NSArray<NSNumber *> *)start
                                          end:(NSArray<NSNumber *> *)end
                                       stride:(NSArray<NSNumber *> * _Nullable)stride
   NS_REFINED_FOR_SWIFT;

@end

NS_ASSUME_NONNULL_END

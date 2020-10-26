//
//  MPSGraphAutomaticDifferentiation.h
//  MPSGraph
//
//  Created on 3/28/20.
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#ifndef MPSGraphGradientOps_h
#define MPSGraphGradientOps_h

#import <MetalPerformanceShadersGraph/MPSGraph.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPSGraph(MPSGraphGradientOps)

/*!
 * @abstract   Calculates partial derviative of primaryTensor wrt secondaryTensor
 *
 * @param      primaryTensor            tensor to be differentiated (numerator)
 * @param      tensors                         tensors to do the differentiation with (denominator)
 * @param      name                               name for the gradient operation
 *
 * @return     A valid MPSGraphTensor dictionary object containing partial derivative d(primaryTensor)/d(secondaryTensor) for each tensor as key
 */
-(NSDictionary<MPSGraphTensor *, MPSGraphTensor *> *) gradientForPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                                                   withTensors:(NSArray<MPSGraphTensor *> *) tensors
                                                                          name:(NSString * _Nullable) name;

@end

NS_ASSUME_NONNULL_END


#endif /* MPSGraphGradientOps_h */

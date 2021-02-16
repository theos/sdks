//
//  MPSGraphOptimizerOps.h
//  MetalPerformanceShadersGraph
//
//  Created on 2/4/20.
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#ifndef MPSGraphOptimizerOps_h
#define MPSGraphOptimizerOps_h

#import <MetalPerformanceShadersGraph/MPSGraph.h>

NS_ASSUME_NONNULL_BEGIN


@interface MPSGraph(MPSGraphOptimizerOps)

/*!
 *  @abstract      StochasticGradientDescent
 *  @discussion The StochasticGradientDescent performs a gradient descent
 *
 *              variable = variable - (learningRate * g)
 *
 *              where,
 *                g    is gradient of error wrt variable
 *
 */
-(MPSGraphTensor *) stochasticGradientDescentWithLearningRateTensor:(MPSGraphTensor *) learningRateTensor
                                                       valuesTensor:(MPSGraphTensor *) valuesTensor
                                                     gradientTensor:(MPSGraphTensor *) gradientTensor
                                                               name:(NSString * _Nullable) name;

-(MPSGraphOperation *) applyStochasticGradientDescentWithLearningRateTensor:(MPSGraphTensor *) learningRateTensor
                                                                   variable:(MPSGraphVariableOp *) variable
                                                             gradientTensor:(MPSGraphTensor *) gradientTensor
                                                                       name:(NSString * _Nullable) name;

@end

NS_ASSUME_NONNULL_END


#endif /* MPSGraphOptimizerOps_h */

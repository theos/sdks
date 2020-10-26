//
//  MPSGraphMatrixMultiplicationOps.h
//  MetalPerformanceShadersGraph
//
//  Created on 12/8/19.
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#ifndef MPSGraphMatrixMultiplicationOps_h
#define MPSGraphMatrixMultiplicationOps_h

#import <MetalPerformanceShadersGraph/MPSGraph.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPSGraph(MPSGraphMatrixMultiplicationOps)

/*!
 *  @abstract   Create  MatMul op and return the result tensor, it supports broadcasting as well
 *
 *  @code
 *              resultTensor = matmul(primaryTensor, secondaryTensor)
 *  @endcode
 *
 *  @param      primaryTensor          LHS tensor of the binary Op
 *  @param      secondaryTensor      RHS tensor of the binary Op
 *  @param      name                              name for the operation
 *
 *  @return     A valid MPSGraphTensor object.
 */
-(MPSGraphTensor *) matrixMultiplicationWithPrimaryTensor:(MPSGraphTensor *) primaryTensor
                                          secondaryTensor:(MPSGraphTensor *) secondaryTensor
                                                     name:(NSString * _Nullable) name
MPS_SWIFT_NAME(matrixMultiplication(primaryTensor:secondaryTensor:name));



@end


NS_ASSUME_NONNULL_END

#endif /* MPSGraphMatrixMultiplicationOps_h */

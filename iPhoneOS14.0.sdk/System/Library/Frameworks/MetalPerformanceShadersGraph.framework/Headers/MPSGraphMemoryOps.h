//
//  MPSGraphMemoryOps.h
//  MetalPerformanceShadersGraph
//
//  Created on 11/10/19.
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#ifndef MPSGraphMemoryOps_h
#define MPSGraphMemoryOps_h

#import <MetalPerformanceShadersGraph/MPSGraph.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPSGraphVariableOp : MPSGraphOperation

/*! @property   shape
 *  @discussion shape of the variable
 */
@property (readonly, nonnull, nonatomic) MPSShape *shape;

/*! @property   dataType
 *  @discussion dataType of the variable
 */
@property (readonly, nonatomic) MPSDataType dataType;

@end

@interface MPSGraph(MemoryOps)

/*!
 *  @abstract   Create a placeholder op and return the result tensor
 *
 *
 *  @param      shape                            shape of the output tensor, nil shape will result in an unranked tensor
 *  @param      dataType                     dataType of the placeholder tensor
 *  @param      name                              name for the placeholder operation
 *
 *  @return     A valid MPSGraphTensor object.
 */
-(MPSGraphTensor *) placeholderWithShape:(MPSShape * _Nullable) shape
                                dataType:(MPSDataType) dataType
                                    name:(NSString * _Nullable) name;

/*!
 *  @abstract   Create a placeholder op and return the result tensor
 *              dataType of the placeholder tensor set to MPSDataTypeFloat32
 *
 *  @param      shape                            shape of the output tensor, nil shape will result in an unranked tensor
 *  @param      name                              name for the placeholder operation
 *
 *  @return     A valid MPSGraphTensor object.
 */
-(MPSGraphTensor *) placeholderWithShape:(MPSShape * _Nullable) shape
                                    name:(NSString * _Nullable) name;

-(MPSGraphTensor *) constantWithData:(NSData *) data
                               shape:(MPSShape *) shape
                            dataType:(MPSDataType) dataType;

-(MPSGraphTensor *) constantWithScalar:(double) scalar
                                 shape:(MPSShape *) shape
                              dataType:(MPSDataType) dataType;

// FIXME: What does this resource tensor output if user targets it?
-(MPSGraphTensor *) variableWithData:(NSData *) data
                               shape:(MPSShape *) shape
                            dataType:(MPSDataType) dataType
                                name:(NSString * _Nullable) name;

-(MPSGraphTensor *) readVariable:(MPSGraphTensor *) variable
                            name:(NSString * _Nullable) name;

-(MPSGraphOperation *) assignVariable:(MPSGraphTensor *) variable
                    withValueOfTensor:(MPSGraphTensor *) tensor
                                 name:(NSString * _Nullable) name;


@end


NS_ASSUME_NONNULL_END

#endif /* MPSGraphMemoryOps_h */

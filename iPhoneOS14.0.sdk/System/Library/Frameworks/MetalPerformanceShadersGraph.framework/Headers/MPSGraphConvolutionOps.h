//
//  MPSGraphConvolutionOps.h
//  MetalPerformanceShadersGraph
//
//  Created on 12/20/19.
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#ifndef MPSGraphConvolutionOps_h
#define MPSGraphConvolutionOps_h

#import <MetalPerformanceShadersGraph/MPSGraph.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPSGraphConvolution2DOpDescriptor : NSObject<NSCopying>


@property (readwrite, nonatomic) NSUInteger strideInX;
@property (readwrite, nonatomic) NSUInteger strideInY;
@property (readwrite, nonatomic) NSUInteger dilationRateInX;
@property (readwrite, nonatomic) NSUInteger dilationRateInY;

@property (readwrite, nonatomic) NSUInteger paddingLeft;
@property (readwrite, nonatomic) NSUInteger paddingRight;
@property (readwrite, nonatomic) NSUInteger paddingTop;
@property (readwrite, nonatomic) NSUInteger paddingBottom;

@property (readwrite, nonatomic) MPSGraphPaddingStyle paddingStyle;
@property (readwrite, nonatomic) MPSGraphTensorNamedDataLayout dataLayout;
@property (readwrite, nonatomic) MPSGraphTensorNamedDataLayout weightsLayout;

/*! @property   groups
 *  @discussion groups of the operation
 */
@property (readwrite, nonatomic) NSUInteger groups;


+(nullable instancetype) descriptorWithStrideInX:(NSUInteger) strideInX
                                       strideInY:(NSUInteger) strideInY
                                 dilationRateInX:(NSUInteger) dilationRateInX
                                 dilationRateInY:(NSUInteger) dilationRateInY
                                          groups:(NSUInteger) groups
                                     paddingLeft:(NSUInteger) paddingLeft
                                    paddingRight:(NSUInteger) paddingRight
                                      paddingTop:(NSUInteger) paddingTop
                                   paddingBottom:(NSUInteger) paddingBottom
                                    paddingStyle:(MPSGraphPaddingStyle) paddingStyle
                                      dataLayout:(MPSGraphTensorNamedDataLayout) dataLayout
                                   weightsLayout:(MPSGraphTensorNamedDataLayout) weightsLayout;

+(nullable instancetype) descriptorWithStrideInX:(NSUInteger) strideInX
                                       strideInY:(NSUInteger) strideInY
                                 dilationRateInX:(NSUInteger) dilationRateInX
                                 dilationRateInY:(NSUInteger) dilationRateInY
                                          groups:(NSUInteger) groups
                                    paddingStyle:(MPSGraphPaddingStyle) paddingStyle
                                      dataLayout:(MPSGraphTensorNamedDataLayout) dataLayout
                                   weightsLayout:(MPSGraphTensorNamedDataLayout) weightsLayout;


-(void) setExplicitPaddingWithPaddingLeft:(NSUInteger) paddingLeft
                             paddingRight:(NSUInteger) paddingRight
                               paddingTop:(NSUInteger) paddingTop
                            paddingBottom:(NSUInteger) paddingBottom;


@end

@interface MPSGraph(MPSGraphConvolutionOps)



-(MPSGraphTensor *) convolution2DWithSourceTensor:(MPSGraphTensor *) sourceTensor
                                    weightsTensor:(MPSGraphTensor *) weightsTensor
                                       descriptor:(MPSGraphConvolution2DOpDescriptor *) descriptor
                                             name:(NSString * _Nullable) name;

-(MPSGraphTensor *) convolution2DDataGradientWithIncomingGradientTensor:(MPSGraphTensor *) incomingGradientTensor
                                                          weightsTensor:(MPSGraphTensor *) weightsTensor
                                                            outputShape:(MPSShape *) outputShape
                                           forwardConvolutionDescriptor:(MPSGraphConvolution2DOpDescriptor *) forwardConvolutionDescriptor
                                                                   name:(NSString * _Nullable) name;

-(MPSGraphTensor *) convolution2DWeightsGradientWithIncomingGradientTensor:(MPSGraphTensor *) incomingGradientTensor
                                                              sourceTensor:(MPSGraphTensor *) sourceTensor
                                                               outputShape:(MPSShape *) outputShape
                                              forwardConvolutionDescriptor:(MPSGraphConvolution2DOpDescriptor *) forwardConvolutionDescriptor
                                                                      name:(NSString * _Nullable) name;

@end

NS_ASSUME_NONNULL_END

#endif /* MPSGraphConvolutionOps_h */

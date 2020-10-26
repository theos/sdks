//
//  MLCEmbeddingLayer.h
//  MLCompute
//
//  Copyright © 2020 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MLCompute/MLCLayer.h>

@class MLCEmbeddingDescriptor;

NS_ASSUME_NONNULL_BEGIN

/*! @class      MLCEmbeddingLayer
 *  @abstract   An embedding layer which stores the words embedding
 */
MLCOMPUTE_CLASS_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
@interface MLCEmbeddingLayer : MLCLayer

@property (readonly, nonatomic, copy) MLCEmbeddingDescriptor *descriptor;

/*! @property   weights
 *  @abstract   The array of word embeddings
 */
@property (readonly, nonatomic, retain) MLCTensor *weights;


+ (instancetype)layerWithDescriptor:(MLCEmbeddingDescriptor *)descriptor
                            weights:(MLCTensor *)weights;

@end

NS_ASSUME_NONNULL_END


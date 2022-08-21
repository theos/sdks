//
//  MTLIndirectCommandEncoder.h
//  Metal
//
//  Copyright © 2017 Apple, Inc. All rights reserved.
//


#import <Metal/MTLStageInputOutputDescriptor.h>
#import <Metal/MTLRenderPipeline.h>

NS_ASSUME_NONNULL_BEGIN

/*
 @abstract
 Describes a CPU-recorded indirect render command
 */
API_AVAILABLE(macos(10.14), ios(12.0))
@protocol MTLIndirectRenderCommand <NSObject>
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)pipelineState API_AVAILABLE(macos(10.14)) API_UNAVAILABLE(ios);

- (void)setVertexBuffer:(id <MTLBuffer>)buffer offset:(NSUInteger)offset atIndex:(NSUInteger)index;
- (void)setFragmentBuffer:(id <MTLBuffer>)buffer offset:(NSUInteger)offset atIndex:(NSUInteger)index;


- (void)drawPrimitives:(MTLPrimitiveType)primitiveType vertexStart:(NSUInteger)vertexStart vertexCount:(NSUInteger)vertexCount instanceCount:(NSUInteger)instanceCount baseInstance:(NSUInteger)baseInstance;
- (void)drawIndexedPrimitives:(MTLPrimitiveType)primitiveType indexCount:(NSUInteger)indexCount indexType:(MTLIndexType)indexType indexBuffer:(id <MTLBuffer>)indexBuffer indexBufferOffset:(NSUInteger)indexBufferOffset instanceCount:(NSUInteger)instanceCount baseVertex:(NSInteger)baseVertex baseInstance:(NSUInteger)baseInstance;

- (void)reset;


@end


NS_ASSUME_NONNULL_END


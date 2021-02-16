//
//  MTLIntersectionFunctionTable.h
//  Framework
//
//  Copyright © 2020 Apple, Inc. All rights reserved.
//

#import <Metal/MTLDefines.h>


#import <Metal/MTLResource.h>
#import <Metal/MTLFunctionHandle.h>

MTL_EXPORT API_AVAILABLE(macos(10.16), ios(14.0))
@interface MTLIntersectionFunctionTableDescriptor : NSObject

@property (nonatomic) NSUInteger functionCount;

@end

API_AVAILABLE(macos(10.16), ios(14.0))
@protocol MTLIntersectionFunctionTable <MTLResource>


- (void)setBuffer:(nullable id <MTLBuffer>)buffer offset:(NSUInteger)offset atIndex:(NSUInteger)index;
- (void)setBuffers:(const id <MTLBuffer> __nullable [__nonnull])buffers offsets:(const NSUInteger [__nonnull])offsets withRange:(NSRange)range;


- (void)setFunction:(nullable id <MTLFunctionHandle>)function atIndex:(NSUInteger)index;
- (void)setFunctions:(const id <MTLFunctionHandle> __nullable [__nonnull])functions withRange:(NSRange)range;

@end


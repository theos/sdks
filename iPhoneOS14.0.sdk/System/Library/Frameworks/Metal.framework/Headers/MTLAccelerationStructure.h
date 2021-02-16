//
//  MTLAccelerationStructure.h
//  Metal
//
//  Copyright (c) 2020 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Metal/MTLDefines.h>
#import <Metal/MTLTypes.h>
#import <Metal/MTLArgument.h>
#import <Metal/MTLStageInputOutputDescriptor.h>
#import <Metal/MTLRenderCommandEncoder.h>
#import <Metal/MTLAccelerationStructureTypes.h>
#import <Metal/MTLResource.h>


@protocol MTLBuffer;
@protocol MTLAccelerationStructure;

typedef NS_OPTIONS(NSUInteger, MTLAccelerationStructureUsage) {
    /**
     * @brief Default usage
     */
    MTLAccelerationStructureUsageNone = 0,
    
    /**
     * @brief Enable refitting for this acceleration structure. Note that this may reduce
     * acceleration structure quality.
     */
    MTLAccelerationStructureUsageRefit = (1 << 0),
   
    /**
     * @brief Prefer building this acceleration structure quickly at the cost of reduced ray
     * tracing performance.
     */
    MTLAccelerationStructureUsagePreferFastBuild = (1 << 1),
} API_AVAILABLE(macos(10.16), ios(14.0));

typedef NS_OPTIONS(NSUInteger, MTLAccelerationStructureGeometryFlags) {
    /**
     * @brief No flags
     */
    MTLAccelerationStructureGeometryFlagNone = 0,

    /**
     * @brief Geometry is opaque
     */
    MTLAccelerationStructureGeometryFlagOpaque = (1 << 0),

    /**
     * @brief Invoke intersection functions at most once per ray/primitive
     * intersection
     */
    MTLAccelerationStructureGeometryFlagNoDuplicateIntersectionFunctionInvocation = (1 << 1),
} API_AVAILABLE(macos(10.16), ios(14.0));

typedef NS_OPTIONS(NSUInteger, MTLAccelerationStructureInstanceFlags) {
    /**
     * @brief No flags
     */
    MTLAccelerationStructureInstanceFlagNone = 0,

    /**
     * @brief Disable triangle back or front face culling
     */
    MTLAccelerationStructureInstanceFlagDisableTriangleCulling = (1 << 0),

    /**
     * @brief Disable triangle back or front face culling
     */
    MTLAccelerationStructureInstanceFlagTriangleFrontFacingWindingCounterClockwise = (1 << 1),

    /**
     * @brief Geometry is opaque
     */
    MTLAccelerationStructureInstanceFlagOpaque = (1 << 2),

    /**
     * @brief Geometry is non-opaque
     */
    MTLAccelerationStructureInstanceFlagNonOpaque = (1 << 3),
} API_AVAILABLE(macos(10.16), ios(14.0));

/**
 * @brief Base class for acceleration structure descriptors. Do not use this class directly. Use
 * one of the derived classes instead.
 */
MTL_EXPORT API_AVAILABLE(macos(10.16), ios(14.0))
@interface MTLAccelerationStructureDescriptor : NSObject <NSCopying>

@property (nonatomic) MTLAccelerationStructureUsage usage;

@end

/**
 * @brief Base class for all geometry descriptors. Do not use this class directly. Use one of the derived
 * classes instead.
 */
MTL_EXPORT API_AVAILABLE(macos(10.16), ios(14.0))
@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying>

@property (nonatomic) NSUInteger intersectionFunctionTableOffset;

@property (nonatomic) MTLAccelerationStructureGeometryFlags flags;

@end

/**
 * @brief Descriptor for a primitive acceleration structure
 */
MTL_EXPORT API_AVAILABLE(macos(10.16), ios(14.0))
@interface MTLPrimitiveAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor

/**
 * @brief Array of geometry descriptors
 */
@property (nonatomic, retain) NSArray <MTLAccelerationStructureGeometryDescriptor *> * _Nullable geometryDescriptors;

+ (_Nonnull instancetype)descriptor;

@end

/**
 * @brief Descriptor for triangle geometry
 */
MTL_EXPORT API_AVAILABLE(macos(10.16), ios(14.0))
@interface MTLAccelerationStructureTriangleGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

/**
 * @brief Vertex buffer containing triangle vertices. Each vertex must consist of three 32-bit floats
 * encoding X, Y, and Z position. Must not be nil.
 */
@property (nonatomic, retain) id <MTLBuffer> _Nullable vertexBuffer;

/**
 * @brief Vertex buffer offset. Must be a multiple of the vertex stride and must be aligned to the
 * platform's buffer offset alignment.
 */
@property (nonatomic) NSUInteger vertexBufferOffset;

/**
 * @brief Stride, in bytes, between vertices in the vertex buffer. Must be at least 12 bytes and must be a
 * multiple of 4 bytes. Defaults to 12 bytes.
 */
@property (nonatomic) NSUInteger vertexStride;

/**
 * Optional index buffer containing references to vertices in the vertex buffer. May be nil.
 */
@property (nonatomic, retain) id <MTLBuffer> _Nullable indexBuffer;

/**
 * @brief Index buffer offset. Must be a multiple of the index data type size and must be aligned to both
 * the index data type's alignment and the platform's buffer offset alignment.
 */
@property (nonatomic) NSUInteger indexBufferOffset;

/**
 * @brief Index data type. Must be either MTLDataTypeUInt32 or MTLDataTypeUInt16. Defaults to
 * MTLDataTypeUInt32.
 */
@property (nonatomic) MTLDataType indexDataType;

/**
 * @brief Number of triangles
 */
@property (nonatomic) NSUInteger triangleCount;

+ (_Nonnull instancetype)descriptor;

@end

/**
 * @brief Descriptor for bounding box geometry
 */
MTL_EXPORT API_AVAILABLE(macos(10.16), ios(14.0))
@interface MTLAccelerationStructureBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

/**
 * @brief Bounding box buffer containing MTLAxisAlignedBoundingBoxes. Must not be nil.
 */
@property (nonatomic, retain) id <MTLBuffer> _Nullable boundingBoxBuffer;

/**
 * @brief Bounding box buffer offset. Must be a multiple of the bounding box stride and must be
 * aligned to the platform's buffer offset alignment.
 */
@property (nonatomic) NSUInteger boundingBoxBufferOffset;

/**
 * @brief Stride, in bytes, between bounding boxes in the bounding box buffer. Must be at least 24
 * bytes and must be a multiple of 4 bytes. Defaults to 24 bytes.
 */
@property (nonatomic) NSUInteger boundingBoxStride;

/**
 * @brief Number of bounding boxes
 */
@property (nonatomic) NSUInteger boundingBoxCount;

+ (_Nonnull instancetype)descriptor;

@end

/**
 * @brief Descriptor for an instance acceleration structure
 */
MTL_EXPORT API_AVAILABLE(macos(10.16), ios(14.0))
@interface MTLInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor

/**
 * @brief Buffer containing MTLAccelerationStructureInstanceDescriptors
 */
@property (nonatomic, retain) id <MTLBuffer> _Nullable instanceDescriptorBuffer;

/**
 * @brief Offset into the instance descriptor buffer. Must be a multiple of 64 bytes and must be
 * aligned to the platform's buffer offset alignment.
 */
@property (nonatomic) NSUInteger instanceDescriptorBufferOffset;

/**
 * @brief Stride, in bytes, between instance descriptors in the instance descriptor buffer. Must
 * be at least 64 bytes and must be a multiple of 4 bytes. Defaults to 64 bytes.
 */
@property (nonatomic) NSUInteger instanceDescriptorStride;

/**
 * @brief Number of instance descriptors
 */
@property (nonatomic) NSUInteger instanceCount;

/**
 * @brief Acceleration structures to be instanced
 */
@property (nonatomic, retain) NSArray <id <MTLAccelerationStructure>> * _Nullable instancedAccelerationStructures;

+ (_Nonnull instancetype)descriptor;

@end

API_AVAILABLE(macos(10.16), ios(14.0))
@protocol MTLAccelerationStructure <MTLResource>

@property (nonatomic, readonly) NSUInteger size;

@end


/*
 *  CVMetalTextureCache.h
 *  CoreVideo
 *
 *  Copyright 2011-2015 Apple Inc. All rights reserved.
 *
 */

/*! @header CVMetalTextureCache.h
 @copyright 2011-2015 Apple Inc. All rights reserved.
 @availability iOS 8.0 or later. Mac OS X 10.11 or later.
 @discussion A CoreVideo Metal TextureCache is used to cache and manage CVMetalTextures.
 
 */

#if !defined(__COREVIDEO__CVMETALTEXTURECACHE_H__)
#define __COREVIDEO__CVMETALTEXTURECACHE_H__ 1

#include <CoreVideo/CVBase.h>
#include <CoreVideo/CVReturn.h>
#include <CoreVideo/CVBuffer.h>
#include <CoreVideo/CVMetalTexture.h>

#if defined(__cplusplus)
extern "C" {
#endif

//
// cacheAttributes
//
// By default, textures will age out after one second.  Setting a maximum
// texture age of zero will disable the age-out mechanism completely.
// CVMetalTextureCacheFlush() can be used to force eviction in either case.

CV_EXPORT const CFStringRef CV_NONNULL kCVMetalTextureCacheMaximumTextureAgeKey __OSX_AVAILABLE_STARTING(__MAC_10_11,__IPHONE_8_0);

//
// textureAttributes - reserved for future use
    
/* CVMetalTextureCacheRef is only available to Objective C code */
#if defined(__OBJC__) && COREVIDEO_SUPPORTS_METAL
#import <Metal/MTLPixelFormat.h>

@protocol MTLDevice;
    
/*!
    @typedef	CVMetalTextureCacheRef
    @abstract   CoreVideo Metal Texture Cache

*/
typedef struct CV_BRIDGED_TYPE(id) __CVMetalTextureCache *CVMetalTextureCacheRef;


CV_EXPORT CFTypeID CVMetalTextureCacheGetTypeID(void) __OSX_AVAILABLE_STARTING(__MAC_10_11,__IPHONE_8_0);

/*!
    @function   CVMetalTextureCacheCreate
    @abstract   Creates a new Texture Cache.
    @param      allocator The CFAllocatorRef to use for allocating the cache.  May be NULL.
    @param      cacheAttributes A CFDictionaryRef containing the attributes of the cache itself.   May be NULL.
    @param      metalDevice The Metal device for which the texture objects will be created.
    @param      textureAttributes A CFDictionaryRef containing the attributes to be used for creating the CVMetalTexture objects.  May be NULL.
    @param      cacheOut   The newly created texture cache will be placed here
    @result     Returns kCVReturnSuccess on success
*/
CV_EXPORT CVReturn CVMetalTextureCacheCreate(
					CFAllocatorRef CV_NULLABLE allocator,
					CFDictionaryRef CV_NULLABLE cacheAttributes,
					id <MTLDevice> CV_NONNULL metalDevice,
					CFDictionaryRef CV_NULLABLE textureAttributes,
					CVMetalTextureCacheRef CV_NULLABLE * CV_NONNULL cacheOut ) __OSX_AVAILABLE_STARTING(__MAC_10_11,__IPHONE_8_0);

/*!
    @function   CVMetalTextureCacheCreateTextureFromImage
    @abstract   Creates a CVMetalTexture object from an existing CVImageBuffer
    @param      allocator The CFAllocatorRef to use for allocating the CVMetalTexture object.  May be NULL.
    @param      textureCache The texture cache object that will manage the texture.
    @param      sourceImage The CVImageBuffer that you want to create a CVMetalTexture from.
    @param      textureAttributes A CFDictionaryRef containing attributes to be used for creating the CVMetalTexture objects.  May be NULL.
    @param      pixelFormat Specifies the Metal pixel format.
    @param      width Specifies the width of the texture image.
    @param      height Specifies the height of the texture image.
    @param      planeIndex Specifies the plane of the CVImageBuffer to map bind.  Ignored for non-planar CVImageBuffers.
    @param      textureOut The newly created texture object will be placed here.
    @result     Returns kCVReturnSuccess on success
    @discussion Creates or returns a cached CVMetalTexture texture object mapped to the CVImageBuffer and
                associated params.  This creates a live binding between the CVImageBuffer and underlying
                CVMetalTexture texture object.
 
                Note that CoreVideo does not explicitly declare any pixel format types to be Metal compatible.  The assumption
                is that if the CVPixelBufferMetalCompatibilityKey has been specified, all buffers will be Metal compatible
                (IOSurface backed), and thus it is the developer's responsibility to choose an appropriate Metal pixel format
                for the CVPixelBuffers.
 
                Here are some example mappings:

                Mapping a BGRA buffer:
                CVMetalTextureCacheCreateTextureFromImage(kCFAllocatorDefault, textureCache, pixelBuffer, NULL, MTLPixelFormatBGRA8Unorm, width, height, 0, &outTexture);

                Mapping the luma plane of a 420v buffer:
                CVMetalTextureCacheCreateTextureFromImage(kCFAllocatorDefault, textureCache, pixelBuffer, NULL, MTLPixelFormatR8Unorm, width, height, 0, &outTexture);

                Mapping the chroma plane of a 420v buffer as a source texture:
                CVMetalTextureCacheCreateTextureFromImage(kCFAllocatorDefault, textureCache, pixelBuffer, NULL, MTLPixelFormatRG8Unorm width/2, height/2, 1, &outTexture);

                Mapping a yuvs buffer as a source texture (note: yuvs/f and 2vuy are unpacked and resampled -- not colorspace converted)
                CVMetalTextureCacheCreateTextureFromImage(kCFAllocatorDefault, textureCache, pixelBuffer, NULL, MTLPixelFormatGBGR422, width, height, 1, &outTexture);
*/
CV_EXPORT CVReturn CVMetalTextureCacheCreateTextureFromImage(
									   CFAllocatorRef CV_NULLABLE allocator,
									   CVMetalTextureCacheRef CV_NONNULL textureCache,
									   CVImageBufferRef CV_NONNULL sourceImage,
									   CFDictionaryRef CV_NULLABLE textureAttributes,
								       MTLPixelFormat pixelFormat,
								       size_t width,
								       size_t height,
								       size_t planeIndex,
									   CVMetalTextureRef CV_NULLABLE * CV_NONNULL textureOut ) __OSX_AVAILABLE_STARTING(__MAC_10_11,__IPHONE_8_0);

/*!
    @function   CVMetalTextureCacheFlush
    @abstract   Performs internal housekeeping/recycling operations
    @discussion This call must be made periodically to give the texture cache a chance to do internal housekeeping operations.
    @param      textureCache The texture cache object to flush
    @param      options Currently unused, set to 0.
*/
CV_EXPORT void CVMetalTextureCacheFlush(CVMetalTextureCacheRef CV_NONNULL textureCache, CVOptionFlags options) __OSX_AVAILABLE_STARTING(__MAC_10_11,__IPHONE_8_0);
    
#endif
    
#if defined(__cplusplus)
}
#endif

#endif

/*!
 *  @header MPSImageResampling.h
 *  @framework MetalPerformanceShaders
 *
 *  @copyright Copyright (c) 2015 Apple Inc. All rights reserved.
 *  @abstract  Resampling filters for MetalPerformanceShaders
 */

#ifndef MPS_MPSImageResampling_h
#define MPS_MPSImageResampling_h

#include <MetalPerformanceShaders/MPSImageKernel.h>


/*!
 *  @class      MPSImageLanczosScale
 *  @abstract   Resize an image and / or change its aspect ratio
 *  @discussion The MPSImageLanczosScale filter can be used to resample an existing image
 *              using a different sampling frequency in each dimension. This can be
 *              used to enlarge or reduce the size of an image, or change the aspect
 *              ratio of an image.  The filter uses a Lanczos resampling algorithm
 *              which typically produces better quality for photographs, but is slower
 *              than linear sampling using the GPU texture units. Lanczos downsampling 
 *              does not require a low pass filter to be applied before it is used. 
 *              Because the resampling function has negative lobes, Lanczos can result 
 *              in ringing near sharp edges, making it less suitable for vector art.
 */
MPS_CLASS_AVAILABLE_STARTING( __MAC_10_11, __IPHONE_9_0, __TVOS_9_0)
@interface  MPSImageLanczosScale : MPSUnaryImageKernel

/*! @property   scaleTransform
 *  @abstract   An optional transform that describes how to scale and translate the source image
 *  @discussion If the scaleTransform is NULL, then the MPSImageLanczosScale filter will 
 *              rescale the image so that the source image fits exactly into the destination 
 *              texture.  If the transform is not NULL, then the transform is used for determining
 *              how to map the source image to the destination. Default: NULL
 *              
 *              When the scaleTransform is set to non-NULL, the values pointed to by the new 
 *              scaleTransform are copied to object storage, and the pointer is updated to point 
 *              to internal storage. Do not attempt to free it.  You may free your copy of 
 *              the MPSScaleTransform as soon as the property set operation is complete.
 *
 *              When calculating a scaleTransform, use the limits of the bounding box for the intended
 *              source region of interest and the destination clipRect. Adjustments for pixel center 
 *              coordinates are handled internally to the function.  For example,
 *              the scale transform to convert the entire source image to the entire destination image
 *              size (clipRect = MPSRectNoClip) would be:
 *
 *              @code
 *                  scaleTransform.scaleX = (double) dest.width / source.width;
 *                  scaleTransform.scaleY = (double) dest.height / source.height;
 *                  scaleTransform.translateX = scaleTransform.translateY = 0.0;
 *              @endcode
 *
 *              The translation parameters allow you to adjust the region of the source image used
 *              to create the destination image. They are in destination coordinates. To place the
 *              top left corner of the destination clipRect to represent the position {x,y} in source 
 *              coordinates, we solve for the translation based on the standard scale matrix operation
 *              for each axis:
 *
 *              @code
 *                  dest_position = source_position * scale + translation;
 *                  translation = dest_position - source_position * scale;
 *              @endcode
 *
 *              For the top left corner of the clipRect, the dest_position is considered to be {0,0}. 
 *              This gives us a translation of:
 *
 *              @code
 *                  scaleTransform.translateX = -source_origin.x * scaleTransform.scaleX;
 *                  scaleTransform.translateY = -source_origin.y * scaleTransform.scaleY;
 *              @endcode
 *
 *              One would typically use non-zero translations to do tiling, or provide a resized 
 *              view into a internal segment of an image.
 *
 *              Changing the Lanczos scale factor may trigger recalculation of signficant state internal
 *              to the object when the filter is encoded to the command buffer. The scale factor is
 *              scaleTransform->scaleX,Y, or the ratio of source and destination image sizes if
 *              scaleTransform is NULL. Reuse a MPSImageLancosScale object for frequently used scalings 
 *              to avoid redundantly recreating expensive resampling state.
 */
@property (readwrite, nonatomic, nullable) const MPSScaleTransform *scaleTransform;



@end

#endif /* MPS_MSImageResampling_h */

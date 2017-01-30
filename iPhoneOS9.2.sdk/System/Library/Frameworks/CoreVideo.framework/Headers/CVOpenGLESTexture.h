/*
 *  CVOpenGLESTexture.h
 *  CoreVideo
 *
 *  Copyright (c) 2011-2015 Apple Inc. All rights reserved.
 *
 */
 
 /*! @header CVOpenGLESTexture.h
	@copyright 2011-2015 Apple Inc. All rights reserved.
	@availability iOS 5.0 or later
    @discussion A CoreVideo Texture derives from an ImageBuffer, and is used for supplying source image data to OpenGL.
    		   
*/

#if !defined(__COREVIDEO_CVOPENGLESTEXTURE_H__)
#define __COREVIDEO_CVOPENGLESTEXTURE_H__ 1

#include <CoreVideo/CVBase.h>
#include <CoreVideo/CVReturn.h>
#include <CoreVideo/CVImageBuffer.h>
#include <CoreFoundation/CoreFoundation.h>
#include <OpenGLES/gltypes.h>
#include <stddef.h>
#include <stdint.h>

#if defined(__cplusplus)
extern "C" {
#endif

#pragma mark CVOpenGLESTexture

/*!
    @typedef	CVOpenGLESTextureRef
    @abstract   OpenGLES texture based image buffer

*/
typedef CVImageBufferRef CVOpenGLESTextureRef;

CV_EXPORT CFTypeID CVOpenGLESTextureGetTypeID(void) __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_5_0);

/*!
    @function   CVOpenGLESTextureGetTarget
    @abstract   Returns the texture target (eg. 2D vs. rect texture extension) of the CVOpenGLESTexture
    @param      image Target CVOpenGLESTexture
    @result     OpenGLES texture target
*/
CV_EXPORT GLenum CVOpenGLESTextureGetTarget( CVOpenGLESTextureRef CV_NONNULL image ) __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_5_0);

/*!
    @function   CVOpenGLESTextureGetName
    @abstract   Returns the texture target name of the CVOpenGLESTexture
    @param      image Target CVOpenGLESTexture
    @result     OpenGLES texture target name
*/
CV_EXPORT GLuint CVOpenGLESTextureGetName( CVOpenGLESTextureRef CV_NONNULL image ) __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_5_0);

/*!
    @function   CVOpenGLESTextureIsFlipped
    @abstract   Returns whether the image is flipped vertically or not.
    @param      image Target CVOpenGLESTexture
    @result     True if 0,0 in the texture is upper left, false if 0,0 is lower left
*/
CV_EXPORT Boolean CVOpenGLESTextureIsFlipped( CVOpenGLESTextureRef CV_NONNULL image ) __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_5_0);

/*!
    @function   CVOpenGLESTextureGetCleanTexCoords 
    @abstract   Returns convenient normalized texture coordinates for the part of the image that should be displayed
    @discussion This function automatically takes into account whether or not the texture is flipped.
    @param      image Target CVOpenGLESTexture
    @param      lowerLeft  - array of two GLfloats where the s and t normalized texture coordinates of the lower left corner of the image will be stored
    @param      lowerRight - array of two GLfloats where the s and t normalized texture coordinates of the lower right corner of the image will be stored
    @param      upperRight - array of two GLfloats where the s and t normalized texture coordinates of the upper right corner of the image will be stored
    @param      upperLeft  - array of two GLfloats where the s and t normalized texture coordinates of the upper right corner of the image will be stored
*/
CV_EXPORT void CVOpenGLESTextureGetCleanTexCoords( CVOpenGLESTextureRef CV_NONNULL image, 
                                                   GLfloat lowerLeft[2], 
                                                   GLfloat lowerRight[2], 
                                                   GLfloat upperRight[2],
                                                   GLfloat upperLeft[2] ) __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_5_0);

#if defined(__cplusplus)
}
#endif

#endif

//
//  MTLPixelFormat.h
//  Metal
//
//  Copyright (c) 2014 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Metal/MTLDefines.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, MTLPixelFormat)
{
    MTLPixelFormatInvalid = 0,

    /* Normal 8 bit formats */
    
    MTLPixelFormatA8Unorm      = 1,
    
    MTLPixelFormatR8Unorm                            = 10,
    MTLPixelFormatR8Unorm_sRGB API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 11,

    MTLPixelFormatR8Snorm      = 12,
    MTLPixelFormatR8Uint       = 13,
    MTLPixelFormatR8Sint       = 14,
    
    /* Normal 16 bit formats */

    MTLPixelFormatR16Unorm     = 20,
    MTLPixelFormatR16Snorm     = 22,
    MTLPixelFormatR16Uint      = 23,
    MTLPixelFormatR16Sint      = 24,
    MTLPixelFormatR16Float     = 25,

    MTLPixelFormatRG8Unorm                            = 30,
    MTLPixelFormatRG8Unorm_sRGB API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 31,
    MTLPixelFormatRG8Snorm                            = 32,
    MTLPixelFormatRG8Uint                             = 33,
    MTLPixelFormatRG8Sint                             = 34,

    /* Packed 16 bit formats */
    
    MTLPixelFormatB5G6R5Unorm API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 40,
    MTLPixelFormatA1BGR5Unorm API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 41,
    MTLPixelFormatABGR4Unorm  API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 42,
    MTLPixelFormatBGR5A1Unorm API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 43,

    /* Normal 32 bit formats */

    MTLPixelFormatR32Uint  = 53,
    MTLPixelFormatR32Sint  = 54,
    MTLPixelFormatR32Float = 55,

    MTLPixelFormatRG16Unorm  = 60,
    MTLPixelFormatRG16Snorm  = 62,
    MTLPixelFormatRG16Uint   = 63,
    MTLPixelFormatRG16Sint   = 64,
    MTLPixelFormatRG16Float  = 65,

    MTLPixelFormatRGBA8Unorm      = 70,
    MTLPixelFormatRGBA8Unorm_sRGB = 71,
    MTLPixelFormatRGBA8Snorm      = 72,
    MTLPixelFormatRGBA8Uint       = 73,
    MTLPixelFormatRGBA8Sint       = 74,
    
    MTLPixelFormatBGRA8Unorm      = 80,
    MTLPixelFormatBGRA8Unorm_sRGB = 81,

    /* Packed 32 bit formats */

    MTLPixelFormatRGB10A2Unorm = 90,
    MTLPixelFormatRGB10A2Uint  = 91,

    MTLPixelFormatRG11B10Float = 92,
    MTLPixelFormatRGB9E5Float = 93,

    MTLPixelFormatBGR10A2Unorm  API_AVAILABLE(macos(10.13), ios(11.0)) = 94,

    MTLPixelFormatBGR10_XR      API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macos, macCatalyst) = 554,
    MTLPixelFormatBGR10_XR_sRGB API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macos, macCatalyst) = 555,

    /* Normal 64 bit formats */

    MTLPixelFormatRG32Uint  = 103,
    MTLPixelFormatRG32Sint  = 104,
    MTLPixelFormatRG32Float = 105,

    MTLPixelFormatRGBA16Unorm  = 110,
    MTLPixelFormatRGBA16Snorm  = 112,
    MTLPixelFormatRGBA16Uint   = 113,
    MTLPixelFormatRGBA16Sint   = 114,
    MTLPixelFormatRGBA16Float  = 115,

    MTLPixelFormatBGRA10_XR      API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macos, macCatalyst) = 552,
    MTLPixelFormatBGRA10_XR_sRGB API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macos, macCatalyst) = 553,

    /* Normal 128 bit formats */

    MTLPixelFormatRGBA32Uint  = 123,
    MTLPixelFormatRGBA32Sint  = 124,
    MTLPixelFormatRGBA32Float = 125,

    /* Compressed formats. */

    /* S3TC/DXT */
    MTLPixelFormatBC1_RGBA              API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 130,
    MTLPixelFormatBC1_RGBA_sRGB         API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 131,
    MTLPixelFormatBC2_RGBA              API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 132,
    MTLPixelFormatBC2_RGBA_sRGB         API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 133,
    MTLPixelFormatBC3_RGBA              API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 134,
    MTLPixelFormatBC3_RGBA_sRGB         API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 135,

    /* RGTC */
    MTLPixelFormatBC4_RUnorm            API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 140,
    MTLPixelFormatBC4_RSnorm            API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 141,
    MTLPixelFormatBC5_RGUnorm           API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 142,
    MTLPixelFormatBC5_RGSnorm           API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 143,

    /* BPTC */
    MTLPixelFormatBC6H_RGBFloat         API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 150,
    MTLPixelFormatBC6H_RGBUfloat        API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 151,
    MTLPixelFormatBC7_RGBAUnorm         API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 152,
    MTLPixelFormatBC7_RGBAUnorm_sRGB    API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 153,

    /* PVRTC */
    MTLPixelFormatPVRTC_RGB_2BPP        API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 160,
    MTLPixelFormatPVRTC_RGB_2BPP_sRGB   API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 161,
    MTLPixelFormatPVRTC_RGB_4BPP        API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 162,
    MTLPixelFormatPVRTC_RGB_4BPP_sRGB   API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 163,
    MTLPixelFormatPVRTC_RGBA_2BPP       API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 164,
    MTLPixelFormatPVRTC_RGBA_2BPP_sRGB  API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 165,
    MTLPixelFormatPVRTC_RGBA_4BPP       API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 166,
    MTLPixelFormatPVRTC_RGBA_4BPP_sRGB  API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 167,

    /* ETC2 */
    MTLPixelFormatEAC_R11Unorm          API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 170,
    MTLPixelFormatEAC_R11Snorm          API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 172,
    MTLPixelFormatEAC_RG11Unorm         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 174,
    MTLPixelFormatEAC_RG11Snorm         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 176,
    MTLPixelFormatEAC_RGBA8             API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 178,
    MTLPixelFormatEAC_RGBA8_sRGB        API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 179,

    MTLPixelFormatETC2_RGB8             API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 180,
    MTLPixelFormatETC2_RGB8_sRGB        API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 181,
    MTLPixelFormatETC2_RGB8A1           API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 182,
    MTLPixelFormatETC2_RGB8A1_sRGB      API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 183,

    /* ASTC */
    MTLPixelFormatASTC_4x4_sRGB         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 186,
    MTLPixelFormatASTC_5x4_sRGB         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 187,
    MTLPixelFormatASTC_5x5_sRGB         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 188,
    MTLPixelFormatASTC_6x5_sRGB         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 189,
    MTLPixelFormatASTC_6x6_sRGB         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 190,
    MTLPixelFormatASTC_8x5_sRGB         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 192,
    MTLPixelFormatASTC_8x6_sRGB         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 193,
    MTLPixelFormatASTC_8x8_sRGB         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 194,
    MTLPixelFormatASTC_10x5_sRGB        API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 195,
    MTLPixelFormatASTC_10x6_sRGB        API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 196,
    MTLPixelFormatASTC_10x8_sRGB        API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 197,
    MTLPixelFormatASTC_10x10_sRGB       API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 198,
    MTLPixelFormatASTC_12x10_sRGB       API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 199,
    MTLPixelFormatASTC_12x12_sRGB       API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 200,

    MTLPixelFormatASTC_4x4_LDR          API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 204,
    MTLPixelFormatASTC_5x4_LDR          API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 205,
    MTLPixelFormatASTC_5x5_LDR          API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 206,
    MTLPixelFormatASTC_6x5_LDR          API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 207,
    MTLPixelFormatASTC_6x6_LDR          API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 208,
    MTLPixelFormatASTC_8x5_LDR          API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 210,
    MTLPixelFormatASTC_8x6_LDR          API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 211,
    MTLPixelFormatASTC_8x8_LDR          API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 212,
    MTLPixelFormatASTC_10x5_LDR         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 213,
    MTLPixelFormatASTC_10x6_LDR         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 214,
    MTLPixelFormatASTC_10x8_LDR         API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 215,
    MTLPixelFormatASTC_10x10_LDR        API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 216,
    MTLPixelFormatASTC_12x10_LDR        API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 217,
    MTLPixelFormatASTC_12x12_LDR        API_AVAILABLE(ios(8.0)) API_UNAVAILABLE(macos, macCatalyst) = 218,
    
    
    // ASTC HDR (High Dynamic Range) Formats
    MTLPixelFormatASTC_4x4_HDR          API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 222,
    MTLPixelFormatASTC_5x4_HDR          API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 223,
    MTLPixelFormatASTC_5x5_HDR          API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 224,
    MTLPixelFormatASTC_6x5_HDR          API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 225,
    MTLPixelFormatASTC_6x6_HDR          API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 226,
    MTLPixelFormatASTC_8x5_HDR          API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 228,
    MTLPixelFormatASTC_8x6_HDR          API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 229,
    MTLPixelFormatASTC_8x8_HDR          API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 230,
    MTLPixelFormatASTC_10x5_HDR         API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 231,
    MTLPixelFormatASTC_10x6_HDR         API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 232,
    MTLPixelFormatASTC_10x8_HDR         API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 233,
    MTLPixelFormatASTC_10x10_HDR        API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 234,
    MTLPixelFormatASTC_12x10_HDR        API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 235,
    MTLPixelFormatASTC_12x12_HDR        API_AVAILABLE(ios(13.0)) API_UNAVAILABLE(macos, macCatalyst) = 236,
    /*!
     @constant MTLPixelFormatGBGR422
     @abstract A pixel format where the red and green channels are subsampled horizontally.  Two pixels are stored in 32 bits, with shared red and blue values, and unique green values.
     @discussion This format is equivalent to YUY2, YUYV, yuvs, or GL_RGB_422_APPLE/GL_UNSIGNED_SHORT_8_8_REV_APPLE.   The component order, from lowest addressed byte to highest, is Y0, Cb, Y1, Cr.  There is no implicit colorspace conversion from YUV to RGB, the shader will receive (Cr, Y, Cb, 1).  422 textures must have a width that is a multiple of 2, and can only be used for 2D non-mipmap textures.  When sampling, ClampToEdge is the only usable wrap mode.
     */
    MTLPixelFormatGBGR422 = 240,

    /*!
     @constant MTLPixelFormatBGRG422
     @abstract A pixel format where the red and green channels are subsampled horizontally.  Two pixels are stored in 32 bits, with shared red and blue values, and unique green values.
     @discussion This format is equivalent to UYVY, 2vuy, or GL_RGB_422_APPLE/GL_UNSIGNED_SHORT_8_8_APPLE. The component order, from lowest addressed byte to highest, is Cb, Y0, Cr, Y1.  There is no implicit colorspace conversion from YUV to RGB, the shader will receive (Cr, Y, Cb, 1).  422 textures must have a width that is a multiple of 2, and can only be used for 2D non-mipmap textures.  When sampling, ClampToEdge is the only usable wrap mode.
     */
    MTLPixelFormatBGRG422 = 241,

    /* Depth */

    MTLPixelFormatDepth16Unorm          API_AVAILABLE(macos(10.12), ios(13.0)) = 250,
    MTLPixelFormatDepth32Float  = 252,

    /* Stencil */

    MTLPixelFormatStencil8        = 253,

    /* Depth Stencil */
    
    MTLPixelFormatDepth24Unorm_Stencil8  API_AVAILABLE(macos(10.11), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 255,
    MTLPixelFormatDepth32Float_Stencil8  API_AVAILABLE(macos(10.11), ios(9.0)) = 260,

    MTLPixelFormatX32_Stencil8  API_AVAILABLE(macos(10.12), ios(10.0)) = 261,
    MTLPixelFormatX24_Stencil8  API_AVAILABLE(macos(10.12), macCatalyst(13.0)) API_UNAVAILABLE(ios) = 262,

} API_AVAILABLE(macos(10.11), ios(8.0));

NS_ASSUME_NONNULL_END

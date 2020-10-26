//
//  VNGenerateOpticalFlowRequest.h
//  Vision
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <Vision/VNTargetedImageRequest.h>


NS_ASSUME_NONNULL_BEGIN


/*!
 @brief  The level options to favor speed or accuracy.
 */
typedef NS_ENUM(NSUInteger, VNOpticalFlowGenerateLevel)
{
    VNOpticalFlowGenerateLevelLow = 0,
    VNOpticalFlowGenerateLevelMedium,
    VNOpticalFlowGenerateLevelHigh,
    VNOpticalFlowGenerateLevelVeryHigh,
};


/*!
 @brief VNGenerateOpticalFlowRequest will determine directional change vectors for each pixel in the targeted image to transform it into the image processed
        by the request handler, reporting this result with a single VNPixelBufferObservation.

 @discussion	Because this request works at the pixel level, both images must have the same dimensions in order for the request to be successfully performed.
				Setting a region of interest will isolate where the change determination is performed; however, the resultant observation will still be reported
				with a full resolution VNPixelBufferObservation.
                Optical flow requests are very resource intensive, so it is recommended that only one request at a time be created and that the handler
                where the request was issued be released immediately after generating optical flows.
*/
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest

/*!
 @brief The level used to compute the optical flow. Default is VNOpticalFlowGenerateLevelMedium.
 */
@property(readwrite, nonatomic) VNOpticalFlowGenerateLevel generateLevel;

/*!
 @brief Pixel format type of the output buffer. Valid values are kCVPixelFormatType_TwoComponent32Float and kCVPixelFormatType_TwoComponent16Half.
        Default is kCVPixelFormatType_TwoComponent32Float.
 */
@property(readwrite, nonatomic) OSType outputPixelFormat;

@end

API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
static const NSUInteger VNGenerateOpticalFlowRequestRevision1 = 1;


NS_ASSUME_NONNULL_END

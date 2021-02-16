//
//  VNVideoProcessor.h
//  Vision
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Vision/VNDefines.h>
#import <Vision/VNRequest.h>
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 @brief Options keys passed into the VNVideoProcessor with a request to determine how the request is performed such as every n-frames or other time intervals.
*/
typedef NSString * VNVideoProcessingOption NS_STRING_ENUM API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

/*!
 @const      VNVideoProcessingOptionFrameCadence
 @abstract   An NSNumber identifying that a request should be performed at that specified cadence (every n-th frame).
 */

VN_EXPORT VNVideoProcessingOption const VNVideoProcessingOptionFrameCadence API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

/*!
@const      VNVideoProcessingOptionTimeInterval
@abstract   An NSNumber identifying that a request should be performed every n-seconds or fractions thereof. The exact timing can be different based on the timebase of the asset.
*/

VN_EXPORT VNVideoProcessingOption const VNVideoProcessingOptionTimeInterval API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));


API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNVideoProcessor : NSObject

- (instancetype)init NS_UNAVAILABLE;

/*!
@brief initWithURL:options creates a VNVideoProcessor to be used for performing requests against a video asset specified by it's URL

@param assetURL A URL pointing at a video asset on which the requests will be performed. The video format has to be supported by AVFoundation.
*/
- (instancetype)initWithURL:(NSURL*)assetURL;

/*!
@brief Add a VNRequest with the specified configuration to be performed on the video
 
@param request The VNRequest to be added to the processing queue. If added from within a completionHandler, it will be processed on the same frame that is currently processed.
@param configuration Dictionary containing request configuration
@param error Returns an error that happened during scheduling of the requests. Check individual requests results and errors for their respective success and failures. This parameter is optional.
@return Returns true if all requests were scheduled and performed. Check individual requests results and errors for their respective success and failures.
@note   The VNRequest must have completion handler set otherwise no results can be returned.
 */
- (BOOL)addRequest:(VNRequest*)request withProcessingOptions:(NSDictionary<VNVideoProcessingOption, id> *)configuration error:(NSError **)error;


/*!
@brief Remove a VNRequest from the video processor, which means it won't be performed anymore.
 
@param request The VNRequest to be removed.
@param error Returns an error that happened during processing of the request, such as if the request was not found in the processing queue. This parameter is optional.
@return Returns true if the request was found and removed from the processing pipeline.
*/
- (BOOL)removeRequest:(VNRequest*)request error:(NSError **)error;


/*!
@brief Processes the video over the specified timerange. This call is synchronous and only returns after the video is processed through its duration or an error prevented the processing. Therefore this call is best performed on a separate dispatch queue.
 
@param timeRange  Start and duration of the timerange within video to process. If the duration is longer than the video such as CMTimeInfinite the processing stops at the end of the video.
@param error Returns an error that happened during the starting of the processing queue (for instance if the time range is not valid for the video asset). This parameter is optional.
@return Returns true if the processing was successfully started.
@note   The intersection of the CMTimeRangeMake(start, duration) and CMTimeRangeMake(kCMTimeZero, asset.duration)
     will determine the timerange of the video to process
 */
- (BOOL)analyzeWithTimeRange:(CMTimeRange)timeRange error:(NSError **)error;


/*!
@brief Cancel the processing of the video. This can return before the last request has completed.
 */
- (void)cancel;

@end

NS_ASSUME_NONNULL_END

//
//  VNStatefulRequest.h
//  Vision
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <Vision/VNRequest.h>
#import <Vision/VNRequestHandler.h>



NS_ASSUME_NONNULL_BEGIN

/*!
    @brief A request that builds evidence over time. This means that the request has to be reused from frame to frame. The request requires the use of CMSampleBuffers with timestamps as input. Otherwise a VNErrorTimeStampNotFound error will be returned. VNStatefulRequest is used as a base class to other requests no objects of the type of this request should be created directly.
*/
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNStatefulRequest : VNImageBasedRequest

- (instancetype) init  NS_UNAVAILABLE;
- (instancetype) initWithCompletionHandler:(nullable VNRequestCompletionHandler)completionHandler NS_UNAVAILABLE;

/*!
    @brief Create a new video based request 
    
    @param completionHandler    The block to be invoked after the request has completed its processing. The completion handler gets executed on the same dispatch queue as the request being executed.
    @param frameAnalysisSpacing      The reciprocal of maximum rate at which buffers will be processed. The request will not process buffers that fall within the frameAnalysisSpacing after it has performed the analysis. The analysis is not done by wall time but by analysis of of the time stamps of the samplebuffers being processed. This property is for instance useful to throttle the processing on.
*/

- (instancetype) initWithFrameAnalysisSpacing:(CMTime)frameAnalysisSpacing completionHandler:(nullable VNRequestCompletionHandler)completionHandler;

/*!
@brief The minimum number of frames that the request has to process on before reporting back any observation. This information is provided by the request once initialized with its required paramters.
@discussion Video based request often need a minimum number of frames before they can report back any observation. An example would be that a movement detection requires at least 5 frames to be detected. The minimumLatencyFrameCount for that request would report 5 and only after 5 frames have been processed an observation would be returned in the results. This latency is indicative of how responsive a request is in respect to the incoming data.
*/

@property (readonly) NSUInteger minimumLatencyFrameCount;

/*!
 @brief The reciprocal of maximum rate at which buffers will be processed.
 @discussion The request will not process buffers that fall within the frameAnalysisSpacing after it has performed the analysis. The analysis is not done by wall time but by analysis of of the time stamps of the samplebuffers being processed. This property is for instance useful to throttle the processing on.
 */
@property (readonly) CMTime     requestFrameAnalysisSpacing;

@end


NS_ASSUME_NONNULL_END

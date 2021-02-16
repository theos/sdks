//
//  VNDetectTrajectoriesRequest.h
//  Vision
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <Vision/VNStatefulRequest.h>



NS_ASSUME_NONNULL_BEGIN

/*!
    @brief A request that detects trajectories of shapes (even small ones) that follow a parabolic path in a sequence of images.
    
    @discussion This request detects objects moving and (once their path follows the constraint of a parabola), a VNTrajectoryObservation will be returned with the detected points and the equation describing the parabola. 
*/
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNDetectTrajectoriesRequest : VNStatefulRequest


- (instancetype) initWithFrameAnalysisSpacing:(CMTime)frameAnalysisSpacing completionHandler:(nullable VNRequestCompletionHandler)completionHandler NS_UNAVAILABLE;

/*!
     @brief Create a new video based request
     
     @param frameAnalysisSpacing      The reciprocal of maximum rate at which buffers will be processed. The request will not process buffers that fall within the frameAnalysisSpacing after it has performed the analysis. The analysis is not done by wall time but by analysis of the time stamps of the samplebuffers being processed. This property is for instance useful to throttle the processing on slower devices. If this is set to kCMTimeZero then no frames get skipped in the analysis.
     @param trajectoryLength		The number of points required to analyze a parabola that indicates a trajectory. Must be at least 5.
     @param maximumImageDimension	The limit on the maximum dimension of the image to be used for trajectory detection. This can be used to reduce the computational cost by doing the analysis on a lower-resolution image, if the object that forms the trajectory is large. The default value is 800. A value bigger than 800 will be ignored.
     @param completionHandler		The block to be invoked after the request has completed its processing. The completion handler gets executed on the same dispatch queue as the request being executed.
 
 */

- (instancetype) initWithFrameAnalysisSpacing:(CMTime)frameAnalysisSpacing
                              trajectoryLength:(NSUInteger)trajectoryLength
                             completionHandler:(nullable VNRequestCompletionHandler)completionHandler;


/*!
 @brief Specifies the minimum size measured as the radius of the bounding circle of the object to be tracked. This can be used to filter out noise and small objects. The default is zero, which means no filtering is applied. Changing the minimumSize from frame to frame can produce eratic trajectories as objects will either disappear or being added to the tracking base on this filtering. The size is specified in normalized coordinates.
 */
@property (readwrite, nonatomic, assign) float minimumObjectSize;

/*!
 @brief Specifies the maximum size measured as the radius of the bounding circle of the object to be tracked. This can be used to filter out unwanted trajectories from larger objects moving through the scene. The default is one, which means no filtering is applied. Changing the maximum from frame to frame can produce eratic trajectories as objects will either disappear or being added to the tracking base on this filtering. The size is specified in normalized coordinates.
 */
@property (readwrite, nonatomic, assign) float maximumObjectSize;

@end


NS_ASSUME_NONNULL_END


API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
static const NSUInteger VNDetectTrajectoriesRequestRevision1 = 1;


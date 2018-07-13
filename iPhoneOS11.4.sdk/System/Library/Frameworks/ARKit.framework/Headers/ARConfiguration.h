//
//  ARConfiguration.h
//  ARKit
//
//  Copyright © 2016-2017 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@class ARReferenceImage;
@class ARVideoFormat;

/**
 Enum constants for indicating the world alignment.
 */
API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos)
typedef NS_ENUM(NSInteger, ARWorldAlignment) {
    /** Aligns the world with gravity that is defined by vector (0, -1, 0). */
    ARWorldAlignmentGravity,
    
    /** Aligns the world with gravity that is defined by the vector (0, -1, 0)
     and heading (w.r.t. True North) that is given by the vector (0, 0, -1). */
    ARWorldAlignmentGravityAndHeading,
    
    /** Aligns the world with the camera’s orientation. */
    ARWorldAlignmentCamera
} NS_SWIFT_NAME(ARConfiguration.WorldAlignment);


/**
 Option set indicating the type of planes to detect.
 */
API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos)
typedef NS_OPTIONS(NSUInteger, ARPlaneDetection) {
    /** No plane detection is run. */
    ARPlaneDetectionNone                              = 0,
    
    /** Plane detection determines horizontal planes in the scene. */
    ARPlaneDetectionHorizontal                        = (1 << 0),
    
    /** Plane detection determines vertical planes in the scene. */
    ARPlaneDetectionVertical API_AVAILABLE(ios(11.3)) = (1 << 1)
} NS_SWIFT_NAME(ARWorldTrackingConfiguration.PlaneDetection);


/**
 An object to describe and configure the Augmented Reality techniques to be used in an ARSession.
 */
API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface ARConfiguration : NSObject <NSCopying>

/**
 Determines whether this device supports the ARConfiguration.
 */
@property (class, nonatomic, readonly) BOOL isSupported;

/**
 A list of supported video formats for this configuration and device.
 @discussion The first element in the list is the default format for session output.
 */
@property (class, nonatomic, strong, readonly) NSArray<ARVideoFormat *> *supportedVideoFormats API_AVAILABLE(ios(11.3));

/**
 Video format of the session output.
 */
@property (nonatomic, strong, readwrite) ARVideoFormat *videoFormat API_AVAILABLE(ios(11.3));

/**
 Determines how the coordinate system should be aligned with the world.
 @discussion The default is ARWorldAlignmentGravity.
 */
@property (nonatomic, readwrite) ARWorldAlignment worldAlignment;

/**
 Enable or disable light estimation.
 @discussion Enabled by default.
 */
@property (nonatomic, readwrite, getter=isLightEstimationEnabled) BOOL lightEstimationEnabled;

/**
 Determines whether to capture and provide audio data.
 @discussion Disabled by default.
 */
@property (nonatomic, readwrite) BOOL providesAudioData;

/** Unavailable */
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end


/**
 A configuration for running world tracking.
 
 @discussion World tracking provides 6 degrees of freedom tracking of the device.
 By finding feature points in the scene, world tracking enables performing hit-tests against the frame.
 Tracking can no longer be resumed once the session is paused.
 */
API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface ARWorldTrackingConfiguration : ARConfiguration

/**
 Enable or disable continuous auto focus.
 @discussion Enabled by default.
 */
@property (nonatomic, readwrite, getter=isAutoFocusEnabled) BOOL autoFocusEnabled API_AVAILABLE(ios(11.3));

/**
 Type of planes to detect in the scene.
 @discussion If set, new planes will continue to be detected and updated over time. Detected planes will be added to the session as
 ARPlaneAnchor objects. In the event that two planes are merged, the newer plane will be removed. Defaults to ARPlaneDetectionNone.
 */
@property (nonatomic, readwrite) ARPlaneDetection planeDetection;

/**
 Images to detect in the scene.
 @discussion If set the session will attempt to detect the specified images. When an image is detected an ARImageAnchor will be added to the session.
 */
@property (nonatomic, copy, nullable, readwrite) NSSet<ARReferenceImage *> *detectionImages API_AVAILABLE(ios(11.3));

- (instancetype)init;
+ (instancetype)new NS_SWIFT_UNAVAILABLE("Use init() instead");

@end


/**
 A configuration for running orientation tracking.
 
 @discussion Orientation tracking provides 3 degrees of freedom tracking of the device.
 */
API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface AROrientationTrackingConfiguration : ARConfiguration

/**
 Enable or disable continuous auto focus.
 @discussion Enabled by default.
 */
@property (nonatomic, readwrite, getter=isAutoFocusEnabled) BOOL autoFocusEnabled API_AVAILABLE(ios(11.3));

- (instancetype)init;
+ (instancetype)new NS_SWIFT_UNAVAILABLE("Use init() instead");

@end


/**
 A configuration for running face tracking.
 
 @discussion Face tracking uses the front facing camera to track the face in 3D providing details on the topology and expression of the face.
 A detected face will be added to the session as an ARFaceAnchor object which contains information about head pose, mesh, eye pose, and blend shape
 coefficients. If light estimation is enabled the detected face will be treated as a light probe and used to estimate the direction of incoming light.
 */
API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface ARFaceTrackingConfiguration : ARConfiguration

- (instancetype)init;
+ (instancetype)new NS_SWIFT_UNAVAILABLE("Use init() instead");

@end

NS_ASSUME_NONNULL_END

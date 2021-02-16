//
//  VNDetectHumanBodyPoseRequest.h
//  Vision
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <Vision/VNRequest.h>
#import <Vision/VNDetectedPoint.h>


NS_ASSUME_NONNULL_BEGIN


VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyNose API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyLeftEye API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyRightEye API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyLeftEar API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyRightEar API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyLeftShoulder API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyRightShoulder API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyNeck API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyLeftElbow API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyRightElbow API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyLeftWrist API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyRightWrist API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyLeftHip API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyRightHip API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyRoot API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyLeftKnee API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyRightKnee API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyLeftAnkle API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNBodyLandmarkKeyRightAnkle API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointGroupKey const VNBodyLandmarkRegionKeyFace API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0)); // This will be nose, eyes, and ears
VN_EXPORT VNRecognizedPointGroupKey const VNBodyLandmarkRegionKeyTorso API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0)); // This will be shoulders, neck and hips
VN_EXPORT VNRecognizedPointGroupKey const VNBodyLandmarkRegionKeyLeftArm API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0)); // This will be shoulders, elbows, and wrists
VN_EXPORT VNRecognizedPointGroupKey const VNBodyLandmarkRegionKeyRightArm API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0)); // Same as above
VN_EXPORT VNRecognizedPointGroupKey const VNBodyLandmarkRegionKeyLeftLeg API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0)); // This will be ankles, knees, and hips
VN_EXPORT VNRecognizedPointGroupKey const VNBodyLandmarkRegionKeyRightLeg API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0)); // Same as above


/*!
 @brief Classifies body pose and returns results in -bodyLandmarks property of VNRecognizedPointsObservation.
 The -bodyLandmarks property is a collection of key-value pairs that maps a hand region name to it's normalized coordinate location in an image and gives it a confidence score in a range [0, 1].
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNDetectHumanBodyPoseRequest : VNImageBasedRequest

+ (nullable NSArray<VNRecognizedPointKey>*) supportedRecognizedPointKeysForRevision:(NSUInteger)revision error:(NSError **)error;

+ (nullable NSArray<VNRecognizedPointGroupKey>*) supportedRecognizedPointGroupKeysForRevision:(NSUInteger)revision error:(NSError **)error;


+ (nullable NSArray<VNRecognizedPointKey>*) supportedIdentifiedPointKeysForRevision:(NSUInteger)revision error:(NSError **)error
	API_DEPRECATED_WITH_REPLACEMENT("Use +supportedRecognizedPointKeysForRevision:error:] instead", macos(10.16, 10.16), ios(14.0, 14.0), tvos(14.0, 14.0));

+ (nullable NSArray<VNRecognizedPointGroupKey>*) supportedIdentifiedPointGroupKeysForRevision:(NSUInteger)revision error:(NSError **)error
	API_DEPRECATED_WITH_REPLACEMENT("Use +supportedRecognizedPointGroupKeysForRevision:error:] instead", macos(10.16, 10.16), ios(14.0, 14.0), tvos(14.0, 14.0));

@end


API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
static const NSUInteger VNDetectHumanBodyPoseRequestRevision1 = 1;


NS_ASSUME_NONNULL_END

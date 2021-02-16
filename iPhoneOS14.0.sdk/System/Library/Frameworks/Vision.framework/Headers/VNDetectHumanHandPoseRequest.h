//
//  VNDetectHumanHandPoseRequest.h
//  Vision
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//


#import <Vision/VNRequest.h>
#import <Vision/VNDetectedPoint.h>


NS_ASSUME_NONNULL_BEGIN


VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyWrist API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

/*!Finger Joints Anatomy Keys
 *  Finger Joints Anatomy Keys follow definitions from: https://handcare.assh.org/Anatomy/Joints
*/
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyThumbCMC API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyThumbMP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyThumbIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyThumbTIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyIndexMCP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyIndexPIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyIndexDIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyIndexTIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyMiddleMCP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyMiddlePIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyMiddleDIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyMiddleTIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyRingMCP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyRingPIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyRingDIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyRingTIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyLittleMCP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyLittlePIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyLittleDIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointKey const VNHandLandmarkKeyLittleTIP API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));

VN_EXPORT VNRecognizedPointGroupKey const VNHandLandmarkRegionKeyThumb API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointGroupKey const VNHandLandmarkRegionKeyMiddleFinger API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointGroupKey const VNHandLandmarkRegionKeyIndexFinger API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointGroupKey const VNHandLandmarkRegionKeyRingFinger API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));
VN_EXPORT VNRecognizedPointGroupKey const VNHandLandmarkRegionKeyLittleFinger API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0));


/*!
 @brief Classifies hand pose and returns results in -handLandmarks property of VNRecognizedPointsObservation.
 The -handLandmarks property is a collection of key-value pairs that maps a hand region name to it's normalized coordinate location in an image and gives it a confidence score in a range [0, 1].
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNDetectHumanHandPoseRequest : VNImageBasedRequest

+ (nullable NSArray<VNRecognizedPointKey>*) supportedRecognizedPointKeysForRevision:(NSUInteger)revision error:(NSError **)error;

+ (nullable NSArray<VNRecognizedPointGroupKey>*) supportedRecognizedPointGroupKeysForRevision:(NSUInteger)revision error:(NSError **)error;


+ (nullable NSArray<VNRecognizedPointKey>*) supportedIdentifiedPointKeysForRevision:(NSUInteger)revision error:(NSError **)error
	API_DEPRECATED_WITH_REPLACEMENT("Use +supportedRecognizedPointKeysForRevision:error:] instead", macos(10.16, 10.16), ios(14.0, 14.0), tvos(14.0, 14.0));

+ (nullable NSArray<VNRecognizedPointGroupKey>*) supportedIdentifiedPointGroupKeysForRevision:(NSUInteger)revision error:(NSError **)error
	API_DEPRECATED_WITH_REPLACEMENT("Use +supportedRecognizedPointGroupKeysForRevision:error:] instead", macos(10.16, 10.16), ios(14.0, 14.0), tvos(14.0, 14.0));

/*!
	@brief Defines an upper bounds to the maximum number of hands that will be processed for key points in an image.

	@discussion	The complexity in key points determination is scalable by the number of hands to be processed.  All hands detected in an image will be ordered by relative size, with only the N largest ones having key points determined.  The default value for this property is 2.
*/
@property (readwrite, assign) NSUInteger maximumHandCount;

@end


API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
static const NSUInteger VNDetectHumanHandPoseRequestRevision1 = 1;


NS_ASSUME_NONNULL_END

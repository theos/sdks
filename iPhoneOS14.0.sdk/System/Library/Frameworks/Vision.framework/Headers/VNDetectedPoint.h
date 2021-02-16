//
//  VNDetectedPoint.h
//  Vision
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <Vision/VNGeometry.h>
#import <Vision/VNTypes.h>


NS_ASSUME_NONNULL_BEGIN


typedef NSString * VNRecognizedPointKey NS_STRING_ENUM;
typedef NSString * VNRecognizedPointGroupKey NS_STRING_ENUM;


/*!
 @class VNDetectedPoint
 @brief VNPoint is a tuple of a single normalized point in an image and a confidence. It should be noted that VNPoint is not intended as an overall replacement of CGPoint or NSPoint or vec2 but is used by observations that detect points of interest.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNDetectedPoint : VNPoint

- (instancetype) init NS_UNAVAILABLE;

/*!
@brief Confidence in likelyhood of VNPoint being accurate, in range of [0.0, 1.0]
*/
@property (readonly, nonatomic) VNConfidence confidence;

@end


/*!
 @class VNRecognizedPoint
 @brief An extension of VNPoint that gives the point a label. It should be noted that VNPoint is not intended as an overall replacement of CGPoint or NSPoint or vec2 but is used by observations that detect labeled points of interest.
        The observation that takes advantage of this class is VNRecognizedPointsObservation.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNRecognizedPoint : VNDetectedPoint

/*!
@brief A  label for a VNPoint
*/
@property (readonly, nonatomic, copy) NSString* identifier;

@end


NS_ASSUME_NONNULL_END

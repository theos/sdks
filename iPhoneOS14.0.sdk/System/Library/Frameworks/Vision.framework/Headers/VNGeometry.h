//
//  VNGeometry.h
//  Vision
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <simd/simd.h>

#import <Vision/VNDefines.h>
#import <Vision/VNRequestRevisionProviding.h>


NS_ASSUME_NONNULL_BEGIN


@class VNVector;

/*!
 @class VNPoint
 @brief VNPoint represents a single, two-dimensional point in an image. Once cretaed, VNPoint objects are immutable.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNPoint : NSObject<NSCopying, NSSecureCoding>

/*!
@brief Returns a VNPoint object that represents the Origin  [0.0; 0.0]
*/
@property (class, strong, readonly) VNPoint *zeroPoint;

/*!
@brief Returns a VNPoint object that is shifted by X and Y offsets of the vector
*/
+ (VNPoint*)pointByApplyingVector:(VNVector*)vector toPoint:(VNPoint*)point;


/*!
@brief Returns calculated distance between two VNPoint objects
*/
+ (double)distanceBetweenPoint:(VNPoint*)point1 point:(VNPoint*)point2;


/*!
@brief Initializes a VNPoint object from X and Y coordinates
*/
- (instancetype)initWithX:(double)x y:(double)y NS_DESIGNATED_INITIALIZER;

/*!
@brief Initializes a VNPoint object from CGPoint
*/
- (instancetype)initWithLocation:(CGPoint)location;


/*!
@brief Returns X and Y coordinate of the point, as CGPoint type, with respect to the Origin of the coordinate system the point is defined in
*/
@property (readonly) CGPoint location;

/*!
@brief Returns X coordinate of the point with respect to the Origin of the coordinate system the point is defined in
*/
@property (readonly) double x;

/*!
@brief Returns Y coordinate of the point with respect to the Origin of the coordinate system the point is defined in
*/
@property (readonly) double y;

@end





/*!
@class VNVector
@brief VNVector is a two-dimensional vector represented its X and Y axis projections. Once cretaed, VNVector objects are immutable.
*/
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNVector : NSObject<NSCopying, NSSecureCoding>

/*!
@brief Returns a VNVector object with zero length. Theta for zeroVector is not defined (NaN)
*/
@property (class, strong, readonly) VNVector *zeroVector;

/*!
@brief Returns a vector that is normalized by preserving direction, such as |v|, or vector length = 1.0
*/
+ (VNVector*)unitVectorForVector:(VNVector*)vector;

/*!
@brief Returns a vector that whose X and Y projections multiplied by a scalar value
*/
+ (VNVector*)vectorByMultiplyingVector:(VNVector*)vector byScalar:(double)scalar;

/*!
@brief Adds two vectors v1 and v2 and returns a resulting vector v, such as v = v1 + v2
*/
+ (VNVector *)vectorByAddingVector:(VNVector *)v1 toVector:(VNVector *)v2;

/*!
@brief Substructs vector v1 from v2 and returns a resulting vector v, such as v = v2 - v1
*/
+ (VNVector *)vectorBySubtractingVector:(VNVector *)v1 fromVector:(VNVector *)v2;

/*!
@brief Caclulates a dot product (aka 'scalar product' or 'inner product') of two vectors v1 and v2 and returns dot product value
*/
+ (double)dotProductOfVector:(VNVector *)v1 vector:(VNVector *)v2;


/*!
@brief Initializes a vector in Cartesian Coordinate space, using its X and Y axis projections
*/
- (instancetype)initWithXComponent:(double)x yComponent:(double)y NS_DESIGNATED_INITIALIZER;

/*!
@brief Initializes a vector in polar coordinate space, using R and Theta (radians), where R is the length of the vector and
       Theta is the ange that the vector forms with the positive direction of X axis
*/
- (instancetype)initWithR:(double)r theta:(double)theta;

/*!
@brief Initializes a vector in Cartesian Coordinate space, using two VNPoints - the head and the tail of the vector
*/
- (instancetype)initWithVectorHead:(VNPoint*)head tail:(VNPoint*)tail;


/*!
@brief Signed projection on X-axis, or X component of the vector. Sign determines direction the vector is facing in X direction
*/
@property (readonly) double x;
/*!
@brief Signed projection on Y-axis, or Y component of the vector. Sign determines direction the vector is facing in Y direction
*/
@property (readonly) double y;

/*!
@brief Radius, or absolute value, or length of the vector
*/
@property (readonly) double r;

/*!
@brief Angle between vector direction and positive direction of X axis
*/
@property (readonly) double theta;

/*!
@brief Returns a length, or absolute value, of the vector
*/
@property (readonly) double length;

/*!
@brief Returns a length ^ 2 of a vector
*/
@property (readonly) double squaredLength;

@end





/*!
@class VNCircle
@brief VNCircle is two-dimensional circle represented by the center point 'center' and its radius 'radius'. Once cretaed, VNCircle objects are immutable.
*/
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNCircle : NSObject<NSCopying, NSSecureCoding>

/*!
@brief Returns a VNCircle object with center at the Origin [0.0; 0.0] and zero radius
*/
@property (class, strong, readonly) VNCircle *zeroCircle;


/*!
@brief Initializes VNCircle object with given circle center and circle radius
*/
- (instancetype)initWithCenter:(VNPoint*)center radius:(double)radius NS_DESIGNATED_INITIALIZER;

/*!
@brief Initializes VNCircle object with given circle center and circle diameter
*/
- (instancetype)initWithCenter:(VNPoint*)center diameter:(double)diameter;


/*!
@brief Returns YES if the point is inside the circle, including the boundary
*/
- (BOOL)containsPoint:(VNPoint*)point;

/*!
@brief Returns YES if the point is within the ring bound by two circles [radius - delta; radius + delta]
*/
- (BOOL)containsPoint:(VNPoint*)point inCircumferentialRingOfWidth:(double)ringWidth;


/*!
@brief Returns circle center
*/
@property (strong, readonly) VNPoint *center;

/*!
@brief Returns circle radius
*/
@property (readonly) double radius;

/*!
@brief Returns circle diameter
*/
@property (readonly) double diameter;


@end


/*!
 @brief The VNContour class is used for iterating over a the the contours returned in VNContoursObservation.
 @discussion This class is non-serializable. Serialization is done on the observation. The indexPath can be used to retrieve this specific contour from the observation after deserialization.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0))
@interface VNContour : NSObject<NSCopying, VNRequestRevisionProviding>

- (instancetype) init NS_UNAVAILABLE;

/*!
 @brief The NSIndexPath of this contour.
 */
@property (readonly) NSIndexPath * indexPath;

/*!
 @brief The total number of child contours detected.
 */
@property (readonly) NSUInteger childContourCount;

/*!
 @brief An array of the child contours (i.e. contours that are enclosed by this  contour).
 */
@property (readonly) NSArray<VNContour *> * childContours;

/*!
 @brief Returns a VNContour object that is a child of this VNContour at the specified index.
 @param childContourIndex The index into the childContours array.
 @param error The error returned if the index is out of range.
 @return The VNContour object at the spefiied index path.
 */
- (nullable VNContour *) childContourAtIndex:(NSUInteger)childContourIndex error:(NSError **)error;

/*!
 @brief The number of points for the contour.
 */
@property (readonly) NSUInteger pointCount;

/*!
 @brief The array of  points in normalized coordinates for the contour.
 @discussion Provides the address of a buffer containing the array of CGPoints.  This buffer is owned by the target object and is guaranteed to exist as long as this VNContour instance exists.
*/
@property (readonly) simd_float2 const * normalizedPoints NS_RETURNS_INNER_POINTER;

/*!
 @brief The contour represented as a CGPath in normalized coordinates.
 @details The path is owned by this object and therefore will be alive as long as the the observation is alive.
 */
@property (readonly) CGPathRef normalizedPath CF_RETURNS_NOT_RETAINED;

/*!
 @brief The aspect ratio of the contour from the original image aspect ration expressed as width/height
 */
@property (readonly) float aspectRatio;


/*!
 @brief Simplifies the contour to a polygon using a Ramer Douglas Peucker Algorithm
 @discussion See https://en.wikipedia.org/wiki/Ramer–Douglas–Peucker_algorithm
 @param epsilon Points that have a perpendicular distance to the line segment they are on that greather than epsilon are kept, others are eliminated.
 @param error The error returned if a simplified contour cannot be created.
 @return The VNContour object with a simplified polygon consisting of a subset of the points that defined the original VNContour.
 */
- (nullable VNContour *) polygonApproximationWithEpsilon:(float)epsilon 
												   error:(NSError **)error;

@end


NS_ASSUME_NONNULL_END

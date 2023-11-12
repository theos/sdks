#ifndef SPPose3D_h
#define SPPose3D_h

#include <Spatial/Structures.h>
#include <Spatial/SPRotation3D.h>
#include <Spatial/SPPoint3D.h>
#include <Spatial/SPAffineTransform3D.h>

// MARK: - Public API

// MARK: - Identity pose

/*!
 @abstract The identity pose.
 */
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0))
SPATIAL_REFINED_FOR_SWIFT
static const SPPose3D SPPose3DIdentity = {
    .position = (SPPoint3D){ 0, 0, 0 },
    .rotation = (SPRotation3D) {
        .quaternion = (simd_quatd){ .vector = {0, 0, 0, 1}
        }
    }
};

// MARK: - Creating a pose
/*!
 @abstract Returns a pose with the specified position and rotation.
 
 @param position A point structure that specifies the position of the pose.
 @param rotation A rotation structure that specifies the rotation of the pose.
 @returns A new pose structure.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMake(SPPoint3D position,
                      SPRotation3D rotation)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMake(SPPoint3D position,
                      SPRotation3D rotation) {
    
    return (SPPose3D) {
        .position = position,
        .rotation = rotation
    };
}

// MARK: - Creating a pose from simd vectors
/*!
 @abstract Returns a pose with the specified position and rotation.
 
 @param position A point structure that specifies the position of the pose.
 @param rotation A rotation structure that specifies the rotation of the pose.
 @returns A new pose structure.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeWithVector(simd_double3 position,
                                simd_quatd rotation)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeWithVector(simd_double3 position,
                                simd_quatd rotation) {
    
    return (SPPose3D) {
        .position.vector = position,
        .rotation.quaternion = rotation
    };
}

// MARK: - Returning a 4 x 4 matrix from a pose

/*!
 @abstract Returns a 4 x 4 matrix that represents the pose's translation and rotation.
 
 @param pose The source pose.
 @returns A new pose structure.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
simd_double4x4 SPPose3DGet4x4Matrix(SPPose3D pose)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
simd_double4x4 SPPose3DGet4x4Matrix(SPPose3D pose) {
    
    simd_double4x4 m = simd_matrix4x4(pose.rotation.quaternion);
    m.columns[3].xyz = pose.position.vector;
    
    return m;
}

// MARK: - Comparing poses

/// Returns @p true if both rays are equal.
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
bool SPPose3DEqualToPose(SPPose3D pose1, SPPose3D pose2)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
bool SPPose3DEqualToPose(SPPose3D pose1, SPPose3D pose2) {
    
    return (
            SPPoint3DEqualToPoint(pose1.position, pose2.position) &&
            SPRotation3DEqualToRotation(pose1.rotation, pose2.rotation)
            );
}

/*!
 @abstract Returns a Boolean value that indicates whether the two poses's matrices are equal within the Spatial default absolute tolerance.
 
 @param p1 The first pose.
 @param p2 The first pose.
 @returns A Boolean value that indicates whether the two pose's matrices are equal within the Spatial default absolute tolerance.
 @note The Spatial default tolerance is @p sqrt(__DBL_EPSILON__) .
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
bool SPPose3DAlmostEqualToPose(SPPose3D p1,
                               SPPose3D p2)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_OVERLOADABLE
SPATIAL_REFINED_FOR_SWIFT
bool SPPose3DAlmostEqualToPose(SPPose3D p1,
                               SPPose3D p2) {
    
    return simd_almost_equal_elements(SPPose3DGet4x4Matrix(p1),
                                      SPPose3DGet4x4Matrix(p2), SPDefaultTolerance);
}

/*!
 @abstract Returns a Boolean value that indicates whether the two poses's matrices are equal within the specfied default absolute tolerance.
 
 @param p1 The first pose.
 @param p2 The first pose.
 @returns A Boolean value that indicates whether the two pose's matrices are equal within the specified default absolute tolerance.
 @note The Spatial default tolerance is @p sqrt(__DBL_EPSILON__) .
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
bool SPPose3DAlmostEqualToPose(SPPose3D p1,
                               SPPose3D p2,
                               double tolerance)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_OVERLOADABLE
SPATIAL_REFINED_FOR_SWIFT
bool SPPose3DAlmostEqualToPose(SPPose3D p1,
                               SPPose3D p2,
                               double tolerance) {
    
    return simd_almost_equal_elements(SPPose3DGet4x4Matrix(p1),
                                      SPPose3DGet4x4Matrix(p2),
                                      tolerance);
}

// MARK: - Comparing against identity

/*!
 @abstract Returns a Boolean value that indicates whether the pose is the identity transform.
 
 @param pose The source pose.
 @returns A Boolean value that indicates whether the transform is the identity transform.
 @note This function checks for equality within the Spatial default tolerance.
*/
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
bool SPPose3DIsIdentity(SPPose3D pose)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
bool SPPose3DIsIdentity(SPPose3D pose) {
    return SPPose3DAlmostEqualToPose(pose, SPPose3DIdentity);
}
// MARK: - Creating a pose with lookat

/*!
 @abstract Returns a pose at the specified position with the rotation towards the target.
 
 @param position A point structure that specifies the position of the pose.
 @param target The point that the pose orients towards.
 @param up The up direction.
 @returns A new pose structure.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeLookAt(SPPoint3D position,
                           SPPoint3D target,
                           SPVector3D up)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeLookAt(SPPoint3D position,
                           SPPoint3D target,
                           SPVector3D up) {
    
    SPRotation3D r = SPRotation3DMakeLookAt(position, target, up);
    
    return (SPPose3D) {
        .position = position,
        .rotation = r
    };
}

/*!
 @abstract Returns a pose at the origin with the rotation towards the target.
 
 @param target The point that the pose orients towards.
 @param up The up direction.
 @returns A new pose structure.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeLookAt(SPPoint3D target,
                           SPVector3D up)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeLookAt(SPPoint3D target,
                           SPVector3D up) {
    
    SPPoint3D position = (SPPoint3D){ .x = 0, .y = 0, .z = 0 };
    
    return SPPose3DMakeLookAt(position, target, up);
}

/*!
 @abstract Returns a pose with the specified forward and up vectors.
 
 @param forward The forward direction.
 @param up The up direction.
 @returns A new pose stucture.
 @note This function creates a pose where @p +z is forward.
*/
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeLookAt(SPVector3D forward, SPVector3D up)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeLookAt(SPVector3D forward, SPVector3D up) {
 
    SPPoint3D position = (SPPoint3D){ .x = 0, .y = 0, .z = 0 };
    
    SPPoint3D target = (SPPoint3D) { .vector = forward.vector };
    
    return SPPose3DMakeLookAt(position, target, up);
}

// MARK: - Creating a pose from a 4x4 matrix

/*!
 @abstract Returns a new pose structure from the specified 4 x 4 matrix.
 
 @param matrix The source matrix.
 @returns A new pose structure.
 @note
 If the upper-left 3 x 3 submatrix is not a rotation matrix (that is, orthogonal with a determinant of @p +1 ), the function returns @p SPPose3DInvalid .
 If the bottom row of the matrix is not @p [0,0,0,1] , the functions  returns @p SPPose3DInvalid .
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeWith4x4Matrix(simd_double4x4 matrix)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeWith4x4Matrix(simd_double4x4 matrix) {

    if (!_sp_almost_equal(0, matrix.columns[0].w) ||
        !_sp_almost_equal(0, matrix.columns[1].w) ||
        !_sp_almost_equal(0, matrix.columns[2].w) ||
        !_sp_almost_equal(1, matrix.columns[3].w)) {
        return  SPPose3DInvalid;
    }
    
    simd_double3x3 m3x3 = (simd_double3x3) {
        matrix.columns[0].xyz,
        matrix.columns[1].xyz,
        matrix.columns[2].xyz,
    };
    
    if (!_sp_almost_equal(1, simd_determinant(m3x3)) &&
        !_sp_is_orthogonal(m3x3, matrix_identity_double3x3)) {
        return SPPose3DInvalid;
    }

    SPPoint3D p = SPPoint3DMakeWithVector(matrix.columns[3].xyz);
    SPRotation3D r = SPRotation3DMakeWithQuaternion(simd_quaternion(matrix));
    
    return (SPPose3D) {
        .position = p,
        .rotation = r
    };
}

// MARK: - Calculating the inverse of a pose

/*!
 @abstract Returns a new pose with the inverse matrix of the specified pose.
 
 @param pose The source pose.
 @returns A new pose structure.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DGetInverse(SPPose3D pose)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DGetInverse(SPPose3D pose) {
    
    simd_double4x4 m = SPPose3DGet4x4Matrix(pose);
    m = simd_inverse(m);
    
    return SPPose3DMakeWith4x4Matrix(m);
}

// MARK: - Returning the product of two poses

/*!
 @abstract Returns a new pose that's constructed by concatenating two existing  poses.
 
 @param lhs The first pose to multiply.
 @param rhs The second pose to multiply.
 @returns A new pose structure.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DConcatenation(SPPose3D lhs, SPPose3D rhs)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DConcatenation(SPPose3D lhs, SPPose3D rhs) {
    
    simd_double4x4 m = simd_mul(SPPose3DGet4x4Matrix(lhs),
                                SPPose3DGet4x4Matrix(rhs));
    
    return SPPose3DMakeWith4x4Matrix(m);
}

// MARK: - Rotation
/*!
 @abstract Returns a pose with a rotation that's rotated by the specified quaternion.

 @param pose The source pose.
 @param quaternion The quaternion that defines the rotation.
 @returns A pose with a rotation that's rotated by the specified quaternion.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DRotateByQuaternion(SPPose3D pose, simd_quatd quaternion)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DRotateByQuaternion(SPPose3D pose, simd_quatd quaternion) {
    
    simd_quatd q = simd_mul(quaternion, pose.rotation.quaternion);
    
    SPPose3D p = SPPose3DMake(pose.position,
                            (SPRotation3D) { .quaternion = q });
    
    return p;
}

/*!
 @abstract Returns a pose with a rotation that's rotated by the specified rotation.

 @param pose The source pose.
 @param rotation The rotation structure that defines the rotation.
 @returns A pose with a rotation that's rotated by the specified rotation structure.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DRotate(SPPose3D pose, SPRotation3D rotation)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DRotate(SPPose3D pose, SPRotation3D rotation) {
    
    return SPPose3DRotateByQuaternion(pose, rotation.quaternion);
}

// MARK: - Translation

/*!
 @abstract Returns a pose with a position that is offset from that of the source pose.
 
 @param pose The source pose.
 @param offset A vector that defines the offset.
 @returns A pose that's offset by the @p x, @p y, and @p z of the vector.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DTranslate(SPPose3D pose, SPVector3D offset)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DTranslate(SPPose3D pose, SPVector3D offset) {
    
    SPPose3D p = SPPose3DMake(SPPoint3DTranslate(pose.position, offset),
                              pose.rotation);
    
    return p;
}

SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DTranslate(SPPose3D pose, SPSize3D offset)
__API_DEPRECATED("Use `SPVector3D` variant.",
                 macos(13.0, 13.0),
                 ios(16.0, 16.0),
                 watchos(9.0, 9.0),
                 tvos(16.0, 16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DTranslate(SPPose3D pose, SPSize3D offset) {
    return SPPose3DTranslate(pose,
                             (SPVector3D){ .vector = offset.vector }
                             );
}

// MARK: - Creating a pose from a transform

/*!
 @abstract Returns a pose with with a position and rotation that are defined by an affine transform.
 
 @param transform The source transform. The function only considers the transform's rotation and
 translation components.
 @returns A pose with a position and rotation that are defined by an affine transform. If the transform doesn't
 define a coherent rotation, the function returns @p SPPose3DInvalid.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeWithAffineTransform(SPAffineTransform3D transform)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeWithAffineTransform(SPAffineTransform3D transform) {
    
    SPRotation3D rotation = SPAffineTransform3DGetRotation(transform);
    
    if (!SPRotation3DIsValid(rotation)) {
        return SPPose3DInvalid;
    }
    
    SPPoint3D position = SPPoint3DMakeWithVector(SPAffineTransform3DGetTranslation(transform));
    
    return SPPose3DMake(position, rotation);
}

/*!
 @abstract Returns a pose with with a position and rotation that are defined by a projective transform.
 
 @param transform The source transform. The function only considers the transform's rotation and
 translation components.
 @returns A pose with a position and rotation that are defined by a projective transform. If the transform doesn't
 define a coherent rotation, the function returns @p SPPose3DInvalid.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeWithProjectiveTransform(SPProjectiveTransform3D transform)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DMakeWithProjectiveTransform(SPProjectiveTransform3D transform) {
    
    SPRotation3D rotation = SPProjectiveTransform3DGetRotation(transform);
    
    if (!SPRotation3DIsValid(rotation)) {
        return SPPose3DInvalid;
    }
    
    SPPoint3D position = SPPoint3DMakeWithVector(SPProjectiveTransform3DGetTranslation(transform));
    
    return SPPose3DMake(position, rotation);
}

// MARK: - Flipping a pose

/*!
 @abstract Returns a pose that's flipped along the specified axis.
 
 @discussion
 If you pass a flip axis that's not @p x , @p y , or @p z , the function returns @p pose unmodified.
 
 @param pose The source pose.
 @param flipAxis The flip axis.
 @returns A new pose flipped along the specified axis.
 */
SPATIAL_INLINE
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DFlip(SPPose3D pose,
                      SPAxis flipAxis)
__API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

SPATIAL_REFINED_FOR_SWIFT
SPATIAL_OVERLOADABLE
SPPose3D SPPose3DFlip(SPPose3D pose,
                      SPAxis flipAxis) {

    if(flipAxis != SPAxisX && flipAxis != SPAxisY && flipAxis != SPAxisZ) {
        return pose;
    }
  
    SPAffineTransform3D t = SPAffineTransform3DMakeWithPose(pose);
    t = SPAffineTransform3DFlip(t, flipAxis);
    return SPPose3DMakeWithAffineTransform(t);
}

#endif /* SPPose3D_h */

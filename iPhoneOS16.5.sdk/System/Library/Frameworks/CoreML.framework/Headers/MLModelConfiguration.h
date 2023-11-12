//
//  MLModelConfiguration.h
//  CoreML_framework
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreML/MLExport.h>

NS_ASSUME_NONNULL_BEGIN

@class MLParameterKey;
@protocol MTLDevice;

typedef NS_ENUM(NSInteger, MLComputeUnits) {
    MLComputeUnitsCPUOnly = 0,
    MLComputeUnitsCPUAndGPU = 1,
    MLComputeUnitsAll = 2,
    MLComputeUnitsCPUAndNeuralEngine API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0)) = 3
} API_AVAILABLE(macos(10.14), ios(12.0), watchos(5.0), tvos(12.0));

/*!
 * An object to hold options for loading a model.
 */
API_AVAILABLE(macos(10.14), ios(12.0), watchos(5.0), tvos(12.0))
ML_EXPORT
@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding>

/// A human readable name of a MLModel instance for display purposes.
///
/// Use this property to set a name of a model instance so that runtime analysis tools (e.g. Instruments and os_log)
/// can display that name in the user interface.
///
/// CoreML framework doesn't parse nor filter the text. It is the client's responsibility to use appropriate text,
/// which may involve localization and privacy considerations.
///
/// When the property is nil, CoreML framework provides a default.
@property (readwrite, copy, nullable) NSString *modelDisplayName API_AVAILABLE(macos(13.0), ios(16.0), watchos(9.0), tvos(16.0));

@property (readwrite) MLComputeUnits computeUnits;

@end

/*!
 * Allows app to specify  GPU configuration options
 */
API_AVAILABLE(macos(10.15), ios(13.0), watchos(6.0), tvos(13.0))
ML_EXPORT
@interface MLModelConfiguration (MLGPUConfigurationOptions)

/// Set to YES to allow low precision accumulation on GPU when available. Defaults to NO
@property (readwrite) BOOL allowLowPrecisionAccumulationOnGPU ;

/// Set to specify a preferred Metal device. Defaults to nil which indicates automatic selection
@property (readwrite, nonatomic, nullable) id<MTLDevice> preferredMetalDevice;

@end

/*!
 * Allows app to set model or update parameters as a dictionary.
 */
API_AVAILABLE(macos(10.15), ios(13.0), watchos(6.0), tvos(13.0))
ML_EXPORT
@interface MLModelConfiguration (MLModelParameterAdditions)

// Optional dictionary with any requested changes to model or update parameters
@property (readwrite, nonatomic, nullable) NSDictionary<MLParameterKey *, id> *parameters;

@end

NS_ASSUME_NONNULL_END

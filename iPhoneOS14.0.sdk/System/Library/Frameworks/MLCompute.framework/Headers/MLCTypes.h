//
//  MLCTypes.h
//  MLCompute
//
//  Copyright © 2019 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MLCompute/MLCDefines.h>

#ifndef MLComputeTypes_h
#define MLComputeTypes_h

#ifdef __cplusplus
extern "C" {
#endif

@class MLCTensor;

// A notification when executeWithInputs:batchSize:options:completionHandler: has finished
// error   If an error occurs, more information might be found here.
typedef void (^MLCGraphCompletionHandler)(MLCTensor __autoreleasing * _Nullable resultTensor,
                                          NSError * _Nullable error,
                                          NSTimeInterval executionTime);

#pragma mark - General Types

/*!
 @enum      MLCDataType
 @abstract  The tensor data type
 */
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCDataType) {
    MLCDataTypeInvalid NS_SWIFT_UNAVAILABLE("") = 0,
    MLCDataTypeFloat32 = 1,
    MLCDataTypeBoolean = 4,
    MLCDataTypeInt64   = 5,

    // Must be last
    MLCDataTypeCount   NS_SWIFT_UNAVAILABLE(""), // holds the number of MLCDataTypes
};

/*!
@enum      MLCRandomInitializerType
@abstract  The random initializer type to use for initializaing tensor data when a tensor is created
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCRandomInitializerType) {
    MLCRandomInitializerTypeInvalid       NS_SWIFT_UNAVAILABLE("") = 0,
    MLCRandomInitializerTypeUniform       = 1,
    MLCRandomInitializerTypeGlorotUniform = 2,
    MLCRandomInitializerTypeXavier        = 3,

    // Must be last
    MLCRandomInitializerTypeCount         NS_SWIFT_UNAVAILABLE(""), // holds the number of MLCRandomInitializerType
};

/*!
@enum       MLCDeviceType
@abstract   The device type to use to execute the training or prediction graph
@discussion Developers can select a specific device type such as CPU or GPU where the training or prediction graph will be executed.
            If MLCDeviceTypeAny is selected, MLCompute will select the appropriate device type based on appropriate heuristics computed
            for the training graph and execute the graph on the CPU or GPU.  On configurations where multiple GPUs are available such as on the MacPro,
            MLCompute will also transparently schedule the execution across multiple GPUs.
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCDeviceType) {
    MLCDeviceTypeCPU NS_SWIFT_NAME(cpu) = 0,
    MLCDeviceTypeGPU NS_SWIFT_NAME(gpu) = 1,
    MLCDeviceTypeAny = 2,

    // Must be last
    MLCDeviceTypeCount  NS_SWIFT_UNAVAILABLE(""), // holds the number of MLCDeviceType
};

/*!
@enum       MLCGraphCompilationOptions
@abstract   Options passed when compiling a graph.  This is a bitmask.
@discussion This is passed as an argument to the compileWithOptions method avalable on MLCTrainingGraph and MLCInferenceGraph                             
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_OPTIONS(uint64_t, MLCGraphCompilationOptions) {
    MLCGraphCompilationOptionsNone                 = 0x00,
    MLCGraphCompilationOptionsDebugLayers          = 0x01,
    MLCGraphCompilationOptionsDisableLayerFusion   = 0x02,
    MLCGraphCompilationOptionsLinkGraphs           = 0x04,
    MLCGraphCompilationOptionsComputeAllGradients  = 0x08,
};

/*!
@enum       MLCExecutionOptions
@abstract   Options passed when executing a graph.  This is a bitmask.
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_OPTIONS(uint64_t, MLCExecutionOptions) {
    MLCExecutionOptionsNone = 0x00,
    /*!  When specified in options argument to executeWithInputs method of a MLCTrainingGraph or MLCInferenceGraph,
         the input tensors are not written to device memory associated with these tensors where the graph will be executed.
     */
    MLCExecutionOptionsSkipWritingInputDataToDevice = 0x01,

    /*!  Wait until execution of graph on specified device is completed before returning from the execute method called.
     */
    MLCExecutionOptionsSynchronous = 0x02,
    /*!  Return profliling information in the callback specified as an argument to the graph execute method.
         MLCompute will report device execution time in the callback
     */
    MLCExecutionOptionsProfiling = 0x04,

    /*!  When set in options argument specified with executeForwardWithBatchSize, we will execute the forward pass of training graph for inference only
         When set in options argument specified with executeWithInputsData, only the forward pass of training graph will be executed for inference only.
     */
    MLCExecutionOptionsForwardOnlyForInference = 0x08
};

#pragma mark - Layers

/*!
@enum       MLCArithmeticOperation
@abstract   The list of supported arithmetic operations.
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCArithmeticOperation) {
    MLCArithmeticOperationAdd      = 0,
    MLCArithmeticOperationSubtract = 1,
    MLCArithmeticOperationMultiply = 2,
    MLCArithmeticOperationDivide   = 3,
    MLCArithmeticOperationFloor    = 4,
    MLCArithmeticOperationRound    = 5,
    MLCArithmeticOperationCeil     = 6,
    MLCArithmeticOperationSqrt     = 7,
    MLCArithmeticOperationRsqrt    = 8,
    MLCArithmeticOperationSin      = 9,
    MLCArithmeticOperationCos      = 10,
    MLCArithmeticOperationTan      = 11,
    MLCArithmeticOperationAsin     = 12,
    MLCArithmeticOperationAcos     = 13,
    MLCArithmeticOperationAtan     = 14,
    MLCArithmeticOperationSinh     = 15,
    MLCArithmeticOperationCosh     = 16,
    MLCArithmeticOperationTanh     = 17,
    MLCArithmeticOperationAsinh    = 18,
    MLCArithmeticOperationAcosh    = 19,
    MLCArithmeticOperationAtanh    = 20,
    MLCArithmeticOperationPow      = 21,
    MLCArithmeticOperationExp      = 22,
    MLCArithmeticOperationExp2     = 23,
    MLCArithmeticOperationLog      = 24,
    MLCArithmeticOperationLog2     = 25,

    // Must be last
    MLCArithmeticOperationCount    NS_SWIFT_UNAVAILABLE(""),
};

/*!
@enum       MLCLossType
@abstract   The list of supported loss functions.
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCLossType) {
    MLCLossTypeMeanAbsoluteError       = 0,
    MLCLossTypeMeanSquaredError        = 1,
    MLCLossTypeSoftmaxCrossEntropy     = 2,
    MLCLossTypeSigmoidCrossEntropy     = 3,
    MLCLossTypeCategoricalCrossEntropy = 4,
    MLCLossTypeHinge                   = 5,
    MLCLossTypeHuber                   = 6,
    MLCLossTypeCosineDistance          = 7,
    MLCLossTypeLog                     = 8,

    // Must be last
    MLCLossTypeCount                   NS_SWIFT_UNAVAILABLE("")   // Holds the number of MLCLossTypes
};

/*!
@enum       MLCActivationType
@abstract   The neuron aka activation type
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCActivationType) {
    MLCActivationTypeNone                                               = 0,
    /*! Rectified Linear Unit: f(x) = x >= 0 ? x : a * x
     */
    MLCActivationTypeReLU          NS_SWIFT_NAME(relu)           = 1,
    /*! f(x) = a * x + b
     */
    MLCActivationTypeLinear                                             = 2,
    /*! f(x) = 1 / (1 + e^-x)
     */
    MLCActivationTypeSigmoid                                            = 3,
    /*! f(x) = clamp((x * a) + b, 0, 1)
     */
    MLCActivationTypeHardSigmoid                                        = 4,
    /*! f(x) = a * tanh(b * x)
     */
    MLCActivationTypeTanh                                               = 5,
    /*! f(x) = fabs(x)
     */
    MLCActivationTypeAbsolute                                           = 6,
    /*! f(x) = a * log(1 + e^(b * x))
     */
    MLCActivationTypeSoftPlus                                           = 7,
    /*! f(x) = x / (1 + abs(x))
     */
    MLCActivationTypeSoftSign                                           = 8,
    /*! Exponential Linear Unit: f(x) = x >= 0 ? x : a * (exp(x) - 1)
     */
    MLCActivationTypeELU           NS_SWIFT_NAME(elu)            = 9,
    /*! Clamped Rectified Linear Unit: f(x) = min((x >= 0 ? x : a * x), b)
     */
    MLCActivationTypeReLUN         NS_SWIFT_NAME(relun)          = 10,
    /*! f(x) = log(1 / (1 + exp(-x)))
     */
    MLCActivationTypeLogSigmoid                                         = 11,
    /*! f(x) = scale * (max(0,x) + min(0, α * (exp(x)−1)))
     */
    MLCActivationTypeSELU          NS_SWIFT_NAME(selu)           = 12,
    /*! Scaled Exponential Linear Unit: f(x) = max(0,x)+min(0, α * (exp(x/α)−1))
     */
    MLCActivationTypeCELU          NS_SWIFT_NAME(celu)           = 13,
    /*! Continuously Differentiable Exponential Linear Unit: f(x) = x, if x > λ, x if x < -λ and 0 otherwise
     */
    MLCActivationTypeHardShrink                                         = 14,
    /*! f(x) = x - λ, if x > λ, x + λ if x < -λ and 0 otherwise
     */
    MLCActivationTypeSoftShrink                                         = 15,
    /*! f(x) = x - Tanh(x)
     */
    MLCActivationTypeTanhShrink                                         = 16,
    /*! f(x) = x, if x > threshold, value otherwise
     */
    MLCActivationTypeThreshold                                          = 17,
    /*! Gaussian Error Linear Unit: f(x) = x * CDF(x)
     */
    MLCActivationTypeGELU          NS_SWIFT_NAME(gelu)        = 18,

    // Must be last
    MLCActivationTypeCount         NS_SWIFT_UNAVAILABLE(""),
};

/*!
@enum       MLCConvolutionType
@abstract   The convolution type specified with a convolution layer
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCConvolutionType) {
    MLCConvolutionTypeStandard   = 0,
    MLCConvolutionTypeTransposed = 1,
    MLCConvolutionTypeDepthwise  = 2,
};

/*!
@enum       MLCPaddingPolicy
@abstract   The padding policy specified with a convolution or pooling layer
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCPaddingPolicy) {
    MLCPaddingPolicySame           = 0,
    MLCPaddingPolicyValid          = 1,
    MLCPaddingPolicyUsePaddingSize = 2,
} NS_REFINED_FOR_SWIFT;

/*!
@enum       MLCPaddingType
@abstract   The padding type specified with a MLCPaddingLayer
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCPaddingType) {
    MLCPaddingTypeZero      = 0,
    MLCPaddingTypeReflect   = 1,
    MLCPaddingTypeSymmetric = 2,
    MLCPaddingTypeConstant  = 3,
};

/*!
@enum       MLCPoolingType
@abstract   The list of supported pooling functions.
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCPoolingType) {
    MLCPoolingTypeMax     = 1,
    MLCPoolingTypeAverage = 2,
    MLCPoolingTypeL2Norm  = 3,

    // Must be last
    MLCPoolingTypeCount   NS_SWIFT_UNAVAILABLE(""),
} NS_REFINED_FOR_SWIFT;

/*!
@enum       MLCReductionType
@abstract   The list of supported reductions functions that can be used with a MLCReductionLayer or a MLCLossLayer
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCReductionType) {
    MLCReductionTypeNone                 = 0,
    MLCReductionTypeSum                  = 1,
    MLCReductionTypeMean                 = 2,
    MLCReductionTypeMax                  = 3,
    MLCReductionTypeMin                  = 4,
    MLCReductionTypeArgMax               = 5,
    MLCReductionTypeArgMin               = 6,
    MLCReductionTypeCount                NS_SWIFT_UNAVAILABLE(""),
};

/*!
@enum       MLCRegularizationType
@abstract   The regularization functions that can be used with an optimizer.
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCRegularizationType) {
    MLCRegularizationTypeNone = 0,
    MLCRegularizationTypeL1   = 1,
    MLCRegularizationTypeL2   = 2,
};

/*!
@enum       MLCSampleMode
@abstract   The sampling mode specfiied with MLCUpsampleLayer
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCSampleMode) {
    MLCSampleModeNearest = 0,
    MLCSampleModeLinear  = 1,
};

/*!
@enum       MLCSoftmaxOperation
@abstract   The list of supported softmax operations.
*/
MLCOMPUTE_ENUM_AVAILABLE_STARTING(macos(10.16), ios(14.0), tvos(14.0))
typedef NS_ENUM(int32_t, MLCSoftmaxOperation) {
    MLCSoftmaxOperationSoftmax    = 0,
    MLCSoftmaxOperationLogSoftmax = 1,
};

NS_ASSUME_NONNULL_BEGIN
NSString *MLCActivationTypeDebugDescription(MLCActivationType activationType) NS_SWIFT_NAME(getter:MLCActivationType.debugDescription(self:));
NSString *MLCArithmeticOperationDebugDescription(MLCArithmeticOperation operation) NS_SWIFT_NAME(getter:MLCArithmeticOperation.debugDescription(self:));
NSString *MLCPaddingPolicyDebugDescription(MLCPaddingPolicy paddingPolicy) NS_REFINED_FOR_SWIFT;
NSString *MLCLossTypeDebugDescription(MLCLossType lossType) NS_SWIFT_NAME(getter:MLCLossType.debugDescription(self:));
NSString *MLCReductionTypeDebugDescription(MLCReductionType reductionType) NS_SWIFT_NAME(getter:MLCReductionType.debugDescription(self:));
NSString *MLCPaddingTypeDebugDescription(MLCPaddingType paddingType) NS_SWIFT_NAME(getter:MLCPaddingType.debugDescription(self:));
NSString *MLCConvolutionTypeDebugDescription(MLCConvolutionType convolutionType) NS_SWIFT_NAME(getter:MLCConvolutionType.debugDescription(self:));
NSString *MLCPoolingTypeDebugDescription(MLCPoolingType poolingType) NS_REFINED_FOR_SWIFT;
NSString *MLCSoftmaxOperationDebugDescription(MLCSoftmaxOperation operation) NS_SWIFT_NAME(getter:MLCSoftmaxOperation.debugDescription(self:));
NSString *MLCSampleModeDebugDescription(MLCSampleMode mode) NS_SWIFT_NAME(getter:MLCSampleMode.debugDescription(self:));
NS_ASSUME_NONNULL_END

#ifdef __cplusplus
}
#endif

#endif /* MLComputeTypes_h */

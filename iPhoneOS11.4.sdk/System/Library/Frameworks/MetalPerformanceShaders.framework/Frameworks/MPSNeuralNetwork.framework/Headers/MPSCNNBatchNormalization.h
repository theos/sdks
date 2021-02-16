//
//  MPSCNNBatchNormalization.h
//  MPS
//
//  Created by Justin Voo on 10/23/17.
//  Copyright © 2017 Apple. All rights reserved.
//

#ifndef MPSCNNBatchNormalization_h
#define MPSCNNBatchNormalization_h

#include <MPSNeuralNetwork/MPSCNNKernel.h>
#include <MPSNeuralNetwork/MPSCNNNormalizationWeights.h>
#include <MPSCore/MPSState.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
    
@class MPSNNFilterNode;
@class MPSState;
@class MPSCNNBatchNormalization;
    
/*!
 *  @class      MPSCNNBatchNormalizationState
 *  @discussion MPSCNNBatchNormalizationState encapsulates the data necessary
 *              to execute batch normalization.
 *
 *              MPSCNNBatchNormalizationState cannot initialize the size of its own
 *              underlying resources.  Use [MPSCNNBatchNormalizationStatistics resultStateForSourceImages:]
 *              or [MPSCNNBatchNormalizationStatistics temporaryResultStateForCommandBuffer:sourceImages:].
 */
MPS_CLASS_AVAILABLE_STARTING( macos(10.13.4), ios(11.3), tvos(11.3))
@interface MPSCNNBatchNormalizationState : MPSNNGradientState

@property (readonly, nonnull, retain, nonatomic) MPSCNNBatchNormalization * batchNormalization;

/*!
 *  Unavailable.  Use MPSCNNBatchNormalizationStatistics methods to initialize the state object.
 */
-(nonnull instancetype) initWithResource: (__nullable id<MTLResource>) resource NS_UNAVAILABLE;

/*!
 *  Unavailable.  Use MPSCNNBatchNormalizationStatistics methods to create the temporary state object.
 */
+(nonnull instancetype) temporaryStateWithCommandBuffer: (__nonnull id <MTLCommandBuffer>) cmdBuf
                                             bufferSize: (size_t) bufferSize NS_UNAVAILABLE;

/*
 *  Unavailable.  Use MPSCNNBatchNormalizationStatistics methods to create the temporary state object.
 */
+(__nonnull instancetype) temporaryStateWithCommandBuffer: (__nonnull id<MTLCommandBuffer>) cmdBuf
                                        textureDescriptor: (MTLTextureDescriptor* __nonnull) descriptor NS_UNAVAILABLE;

/*!
 *  @abstract   Reset any accumulated state data to its initial values.
 */
-(void) reset;

/*!
 *  @abstract   Return an MTLBuffer object with the state's current gamma values.
 */
-(nullable id<MTLBuffer>) gamma;

/*!
 *  @abstract   Return an MTLBuffer object with the state's current beta values..
 */
-(nullable id<MTLBuffer>) beta;

/*!
 *  @abstract   Return an MTLBuffer object with the most recently computed batch mean values.
 */
-(nullable id<MTLBuffer>) mean;

/*!
 *  @abstract   Return an MTLBuffer object with the most recently computed batch variance values.
 */
-(nullable id<MTLBuffer>) variance;

/*!
 *  @abstract   Return an MTLBuffer object containing the values of the gradient of the loss function
 *              with respect to the scale factors.  If a MPSCNNBatchNormalizationGradient kernel
 *              has not successfully generated these values nil will be returned.
 */
-(nullable id<MTLBuffer>) gradientForGamma;

/*!
 *  @abstract   Return an MTLBuffer object containing the values of the gradient of the loss function
 *              with respect to the bias terms.  If a MPSCNNBatchNormalizationGradient kernel
 *              has not successfully generated these values nil will be returned.
 */
-(nullable id<MTLBuffer>) gradientForBeta;

@end    // MPSCNNBatchNormalizationState
   
#pragma mark -
#pragma mark MPSCNNBatchNormalizationDataSource
    
/*! @protocol   MPSCNNBatchNormalizationDataSource
 *  @abstract   The MPSCNNBatchNormalizationDataSource protocol declares the methods that an
 *              instance of MPSCNNBatchNormalizationState uses to initialize the
 *              scale factors, bias terms, and batch statistics.
 */
MPS_CLASS_AVAILABLE_STARTING(macos(10.13.4), ios(11.3), tvos(11.3))
@protocol MPSCNNBatchNormalizationDataSource <NSObject>

@required
    
    /*! @abstract   Returns the number of feature channels within images to be normalized
     *              using the supplied parameters.
     */
    -(NSUInteger) numberOfFeatureChannels;
    
    /*! @abstract   Returns a pointer to the scale factors for the batch normalization.
     */
    -(float * __nullable) gamma;
 
    /*! @abstract   Returns a pointer to the bias terms for the batch normalization.
     *              If NULL then no bias is to be applied.
     */
    -(float * __nullable) beta;

    /*! @abstract   Returns a pointer to batch mean values with which to initialize
     *              the state for a subsequent batch normalization.
     */
    -(float * __nullable) mean;
    
    /*! @abstract   Returns a pointer to batch variance values with which to initialize
     *              the state for a subsequent batch normalization.
     */
    -(float * __nullable) variance;

    /*! @abstract   Alerts the data source that the data will be needed soon
     *  @discussion Each load alert will be balanced by a purge later, when MPS
     *              no longer needs the data from this object.
     *              Load will always be called atleast once after initial construction
     *              or each purge of the object before anything else is called.
     *  @return     Returns YES on success.  If NO is returned, expect MPS
     *              object construction to fail.
     */
    -(BOOL) load;
    
    /*! @abstract   Alerts the data source that the data is no longer needed
     *  @discussion Each load alert will be balanced by a purge later, when MPS
     *              no longer needs the data from this object.
     */
    -(void) purge;
    
    /*! @abstract   A label that is transferred to the batch normalization filter at init time
     *  @discussion Overridden by a MPSCNNBatchNormalizationNode.label if it is non-nil.
     */
    -(NSString* __nullable) label;
   
@optional
    /*! @abstract       Compute new gamma and beta values using current values and gradients contained within a
     *                  MPSCNNBatchNormalizationState.  Perform the update using a GPU.
     *
     *  @param          commandBuffer               The command buffer on which to encode the update.
     *
     *  @param          batchNormalizationState     The MPSCNNBatchNormalizationState object containing the current gamma and
     *                                              beta values and the gradient values.
     *
     *  @return         A MPSCNNNormalizationGammaAndBetaState object containing updated gamma and beta values.  If NULL no
     *                  update was performed.
     */
    -(MPSCNNNormalizationGammaAndBetaState * __nullable) updateGammaAndBetaWithCommandBuffer: (nonnull id<MTLCommandBuffer>) commandBuffer
                                                              batchNormalizationState: (MPSCNNBatchNormalizationState* __nonnull) batchNormalizationState;
    
    /*! @abstract       Compute new gamma and beta values using current values and gradients contained within a
     *                  MPSCNNBatchNormalizationState.  Perform the update using the CPU.
     *
     *  @param          batchNormalizationState     The MPSCNNBatchNormalizationState object containing the current gamma and
     *                                              beta values and the gradient values.
     *
     *  @return         A boolean value indicating if the update was performed.
     */
    -(BOOL) updateGammaAndBetaWithBatchNormalizationState: (MPSCNNBatchNormalizationState* __nonnull) batchNormalizationState;
    
    /*! @abstract       An optional tiny number to use to maintain numerical stability.
     *  @discussion     output_image = (input_image - mean[c]) * gamma[c] / sqrt(variance[c] + epsilon) + beta[c];
     *                  Defalt value if method unavailable: FLT_MIN   */
    -(float) epsilon;
    
    /*! @abstract       NSSecureCoding compatibility.
     */
    - (void)encodeWithCoder:(NSCoder * __nonnull)aCoder;
    
    /*! @abstract       NSSecureCoding compatibility.
     */
    - (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder;
    
    /*! @abstract       NSSecureCoding compatibility.
     */
    @property (class, readonly) BOOL supportsSecureCoding;
    
@end    // MPSCNNBatchNormalizationDataSource
    
/*!
 *  @class      MPSCNNBatchNormalization
 *  @dependency This depends on Metal.framework
 *  @discussion MPSCNNBatchNormalization normalizes input images using per-channel
 *              means and variances.
 *
 *              for (c = 0; c < numberOfFeatureChannels; ++c)
 *              {
 *                  input_image = in(:,:,c,:);
 *                  output_image = (input_image - mean[c]) * gamma[c] / sqrt(variance[c] + epsilon) + beta[c];
 *                  out(:,:,c,:) = output_image;
 *              }
 */
MPS_CLASS_AVAILABLE_STARTING(macos(10.13.4), ios(11.3), tvos(11.3))
@interface  MPSCNNBatchNormalization : MPSCNNKernel

/*! @property   numberOfFeatureChannels
 *  @abstract   The number of feature channels in an image to be normalized.
 */
@property(readonly, nonatomic) NSUInteger       numberOfFeatureChannels;

/*! @property   epsilon
 *  @abstract   The epsilon value used in the batch normalization formula to
 *              bias the variance when normalizing.
 */
@property(readwrite, nonatomic) float       epsilon;

/*! @abstract   The data source the batch normalization was initialized with */
@property (readonly, nonatomic, retain, nonnull) id <MPSCNNBatchNormalizationDataSource> dataSource;

/*!
 *  @abstract   Initializes a batch normalization kernel using a data source.
 *  @param      device                          The MTLDevice on which this filter will be used
 *  @param      dataSource                      A pointer to a object that conforms to the MPSCNNBatchNormalizationDataSource
 *                                              protocol.  The data source provides filter weights and bias terms and, optionally,
 *                                              image statistics which may be used to perform the normalization.
 *
 *  @return     A valid MPSCNNBatchNormalization object or nil, if failure.
 */
-(nonnull instancetype) initWithDevice: (nonnull id <MTLDevice>) device
                            dataSource: (nonnull id <MPSCNNBatchNormalizationDataSource>) dataSource NS_DESIGNATED_INITIALIZER;

/*!
 * Use initWithDevice:dataSource instead
 */
-(nonnull instancetype) initWithDevice: (nonnull id <MTLDevice>) device NS_UNAVAILABLE;

/*! @abstract NSSecureCoding compatability
 *  @discussion While the standard NSSecureCoding/NSCoding method
 *              -initWithCoder: should work, since the file can't
 *              know which device your data is allocated on, we
 *              have to guess and may guess incorrectly.  To avoid
 *              that problem, use a subclass of NSCoder that
 *              implements the <MPSDeviceProvider> protocol  to
 *              tell MPS the MTLDevice to use.
 *  @param      aDecoder    The NSCoder subclass with your serialized MPSKernel
 *  @param      device      The MTLDevice on which to make the MPSKernel
 *  @return     A new MPSCNNBatchNormalization object, or nil if failure.
 */
-(nullable instancetype) initWithCoder:(NSCoder * __nonnull)aDecoder
                                device:(nonnull id <MTLDevice>) device NS_DESIGNATED_INITIALIZER;

/*!
 *  @abstract   Encode this kernel to a command buffer for a single image using
 *              a batch normalization state.
 *
 *  @param      commandBuffer               A valid command buffer to receive the kernel.
 *  @param      sourceImage                 The source MPSImage.
 *  @param      batchNormalizationState     A MPSCNNBatchNormalizationState containing weights and/or
 *                                          statistics to use for the batch normalization.
 *  @param      destinationImage            An MPSImage to contain the resulting normalized and scaled
 *                                          image.
 */
-(void) encodeToCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                  sourceImage: (MPSImage * __nonnull) sourceImage
      batchNormalizationState: (MPSCNNBatchNormalizationState* __nonnull) batchNormalizationState
             destinationImage: (MPSImage * __nonnull) destinationImage;

/*!
 *  @abstract   Encode this kernel to a command buffer for a batch of images using
 *              a batch normalization state.
 *
 *  @param      commandBuffer               A valid command buffer to receive the kernel.
 *  @param      sourceImages                The batch of source images.
 *  @param      batchNormalizationState     A MPSCNNBatchNormalizationState containing weights and/or
 *                                          statistics to use for the batch normalization.
 *  @param      destinationImages           The batch of images to contain the normalized and scaled
 *                                          result images.
 */
-(void) encodeBatchToCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                      sourceImages: (MPSImageBatch * __nonnull) sourceImages
           batchNormalizationState: (MPSCNNBatchNormalizationState* __nonnull) batchNormalizationState
                 destinationImages: (MPSImageBatch * __nonnull) destinationImages;

/*
 *  Unavailable.  Destination states not supported at encode time.
 */
-(MPSImage * __nonnull) encodeToCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                                  sourceImage: (MPSImage *  __nonnull) sourceImage
                             destinationState: (__autoreleasing MPSState * __nullable * __nonnull) outState
                  destinationStateIsTemporary: (BOOL) isTemporary NS_UNAVAILABLE;

/*
 *  Unavailable.  Destination states not supported at encode time.
 */
-(MPSImageBatch * __nonnull) encodeBatchToCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                                           sourceImages: (MPSImageBatch *  __nonnull) sourceImages
                                      destinationStates: (__autoreleasing MPSStateBatch * __nullable * __nonnull) outStates
                            destinationStateIsTemporary: (BOOL) isTemporary NS_UNAVAILABLE;

/*! @abstract       Return an MPSCNNBatchNormalizationState object which may be used with a MPSCNNBatchNormalization filter.
 */
-(MPSCNNBatchNormalizationState * __nullable) resultStateForSourceImage: (MPSImage *__nonnull) sourceImage
                                                           sourceStates: (NSArray <MPSState *> *__nullable) sourceStates
                                                       destinationImage: (MPSImage *__nonnull) destinationImage;

/*! @abstract       Return a temporary MPSCNNBatchNormalizationState object which may be used with
 *                  a MPSCNNBatchNormalization filter.
 */
-(MPSCNNBatchNormalizationState * __nullable) temporaryResultStateForCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                                                                       sourceImage: (MPSImage *__nonnull) sourceImage
                                                                      sourceStates: (NSArray <MPSState *> *__nullable) sourceStates
                                                                  destinationImage: (MPSImage *__nonnull) destinationImage;
/*!
 *  @abstract   Reinitialize the filter using a data source.
 *
 *  @param      dataSource  The data source which will provide the weights and, optionally, the
 *                          image batch statistics with which to normalize.
 */
-(void) reloadDataSource: (__nonnull id<MPSCNNBatchNormalizationDataSource>) dataSource;

/*!
 *  @abstract   Reload data using new gamma and beta terms contained within an
 *              MPSCNNInstanceNormalizationGradientState object.
 *
 *  @param      commandBuffer               The command buffer on which to encode the reload.
 *
 *  @param      gammaAndBetaState           The state containing the updated weights which are to
 *                                          be reloaded.
 */
-(void) reloadGammaAndBetaWithCommandBuffer: (__nonnull id<MTLCommandBuffer>) commandBuffer
                          gammaAndBetaState: (MPSCNNNormalizationGammaAndBetaState* __nonnull) gammaAndBetaState;
@end    // MPSCNNBatchNormalization
    
/*!
 *  @class      MPSCNNBatchNormalizationStatistics
 *  @dependency This depends on Metal.framework
 *  @discussion MPSCNNBatchNormalizationStatistics updates a MPSCNNBatchNormalizationState
 *              with the batch statistics necessary to perform a batch normalization.
 *              MPSCNNBatchNormalizationStatistics may be executed multiple times with
 *              multiple images to accumulate all the statistics necessary to perform
 *              a batch normalization as described in  https://arxiv.org/pdf/1502.03167v3.pdf.
 */
MPS_CLASS_AVAILABLE_STARTING(macos(10.13.4), ios(11.3), tvos(11.3))
@interface  MPSCNNBatchNormalizationStatistics : MPSCNNKernel

/*!
 * @abstract    Initialize this kernel on a device.
 *
 *  @param      device      The MTLDevice on which to initialize the kernel.
 */
-(nonnull instancetype) initWithDevice: (nonnull id <MTLDevice>) device NS_DESIGNATED_INITIALIZER;

/*! @abstract NSSecureCoding compatability
 *  @discussion While the standard NSSecureCoding/NSCoding method
 *              -initWithCoder: should work, since the file can't
 *              know which device your data is allocated on, we
 *              have to guess and may guess incorrectly.  To avoid
 *              that problem, use initWithCoder:device instead.
 *  @param      aDecoder    The NSCoder subclass with your serialized MPSKernel
 *  @param      device      The MTLDevice on which to make the MPSKernel
 *  @return     A new MPSCNNBatchNormalizationStatistics object, or nil if failure.
 */
-(nullable instancetype) initWithCoder:(NSCoder * __nonnull)aDecoder
                                device:(nonnull id <MTLDevice>) device NS_DESIGNATED_INITIALIZER;

/*! @abstract       Encode this operation to a command buffer.
 *  @param          commandBuffer           The command buffer.
 *  @param          sourceImages            An MPSImageBatch containing the source images.
 *  @param          batchNormalizationState A valid MPSCNNBatchNormalizationState object which
 *                                          will be updated with the image batch statistics.
 */
-(void) encodeBatchToCommandBuffer: (__nonnull id<MTLCommandBuffer>) commandBuffer
                      sourceImages: (MPSImageBatch* __nonnull) sourceImages
           batchNormalizationState: (MPSCNNBatchNormalizationState* __nonnull) batchNormalizationState;

/*
 * encodeBatchToCommandBuffer:sourceImages:destinationImages: is unavailable.
 * Use encodeToCommandBuffer:sourceImages:state
 */
-(void) encodeBatchToCommandBuffer: (__nonnull id<MTLCommandBuffer>) commandBuffer
                      sourceImages: (MPSImageBatch* __nonnull) sourceImages
                 destinationImages: (MPSImageBatch* __nonnull) destinationImages NS_UNAVAILABLE;
/*
 * encodeToCommandBuffer:sourceImage:destinationImage: is unavailable.
 * Use encodeToCommandBuffer:sourceImages:state
 */
-(void) encodeToCommandBuffer: (__nonnull id<MTLCommandBuffer>) commandBuffer
                  sourceImage: (MPSImage* __nonnull) sourceImage
             destinationImage: (MPSImage* __nonnull) destinationImage NS_UNAVAILABLE;
/*
 * encodeToCommandBuffer:sourceImage: is unavailable.
 * Use encodeToCommandBuffer:sourceImages:state
 */
-(MPSImage * __nonnull) encodeToCommandBuffer: (__nonnull id<MTLCommandBuffer>) commandBuffer
                                  sourceImage: (MPSImage*  __nonnull) sourceImage NS_UNAVAILABLE;
/*
 * encodeBatchToCommandBuffer:sourceImages: is unavailable.
 * Use encodeToCommandBuffer:sourceImages:state
 */
-(MPSImageBatch * __nonnull) encodeBatchToCommandBuffer: (nonnull id<MTLCommandBuffer>) commandBuffer
                                           sourceImages: (MPSImageBatch*  __nonnull) sourceImages NS_UNAVAILABLE;

@end    // MPSCNNBatchNormalizationStatistics

/*!
 *  @class      MPSCNNBatchNormalizationGradient
 *  @dependency This depends on Metal.framework
 *
 *  @discussion MPSCNNBatchNormalizationGradient computes the gradients of a
 *              loss function resulting from a network containing a corresponding
 *              MPSCNNBatchNormalization kernel.
 *
 *              Two sets of values are computed: the gradient of the loss function
 *              with respect to the batch normalization source images, and the
 *              gradient of the loss function with respect to the scale and bias
 *              terms used to compute the batch normalization.
 *
 */
MPS_CLASS_AVAILABLE_STARTING(macos(10.13.4), ios(11.3), tvos(11.3))
@interface  MPSCNNBatchNormalizationGradient : MPSCNNGradientKernel
/*! @abstract       Encode this operation to a command buffer for a single image.
 *  @param          commandBuffer               The command buffer.
 *  @param          sourceGradient              An MPSImage containing the gradient of the loss function with
 *                                              respect to the results of batch normalization on the source image.
 *  @param          sourceImage                 An MPSImage containing the source image for batch normalization.
 *  @param          batchNormalizationState     A valid MPSCNNBatchNormalizationState object which
 *                                              has been previously updated using a MPSCNNBatchNormalizationStatisticsGradient
 *                                              kernel and the source images.
 *  @param          destinationGradient         An MPSImage which contains the gradient of the loss function with respect to the source image.
 */
-(void) encodeToCommandBuffer: (__nonnull id <MTLCommandBuffer>) commandBuffer
               sourceGradient: (MPSImage * __nonnull ) sourceGradient
                  sourceImage: (MPSImage * __nonnull ) sourceImage
      batchNormalizationState: (MPSCNNBatchNormalizationState * __nonnull ) batchNormalizationState
          destinationGradient: (MPSImage * __nonnull ) destinationGradient;

/*! @abstract       Encode this operation to a command buffer.
 *  @param          commandBuffer               The command buffer.
 *  @param          sourceGradients             An MPSImageBatch containing the gradient of the
 *                                              loss function with respect to the results of batch normalization
 *                                              on the source images.
 *  @param          sourceImages                An MPSImageBatch containing the source images for
 *                                              batch normalization.
 *  @param          batchNormalizationState     A valid MPSCNNBatchNormalizationState object which
 *                                              has been previously updated using a MPSCNNBatchNormalizationStatisticsGradient
 *                                              kernel and the source images.
 *  @param          destinationGradients        An MPSImageBatch whose images will contain the gradient
 *                                              of the loss function with respect to the source images.
 */
-(void) encodeBatchToCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                   sourceGradients: (MPSImageBatch * __nonnull) sourceGradients
                      sourceImages: (MPSImageBatch * __nonnull) sourceImages
           batchNormalizationState: (MPSCNNBatchNormalizationState* __nonnull) batchNormalizationState
              destinationGradients: (MPSImageBatch * __nonnull) destinationGradients;

/*! @abstract       Encode this operation to a command buffer.  Create an MPSImage to contain
 *                  the result and return it.
 *                  See encodeToCommandBuffer:sourceImage:sourceGradient:sourceImage:batchNormalizationState:destinationGradient
 *                  for further details.
 */
-(MPSImage*__nonnull) encodeToCommandBuffer: (__nonnull id <MTLCommandBuffer>) commandBuffer
                             sourceGradient: (MPSImage * __nonnull ) sourceGradient
                                sourceImage: (MPSImage * __nonnull ) sourceImage
                    batchNormalizationState: (MPSCNNBatchNormalizationState * __nonnull ) batchNormalizationState;

/*! @abstract       Encode this operation to a command buffer.  Create an MPSImageBatch to contain
 *                  the result and return it.
 *                  See encodeBatchToCommandBuffer:sourceGradients:sourceImages:batchNormalizationState:destinationGradients
 *                  for further details.
 */
-(MPSImageBatch * __nonnull) encodeBatchToCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                                        sourceGradients: (MPSImageBatch * __nonnull) sourceGradients
                                           sourceImages: (MPSImageBatch *  __nonnull) sourceImages
                                batchNormalizationState: (MPSCNNBatchNormalizationState* __nonnull) batchNormalizationState;
/*
 * Unavailable.  Use encodeBatchToCommandBuffer:sourceImages:lossGradientForDestination:lossGradientForSource:batchNormalizationState:
 */
-(void) encodeToCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                 primaryImage: (MPSImage * __nonnull) primaryImage
               secondaryImage: (MPSImage * __nonnull) secondaryImage
             destinationImage: (MPSImage * __nonnull) destinationImage NS_UNAVAILABLE;
/*
 * Unavailable.  Use encodeBatchToCommandBuffer:sourceImages:lossGradientForDestination:lossGradientForSource:batchNormalizationState:
 */
-(void) encodeBatchToCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                     primaryImages: (MPSImageBatch * __nonnull) primaryImages
                   secondaryImages: (MPSImageBatch * __nonnull) secondaryImages
                 destinationImages: (MPSImageBatch * __nonnull) destinationImages NS_UNAVAILABLE;
/*
 * Unavailable.  Use -(MPSImageBatch*)encodeBatchToCommandBuffer:sourceImages:lossGradientForDestination:batchNormalizationState:
 */
-(MPSImage * __nonnull) encodeToCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                                 primaryImage: (MPSImage * __nonnull) primaryImage
                               secondaryImage: (MPSImage * __nonnull) secondaryImage NS_UNAVAILABLE;
/*
 * Unavailable.  Use -(MPSImageBatch*)encodeBatchToCommandBuffer:sourceImages:lossGradientForDestination:batchNormalizationState:
 */
-(MPSImageBatch * __nonnull) encodeBatchToCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                                          primaryImages: (MPSImageBatch * __nonnull) primaryImage
                                        secondaryImages: (MPSImageBatch * __nonnull) secondaryImage NS_UNAVAILABLE;
@end    // MPSCNNBatchNormalizationGradient
    
    
/*!
 *  @class      MPSCNNBatchNormalizationStatisticsGradient
 *  @dependency This depends on Metal.framework
 *  @discussion MPSCNNBatchNormalizationStatisticsGradient updates a MPSCNNBatchNormalizationState
 *              with the gradient of the loss function with respect to the batch statistics and
 *              batch normalization weights used to perform a batch normalization.
 */
MPS_CLASS_AVAILABLE_STARTING(macos(10.13.4), ios(11.3), tvos(11.3))
@interface  MPSCNNBatchNormalizationStatisticsGradient : MPSCNNGradientKernel

/*! @abstract       Encode this operation to a command buffer.
 *  @param          commandBuffer               The command buffer.
 *  @param          sourceGradients             An MPSImageBatch containing the gradient of the
 *                                              loss function with respect to the results of batch normalization
 *                                              on the source images.
 *  @param          sourceImages                An MPSImageBatch containing the source images for
 *                                              batch normalization.
 *  @param          batchNormalizationState     A valid MPSCNNBatchNormalizationState object which
 *                                              has been previously updated using a MPSCNNBatchNormalizationStatistics
 *                                              kernel and the source images.  Upon completion of the
 *                                              command buffer, will contain the (possibly partially updated)
 *                                              gradients for the loss function with respect to the scale and
 *                                              bias parameters used to compute the batch normalization.  The
 *                                              state will be considered to be completely updated when all
 *                                              MPSImages in the training batch have been processed.
 */
-(void) encodeBatchToCommandBuffer: (nonnull id <MTLCommandBuffer>) commandBuffer
                   sourceGradients: (MPSImageBatch * __nonnull) sourceGradients
                      sourceImages: (MPSImageBatch * __nonnull) sourceImages
           batchNormalizationState: (MPSCNNBatchNormalizationState* __nonnull) batchNormalizationState;

/*
 *  Unavailable. Use encodeBatchToCommandBuffer:sourceImages:lossGradientForDestination:batchNormalizationState:
 */
-(MPSImage*__nonnull) encodeToCommandBuffer: (__nonnull id <MTLCommandBuffer>) commandBuffer
                             sourceGradient: (MPSImage * __nonnull ) sourceGradient
                                sourceImage: (MPSImage * __nonnull ) sourceImage
                              gradientState: (MPSState * __nonnull ) gradientState NS_UNAVAILABLE;

/*
 *  Unavailable.  Use encodeBatchToCommandBuffer:sourceImages:lossGradientForDestination:batchNormalizationState:
 */
-(void) encodeToCommandBuffer: (__nonnull id <MTLCommandBuffer>) commandBuffer
               sourceGradient: (MPSImage * __nonnull ) sourceGradient
                  sourceImage: (MPSImage * __nonnull ) sourceImage
                gradientState: (MPSState * __nonnull ) gradientState
          destinationGradient: (MPSImage * __nonnull ) destinationGradient NS_UNAVAILABLE;

/*
 *  Unavailable.  Use encodeBatchToCommandBuffer:sourceImages:lossGradientForDestination:batchNormalizationState:
 */
-(MPSImageBatch*__nonnull) encodeBatchToCommandBuffer: (__nonnull id <MTLCommandBuffer>) commandBuffer
                                      sourceGradients: (MPSImageBatch * __nonnull ) sourceGradients
                                         sourceImages: (MPSImageBatch * __nonnull ) sourceImages
                                       gradientStates: (MPSStateBatch * __nonnull ) gradientStates NS_UNAVAILABLE;

@end    // MPSCNNBatchNormalizationStatisticsGradient
#ifdef __cplusplus
}
#endif // __cplusplus

#endif /* MPSCNNBatchNormalization_h */

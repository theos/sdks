//
//  MPSKeyedArchiver.h
//  MPSCore
//
//  Created by Ian Ollmann on 1/23/18.
//  Copyright © 2018 Apple. All rights reserved.
//

#ifndef MPSKeyedArchiver_h
#define MPSKeyedArchiver_h
#ifdef __cplusplus
extern "C" {
#endif
    
#import <MPSCore/MPSCoreTypes.h>

/*! @class MPSKeyedUnarchiver
 *  @abstract A NSKeyedArchiver that supports the MPSDeviceProvider protocol for MPSKernel decoding */
MPS_CLASS_AVAILABLE_STARTING( macos(10.13.4), ios(11.3), tvos(11.3))
@interface MPSKeyedUnarchiver : NSKeyedUnarchiver <MPSDeviceProvider>

/* Common NSKeyedUnarchiver methods */
+ (nullable id)unarchiveObjectWithData: (NSData * __nonnull)data NS_UNAVAILABLE;
+ (nullable id)unarchiveObjectWithData: (NSData *__nonnull)data
                                device: (__nonnull id <MTLDevice>) device;
+ (nullable id)unarchiveTopLevelObjectWithData:(NSData *__nonnull)data
                                         error:(NSError * __nullable * __nullable)error NS_UNAVAILABLE;
+ (nullable id)unarchiveTopLevelObjectWithData:(NSData *__nonnull)data
                                        device: (__nonnull id <MTLDevice>) device
                                         error:(NSError * __nullable * __nullable)error;

+ (nullable id)unarchiveObjectWithFile:(NSString * __nonnull)path NS_UNAVAILABLE;
+ (nullable id)unarchiveObjectWithFile:(NSString * __nonnull)path
                                device: (__nonnull id <MTLDevice>) device;

- (nullable instancetype)init NS_UNAVAILABLE;
- (nullable instancetype)initWithDevice: (__nonnull id <MTLDevice>) device;

- (nonnull instancetype)initForReadingWithData:(NSData * __nonnull)data NS_UNAVAILABLE;
- (nonnull instancetype)initForReadingWithData:(NSData * __nonnull)data
                                        device: (__nonnull id <MTLDevice>) device;


/*! @abstract   Reports which device to use for unarchiving MPSKernels */
-(__nonnull id <MTLDevice>) mpsMTLDevice;
@end
    
    
#ifdef __cplusplus
}
#endif


#endif /* MPSKeyedArchiver_h */

//
//  PKPass.h
//  PassKit
//
//  Copyright (c) 2011 Apple, Inc. All rights reserved.
//

#ifndef __PKPASS_H
#define __PKPASS_H

#import <PassKit/PKObject.h>

typedef NS_ENUM(NSUInteger, PKPassType) {
    PKPassTypeBarcode,
    PKPassTypePayment,
    PKPassTypeAny = ~(NSUInteger)0
} NS_ENUM_AVAILABLE_IOS(8_0);

@class PKPaymentPass;

#if TARGET_OS_IPHONE
@class UIImage;
#endif

NS_ASSUME_NONNULL_BEGIN
@interface PKPass : PKObject

- (instancetype)initWithData:(NSData *)data error:(NSError **)error;

@property (nonatomic, assign, readonly) PKPassType           passType NS_AVAILABLE_IOS(8_0);
@property (nonatomic, readonly, nullable) PKPaymentPass      *paymentPass NS_AVAILABLE_IOS(8_0);

@property (nonatomic, copy, readonly) NSString               *serialNumber;
@property (nonatomic, copy, readonly) NSString               *passTypeIdentifier;
@property (nonatomic, copy, readonly,nullable) NSURL         *webServiceURL;
@property (nonatomic, copy, readonly,nullable) NSString      *authenticationToken;

#if TARGET_OS_IPHONE
@property (nonatomic, copy, readonly) UIImage                *icon __WATCHOS_PROHIBITED;
#endif

@property (nonatomic, copy, readonly) NSString               *localizedName; // e.g. "Boarding Pass"
@property (nonatomic, copy, readonly) NSString               *localizedDescription; // e.g. "SFO -> LHR"
@property (nonatomic, copy, readonly) NSString               *organizationName; // e.g. "Great Airways"
@property (nonatomic, copy, readonly, nullable) NSDate       *relevantDate; // may be useful for sorting
@property (nonatomic, copy, readonly, nullable) NSDictionary *userInfo NS_AVAILABLE_IOS(7_0);

@property (nonatomic, copy, readonly, nullable) NSURL *passURL; // open to view pass in Wallet app

@property (nonatomic, assign, readonly, getter=isRemotePass)   BOOL       remotePass NS_AVAILABLE_IOS(9_0);
@property (nonatomic, copy, readonly)                          NSString   *deviceName NS_AVAILABLE_IOS(9_0);

- (nullable id)localizedValueForFieldKey:(NSString *)key; // IBOutlet-like; allows access to field data from pass file format

@end
NS_ASSUME_NONNULL_END

#endif // __PKPASS_H

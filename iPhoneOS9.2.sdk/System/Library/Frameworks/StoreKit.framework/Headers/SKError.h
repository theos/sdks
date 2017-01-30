//
//  SKError.h
//  StoreKit
//
//  Copyright 2009 Apple, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKitDefines.h>

NS_ASSUME_NONNULL_BEGIN

SK_EXTERN NSString * const SKErrorDomain NS_AVAILABLE_IOS(3_0);

// error codes for the SKErrorDomain
enum {
    SKErrorUnknown,
    SKErrorClientInvalid,               // client is not allowed to issue the request, etc.
    SKErrorPaymentCancelled,            // user cancelled the request, etc.
    SKErrorPaymentInvalid,              // purchase identifier was invalid, etc.
    SKErrorPaymentNotAllowed,           // this device is not allowed to make the payment
    SKErrorStoreProductNotAvailable,    // Product is not available in the current storefront
};

NS_ASSUME_NONNULL_END

#if !__has_include(<PassKitCore/PKDisbursementVoucher.h>) || PK_USE_PUBLIC_PASSKIT
//
//  PKDisbursementVoucher.h
//    PassKit
//  Copyright © 2019 Apple, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// PKDisbursementVoucher defines information for disbursement
@interface PKDisbursementVoucher : NSObject

// The data containing information for the disbursement
@property (nonatomic, copy, readonly) NSData *data API_AVAILABLE(ios(12.2)) API_UNAVAILABLE(tvos, watchos, macos);

// The URL for redeeming the voucher
@property (nonatomic, copy, readonly) NSURL *redemptionURL API_AVAILABLE(ios(12.2)) API_UNAVAILABLE(tvos, watchos, macos);

@end

NS_ASSUME_NONNULL_END

#else
#import <TargetConditionals.h>
#import <PassKitCore/PKDisbursementVoucher.h>
#endif

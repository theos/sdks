//
//  INBillDetails.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Intents/INBillType.h>
#import <Intents/INPaymentStatus.h>

@class INBillPayee;
@class INCurrencyAmount;
@class INSpeakableString;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.3), watchos(3.2)) API_UNAVAILABLE(macosx)
@interface INBillDetails : NSObject <NSCopying, NSSecureCoding>

- (id)init NS_UNAVAILABLE;

- (nullable instancetype)initWithBillType:(INBillType)billType
                            paymentStatus:(INPaymentStatus)paymentStatus
                                billPayee:(nullable INBillPayee *)billPayee
                                amountDue:(nullable INCurrencyAmount *)amountDue
                               minimumDue:(nullable INCurrencyAmount *)minimumDue
                                  lateFee:(nullable INCurrencyAmount *)lateFee
                                  dueDate:(nullable NSDateComponents *)dueDate
                              paymentDate:(nullable NSDateComponents *)paymentDate NS_DESIGNATED_INITIALIZER;

@property (readwrite, assign, NS_NONATOMIC_IOSONLY) INBillType billType;

@property (readwrite, assign, NS_NONATOMIC_IOSONLY) INPaymentStatus paymentStatus;

// e.g. "Internet bill"
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) INBillPayee *billPayee;

@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) INCurrencyAmount *amountDue;
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) INCurrencyAmount *minimumDue;
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) INCurrencyAmount *lateFee;

@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSDateComponents *dueDate;
@property (readwrite, copy, nullable, NS_NONATOMIC_IOSONLY) NSDateComponents *paymentDate;

@end

NS_ASSUME_NONNULL_END


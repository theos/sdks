//
//  INCurrencyAmount.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macosx)
@interface INCurrencyAmount : NSObject <NSCopying, NSSecureCoding>

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithAmount:(NSDecimalNumber *)amount
                  currencyCode:(NSString *)currencyCode NS_DESIGNATED_INITIALIZER;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSDecimalNumber *amount;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *currencyCode;

@end

NS_ASSUME_NONNULL_END

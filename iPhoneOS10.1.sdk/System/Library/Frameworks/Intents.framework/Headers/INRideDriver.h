//
//  INRideDriver.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INPerson.h>

@class INImage;
@class INPersonHandle;

NS_ASSUME_NONNULL_BEGIN

@interface INRideDriver : INPerson <NSCopying, NSSecureCoding>

- (instancetype)initWithPersonHandle:(INPersonHandle *)personHandle
                nameComponents:(nullable NSPersonNameComponents *)nameComponents
                   displayName:(nullable NSString *)displayName
                         image:(nullable INImage *)image
                        rating:(nullable NSString *)rating
                   phoneNumber:(nullable NSString *)phoneNumber NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithHandle:(NSString *)handle
                   displayName:(nullable NSString *)displayName
                         image:(nullable INImage *)image
                        rating:(nullable NSString *)rating
                   phoneNumber:(nullable NSString *)phoneNumber NS_DEPRECATED(10_12, 10_12, 10_0, 10_0, "Use the designated initializer instead");

- (instancetype)initWithHandle:(NSString *)handle
                nameComponents:(NSPersonNameComponents *)nameComponents
                         image:(nullable INImage *)image
                        rating:(nullable NSString *)rating
                   phoneNumber:(nullable NSString *)phoneNumber NS_DEPRECATED(10_12, 10_12, 10_0, 10_0, "Use the designated initializer instead");

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *rating;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *phoneNumber;

@end

NS_ASSUME_NONNULL_END

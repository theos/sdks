//
//  INHeadUnit.h
//  Intents
//
//  Copyright (c) 2016-2020 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(14.0), watchos(7.0))
API_UNAVAILABLE(macos, tvos)
@interface INHeadUnit : NSObject <NSCopying, NSSecureCoding>

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithBluetoothIdentifier:(nullable NSString *)bluetoothIdentifier
                             iap2Identifier:(nullable NSString *)iap2Identifier NS_DESIGNATED_INITIALIZER;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *bluetoothIdentifier;

@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *iap2Identifier;

@end

NS_ASSUME_NONNULL_END

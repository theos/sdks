#if !__has_include(<PassKitCore/PKLabeledValue.h>) || PK_USE_PUBLIC_PASSKIT
//
//  PKLabeledValue.h
//    PassKit
//
//  Copyright © 2016 Apple, Inc. All rights reserved.
//
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.1))
@interface PKLabeledValue : NSObject

- (instancetype)initWithLabel:(NSString *)label
                        value:(NSString *)value NS_DESIGNATED_INITIALIZER;

@property (nonatomic, copy, readonly) NSString *label;
@property (nonatomic, copy, readonly) NSString *value;

@end

NS_ASSUME_NONNULL_END

#else
#import <TargetConditionals.h>
#import <PassKitCore/PKLabeledValue.h>
#endif

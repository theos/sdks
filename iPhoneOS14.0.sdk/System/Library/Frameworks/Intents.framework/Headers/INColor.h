//
//  INColor.h
//  Intents
//
//  Copyright (c) 2016-2019 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(14.0), watchos(7.0))
API_UNAVAILABLE(macos, tvos)
@interface INColor : NSObject <NSCopying, NSSecureCoding>

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithRed:(double)red
                      green:(double)green
                       blue:(double)blue NS_DESIGNATED_INITIALIZER;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) double red;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) double green;

@property (readonly, assign, NS_NONATOMIC_IOSONLY) double blue;

@end

NS_ASSUME_NONNULL_END

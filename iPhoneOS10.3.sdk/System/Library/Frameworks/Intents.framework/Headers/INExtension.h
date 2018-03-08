//
//  INExtension.h
//
//  Copyright © 2015 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Intents/INIntentHandlerProviding.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0), watchos(3.2))
@interface INExtension : NSObject <INIntentHandlerProviding>
@end

NS_ASSUME_NONNULL_END

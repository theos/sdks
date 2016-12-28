//
//  INPreferences.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INSiriAuthorizationStatus.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macosx)
@interface INPreferences : NSObject

+ (INSiriAuthorizationStatus)siriAuthorizationStatus;
+ (void)requestSiriAuthorization:(void (^)(INSiriAuthorizationStatus status))handler;
+ (NSString *)siriLanguageCode;

@end

NS_ASSUME_NONNULL_END

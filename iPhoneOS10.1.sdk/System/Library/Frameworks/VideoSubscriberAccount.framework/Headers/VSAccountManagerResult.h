//
//  VSAccountManagerResult.h
//  VideoSubscriberAccount
//
//  Copyright © 2016 Apple Inc. All rights reserved.
//

#import <Availability.h>
#import <Foundation/NSObject.h>
#import <VideoSubscriberAccount/VideoSubscriberAccountDefines.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents an in-flight request to an account manger.
NS_CLASS_AVAILABLE_IOS(10_0) __TVOS_AVAILABLE(10.0) __WATCHOS_UNAVAILABLE
@interface VSAccountManagerResult : NSObject

- (instancetype)init NS_UNAVAILABLE;

/// Advise the account manager that the app no longer needs the requested work to be done.
- (void)cancel;

@end

NS_ASSUME_NONNULL_END

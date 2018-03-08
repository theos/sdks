//
//  CXAction.h
//  CallKit
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CallKit/CXBase.h>

NS_ASSUME_NONNULL_BEGIN

CX_CLASS_AVAILABLE(ios(10.0))
@interface CXAction : NSObject <NSCopying, NSSecureCoding>

/// Unique ID
@property (nonatomic, readonly, copy) NSUUID *UUID;

/// Whether all actions are either fulfilled or failed
@property (nonatomic, readonly, assign, getter=isComplete) BOOL complete;

@property (nonatomic, readonly, strong) NSDate *timeoutDate;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

/// Report successful execution of the receiver.
- (void)fulfill;

/// Report failed execution of the receiver.
- (void)fail;

@end

NS_ASSUME_NONNULL_END

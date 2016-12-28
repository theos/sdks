//
//  VSAccountMetadata.h
//  VideoSubscriberAccount
//
//  Copyright © 2016 Apple Inc. All rights reserved.
//

#import <Availability.h>
#import <Foundation/NSObject.h>
#import <VideoSubscriberAccount/VideoSubscriberAccountDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class NSDate;
@class NSString;

/// A collection of information about a subscriber's account.
NS_CLASS_AVAILABLE_IOS(10_0) __TVOS_AVAILABLE(10.0) __WATCHOS_UNAVAILABLE
@interface VSAccountMetadata : NSObject

/// A value that uniquely identifies the account provider.
/// You may use this value to brand your app.
@property (nonatomic, readonly, copy, nullable) NSString *accountProviderIdentifier;

/// Specifies when the user might need to re-authenticate with the account provider.
/// The value might be nil if the user is not currently authenticated.
@property (nonatomic, readonly, copy, nullable) NSDate *authenticationExpirationDate;

/// An opaque blob of data that can be used to cryptographically verify that the
/// SAML AttributeQuery response actually came from the account provider.
@property (nonatomic, readonly, copy, nullable) NSData *verificationData;

/// The SAML AttributeQuery response received from the account provider.
/// The value might be nil if your account metadata request did not specify any SAML attributes or if the user does not have a valid authentication.
@property (nonatomic, readonly, copy, nullable) NSString *SAMLAttributeQueryResponse;

@end

NS_ASSUME_NONNULL_END

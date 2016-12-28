//
//  VideoSubscriberAccountErrors.h
//  VideoSubscriberAccount
//
//  Copyright © 2016 Apple Inc. All rights reserved.
//

#import <Availability.h>
#import <Foundation/NSObjCRuntime.h>
#import <Foundation/NSError.h>
#import <VideoSubscriberAccount/VideoSubscriberAccountDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class NSString;

/// The domain of all errors returned by VideoSubscriberAccount framework.
VS_EXTERN NSErrorDomain const VSErrorDomain
NS_AVAILABLE_IOS(10_0) __TVOS_AVAILABLE(10.0) __WATCHOS_UNAVAILABLE;

/// A key that can be used to obtain the subscription provider's SAML response string from an error user info dictionary.
VS_EXTERN NSString * const VSErrorInfoKeySAMLResponse
NS_AVAILABLE_IOS(10_0) __TVOS_AVAILABLE(10.0) __WATCHOS_UNAVAILABLE;

/// A key that can be used to obtain the subscription provider's SAML status code string from an error user info dictionary.
VS_EXTERN NSString * const VSErrorInfoKeySAMLResponseStatus
NS_AVAILABLE_IOS(10_0) __TVOS_AVAILABLE(10.0) __WATCHOS_UNAVAILABLE;

/// A key that can be used to obtain the identifier string of the user's unsupported subscription provider from an error user info dictionary.
VS_EXTERN NSString * const VSErrorInfoKeyUnsupportedProviderIdentifier
NS_AVAILABLE_IOS(10_0) __TVOS_AVAILABLE(10.0) __WATCHOS_UNAVAILABLE;

typedef NS_ENUM(NSInteger, VSErrorCode)
{
    VSErrorCodeAccessNotGranted = 0, // The user has not granted the app access to their subscription information.
    VSErrorCodeUnsupportedProvider = 1, // The system does not currently support the user's subscription provider.
    VSErrorCodeUserCancelled = 2, // The request was cancelled by the user.
    VSErrorCodeServiceTemporarilyUnavailable = 3, // The request failed, but a subsequent attempt might succeed.
    VSErrorCodeProviderRejected = 4,// The user's subscription provider did not allow the request to proceed, e.g. because the subscription tier doesn't include the resource, or interactive reauthentication is required, but the request does not allow interruption.
    VSErrorCodeInvalidVerificationToken = 5,// The request's verification token was rejected by the user's subscription provider.
}
NS_ENUM_AVAILABLE_IOS(10_0) __TVOS_AVAILABLE(10.0) __WATCHOS_UNAVAILABLE;

NS_ASSUME_NONNULL_END

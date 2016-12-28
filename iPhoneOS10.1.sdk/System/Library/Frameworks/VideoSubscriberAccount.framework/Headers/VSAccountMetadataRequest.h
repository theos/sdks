//
//  VSAccountMetadataRequest.h
//  VideoSubscriberAccount
//
//  Copyright © 2016 Apple Inc. All rights reserved.
//

#import <Availability.h>
#import <VideoSubscriberAccount/VideoSubscriberAccountDefines.h>
#import <Foundation/NSObject.h>

NS_ASSUME_NONNULL_BEGIN

@class NSArray<ObjectType>;
@class NSString;

/// Specifies which information the app wants to obtain about the subscriber's account.
/// You should only request the information you need to fulfill your contractual obligations.
NS_CLASS_AVAILABLE_IOS(10_0) __TVOS_AVAILABLE(10.0) __WATCHOS_UNAVAILABLE
@interface VSAccountMetadataRequest : NSObject

/// Identifies who is making the request.
@property (nonatomic, copy, nullable) NSString *channelIdentifier;

/// If non-empty, limits which account providers can respond to the request.
@property (nonatomic, copy) NSArray<NSString *> *supportedAccountProviderIdentifiers;

/// A value that the account provider may use to verify the identity of the requesting app.
@property (nonatomic, copy, nullable) NSString *verificationToken;

/// Whether to request information that identifies the account provider.
@property (nonatomic, assign) BOOL includeAccountProviderIdentifier;

/// Whether to request the expiration date of the subscriber's current authentication.
@property (nonatomic, assign) BOOL includeAuthenticationExpirationDate;

/// A brief, user-presentable name for the video that the app will play if it receives a successful response.
/// For example, "What's New in Swift" or "Office Space"
/// Do not provide a value if the request will not be used to play a specific video.
@property (nonatomic, copy, nullable) NSString *localizedVideoTitle;

/// Whether the user might expect to be prompted to authenticate in order to complete this request.
@property (nonatomic, assign, getter=isInterruptionAllowed) BOOL interruptionAllowed;

/// Controls whether the request will ignore any cached credentials.
@property (nonatomic, assign) BOOL forceAuthentication;

/// Attributes to add to a SAML attributeQuery request and sent to the account provider.
@property (nonatomic, copy) NSArray<NSString *> *attributeNames;

@end

NS_ASSUME_NONNULL_END

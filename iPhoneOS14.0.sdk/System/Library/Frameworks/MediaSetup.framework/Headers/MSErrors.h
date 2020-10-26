//
//  MSErrors.h
//  MediaSetup
//
//  Created by Veena Rajan on 2/2/20.
//  Copyright © 2020 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSErrorDomain const MSErrorDomain;
extern NSErrorDomain const MSServiceSetupErrorDomain;
extern NSErrorDomain const MSCloudKitErrorDomain;

extern NSErrorUserInfoKey const MSUserInfoErrorStringKey;

typedef NS_ERROR_ENUM(MSErrorDomain, MSErrorCodes) {
    MSError_ConnectionError = 0,
    MSError_InvalidAttributeError,
    MSError_InvalidServiceError,
    MSError_InvalidHomeError,
    MSError_InvalidHomeUserError,
    MSError_ServiceMissingFromHome,
    MSError_InvalidNowPlayingInfo,
    MSError_MissingPublicDatabaseInfoForService,
};

typedef NS_ERROR_ENUM(MSServiceSetupErrorDomain, MSServiceSetupErrorCodes) {
    MSServiceSetupError_ServiceName = 0,
    MSServiceSetupError_AccountName,
    MSServiceSetupError_ClientID,
    MSServiceSetupError_ClientSecret,
    MSServiceSetupError_IconImageURL,
    MSServiceSetupError_ConfigURL,
    MSServiceSetupError_SetUpContext,
    MSServiceSetupError_AuthURL,
    MSServiceSetupError_BundleIdentifier,
    MSServiceSetupError_ServiceIdentifier
};

typedef NS_ERROR_ENUM(MSErrorDomain, MSCKErrorCodes) {
    MSCKError_Unknown = 0,
    MSCKError_UnknnownItem,
    MSCKError_PartialFailureError,
    MSCKError_ServerRecordChanged,
    MSCKError_ManateeUnavailable,
    MSCKError_ManateeIdentity,
    MSCKError_ThrottledError,
    MSCKError_ServerChangeTokenExpired,
    MSCKError_InternalError,
    MSCKError_PrivateUnsyncedKeychain
};


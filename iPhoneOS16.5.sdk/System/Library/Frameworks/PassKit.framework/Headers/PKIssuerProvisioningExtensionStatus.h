#if !__has_include(<PassKitCore/PKIssuerProvisioningExtensionStatus.h>) || PK_USE_PUBLIC_PASSKIT
//
//  PKIssuerProvisioningExtensionStatus.h
//    PassKit
//
//  Copyright © 2020 Apple, Inc. All rights reserved.
//

#ifndef __PKISSUERPROVISIONINGEXTENSIONSTATUS_H
#define __PKISSUERPROVISIONINGEXTENSIONSTATUS_H

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(watchos, tvos)
@interface PKIssuerProvisioningExtensionStatus : NSObject

- (instancetype)init NS_DESIGNATED_INITIALIZER;

@property (nonatomic, assign) BOOL requiresAuthentication; // authorization required before passes can be added
@property (nonatomic, assign) BOOL passEntriesAvailable; // passes will be available to add (at least one)
@property (nonatomic, assign) BOOL remotePassEntriesAvailable; // passes will be available to add on the remote device (at least one)

@end

NS_ASSUME_NONNULL_END
#endif

#else
#import <TargetConditionals.h>
#import <PassKitCore/PKIssuerProvisioningExtensionStatus.h>
#endif

//
//  ASAccountAuthenticationModificationUpgradePasswordToStrongPasswordRequest.h
//  AuthenticationServices Framework
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <AuthenticationServices/ASAccountAuthenticationModificationRequest.h>

NS_ASSUME_NONNULL_BEGIN

@class ASCredentialServiceIdentifier;

AS_EXTERN API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, macCatalyst, tvos, watchos)
@interface ASAccountAuthenticationModificationUpgradePasswordToStrongPasswordRequest : ASAccountAuthenticationModificationRequest

- (instancetype)initWithUser:(NSString *)user serviceIdentifier:(ASCredentialServiceIdentifier *)serviceIdentifier;

@property (nonatomic, readonly) NSString *user;
@property (nonatomic, readonly) ASCredentialServiceIdentifier *serviceIdentifier;

@end

NS_ASSUME_NONNULL_END

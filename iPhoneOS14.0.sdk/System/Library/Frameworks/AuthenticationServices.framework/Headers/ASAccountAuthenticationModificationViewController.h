//
//  ASAccountAuthenticationModificationViewController.h
//  AuthenticationServices Framework
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <AuthenticationServices/ASAccountAuthenticationModificationExtensionContext.h>
#import <AuthenticationServices/ASCredentialServiceIdentifier.h>
#import <AuthenticationServices/ASFoundation.h>
#import <AuthenticationServices/ASPasswordCredential.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

AS_EXTERN API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macCatalyst, macos, watchos, tvos)
@interface ASAccountAuthenticationModificationViewController : ASViewController

@property (nonatomic, readonly, strong) ASAccountAuthenticationModificationExtensionContext *extensionContext;

- (void)convertAccountToSignInWithAppleWithoutUserInteractionForServiceIdentifier:(ASCredentialServiceIdentifier *)serviceIdentifier existingCredential:(ASPasswordCredential *)existingCredential NS_SWIFT_NAME(convertAccountToSignInWithAppleWithoutUserInteraction(for:existingCredential:));
- (void)prepareInterfaceToConvertAccountToSignInWithAppleForServiceIdentifier:(ASCredentialServiceIdentifier *)serviceIdentifier existingCredential:(ASPasswordCredential *)existingCredential NS_SWIFT_NAME(prepareInterfaceToConvertAccountToSignInWithApple(for:existingCredential:));

- (void)changePasswordWithoutUserInteractionForServiceIdentifier:(ASCredentialServiceIdentifier *)serviceIdentifier existingCredential:(ASPasswordCredential *)existingCredential newPassword:(NSString *)newPassword NS_SWIFT_NAME(changePasswordWithoutUserInteraction(for:existingCredential:newPassword:));
- (void)prepareInterfaceToChangePasswordForServiceIdentifier:(ASCredentialServiceIdentifier *)serviceIdentifier existingCredential:(ASPasswordCredential *)existingCredential newPassword:(NSString *)newPassword NS_SWIFT_NAME(prepareInterfaceToChangePassword(for:existingCredential:newPassword:));

- (void)cancelRequest;

@end

NS_ASSUME_NONNULL_END

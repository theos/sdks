//
//  ASAccountAuthenticationModificationExtensionContext.h
//  AuthenticationServices Framework
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <AuthenticationServices/ASExtensionErrors.h>
#import <AuthenticationServices/ASFoundation.h>
#import <Foundation/Foundation.h>

@class ASAuthorizationAppleIDCredential;
@class ASPasswordCredential;

NS_ASSUME_NONNULL_BEGIN

AS_EXTERN API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macCatalyst, macos, watchos, tvos)
@interface ASAccountAuthenticationModificationExtensionContext : NSExtensionContext

- (void)getSignInWithAppleUpgradeAuthorizationWithState:(nullable NSString *)state nonce:(nullable NSString *)nonce completionHandler:(void(^)(ASAuthorizationAppleIDCredential * _Nullable authorization, NSError * _Nullable error))completionHandler NS_SWIFT_NAME(getSignInWithAppleUpgradeAuthorization(state:nonce:completionHandler:));
- (void)completeUpgradeToSignInWithAppleWithUserInfo:(nullable NSDictionary *)userInfo NS_SWIFT_NAME(completeUpgradeToSignInWithApple(userInfo:));
- (void)completeChangePasswordRequestWithUpdatedCredential:(ASPasswordCredential *)updatedCredential userInfo:(nullable NSDictionary *)userInfo NS_SWIFT_NAME(completeChangePasswordRequest(updatedCredential:userInfo:));
- (void)cancelRequestWithError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END

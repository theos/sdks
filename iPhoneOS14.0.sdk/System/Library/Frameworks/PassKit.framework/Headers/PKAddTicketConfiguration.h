//
//  PKAddTicketConfiguration.h
//  PassKit
//
//  Copyright © 2020 Apple, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CGImage.h>

#import <PassKit/PKAddSecureElementPassConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(watchos, tvos)
@interface PKTicketMetadata : NSObject

- (nullable instancetype)initWithProvisioningCredentialIdentifier:(NSString *)credentialIdentifier
                                      cardConfigurationIdentifier:(NSString *)cardConfigurationIdentifier
                                        sharingInstanceIdentifier:(NSString *)sharingInstanceIdentifier
                                               passThumbnailImage:(nullable CGImageRef)passThumbnailImage
                                                 ownerDisplayName:(NSString *)ownerDisplayName
                                             localizedDescription:(NSString *)localizedDescription;

@property (nonatomic, strong, readonly) NSString *credentialIdentifier;
@property (nonatomic, strong, readonly) NSString *cardConfigurationIdentifier;
@property (nonatomic, strong, readonly) NSString *sharingInstanceIdentifier;

@property (nonatomic, readonly) CGImageRef passThumbnailImage CF_RETURNS_NOT_RETAINED;

@property (nonatomic, strong, readonly) NSString *localizedDescription;
@property (nonatomic, strong, readonly) NSString *ownerDisplayName;

@end

typedef NS_ENUM(NSUInteger, PKAddTicketConfigurationPrimaryAction) {
    PKAddTicketConfigurationPrimaryActionAdd,
    PKAddTicketConfigurationPrimaryActionShare
} API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(watchos, tvos);

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(watchos, tvos)
@interface PKAddTicketConfiguration : PKAddSecureElementPassConfiguration

- (instancetype)initWithPrimaryAction:(PKAddTicketConfigurationPrimaryAction)action
                      ticketsMetadata:(NSArray<PKTicketMetadata *> *)metadata
         provisioningPolicyIdentifier:(NSString *)policyIdentifier;

- (void)preflightWithCompletion:(void (^)(BOOL))completion;

@property (nonatomic, readonly) PKAddTicketConfigurationPrimaryAction primaryAction;
@property (nonatomic, strong, readonly) NSArray<PKTicketMetadata *> *ticketsMetadata;
@property (nonatomic, strong, readonly) NSString *provisioningPolicyIdentifier;

@end

NS_ASSUME_NONNULL_END

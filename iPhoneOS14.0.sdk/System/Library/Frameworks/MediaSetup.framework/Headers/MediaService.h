//
//  MediaService.h
//  MediaSetup
//
//  Created by Veena Rajan on 1/28/20.
//  Copyright © 2020 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MSServiceAccount;

typedef NS_ENUM(NSUInteger, MSPropertyType) {
    MSPropertyType_ListeningHistory = 0
};

@interface MediaService : NSObject <NSSecureCoding, NSCopying>

- (instancetype _Null_unspecified)init NS_UNAVAILABLE;
- (instancetype _Nullable)initWithServiceAccount:(MSServiceAccount *_Nonnull)serviceAccount
								bundleIdentifier:(NSString *_Nonnull)bundleID
										   error:(NSError *_Nullable *_Nullable)error NS_DESIGNATED_INITIALIZER;

@property (nonatomic, copy, readonly, nonnull) NSString *serviceName;
@property (nonatomic, copy, readonly, nonnull) NSString *bundleIdentifier;

/// email address or username
@property (nonatomic, copy, readonly, nonnull) NSString *accountName;

/// we do not support removing AppleMusic.
@property (nonatomic, readonly, getter=isServiceRemovable) BOOL serviceRemovable;

/*!
 @see Check MediaServiceConfiguration for Methods
 */
@property (nonatomic, readonly) BOOL updateListeningHistoryEnabled;

/// Local file URL of the Service Icon
@property (nonatomic, strong, readonly, nonnull) NSURL *iconImageURL;

@end

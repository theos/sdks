//
//  MediaServiceConfiguration.h
//  MediaSetup
//
//  Created by Veena Rajan on 1/28/20.
//  Copyright © 2020 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MediaService;
@class HMHome;

/**
 Requires entitlement - com.apple.mediasetupd.client
 lookup mach service name - com.apple.mediasetupd.server
 */

@protocol MediaServiceConnectionDelegate <NSObject>
- (void)connectionInterrupted;
- (void)connectionInvalidated;
@end

@protocol MediaServiceUpdatedDelegate <MediaServiceConnectionDelegate>
@optional
- (void)serviceSettingDidUpdate:(MediaService *)service homeUserID:(NSUUID *)homeUserID;
- (void)userDidRemoveService:(MediaService *)service homeUserID:(NSUUID *)homeUserID;
@end

@interface MediaServiceConfiguration : NSObject

/*!
 @brief Initializing the service configuration on a specified queue.
 @discussion The Queue has to non-null.
 The result of passing NULL in this parameter is undefined.
 */
- (instancetype)initWithQueue:(dispatch_queue_t)queue;

/*!
 @brief Calling this defaults to using main queue
 */

+ (MediaServiceConfiguration *)sharedInstance;

/*!
 @brief Dispatch queue to invoke the handlers on.
 */
@property (nonatomic, strong, readwrite) dispatch_queue_t queue;

@property (nonatomic, weak) id <MediaServiceUpdatedDelegate> delegate;

/*!
 @brief Lists all the possible services enabled in that home
 */
- (void)getAvailableServices:(HMHome *)home completion:(void (^)(NSArray<MediaService *> *mediaServices, NSError *error))completion API_AVAILABLE(ios(14.0), tvos(14.0))API_UNAVAILABLE(macosx, watchos);

/*!
 @brief Update the value of the current default service
 */
- (void)updateDefaultMediaService:(MediaService *)mediaService forHome:(HMHome *)home completion:(void (^)(BOOL success, NSError *error))completion API_AVAILABLE(ios(14.0), tvos(14.0))API_UNAVAILABLE(macosx, watchos);

/*!
 @brief Remove the specified music service from Home
 */
- (void)removeServiceFromHome:(MediaService *)mediaService fromHome:(HMHome *)home completion:(void (^)(BOOL success, NSError *error))completion API_AVAILABLE(ios(14.0), tvos(14.0))API_UNAVAILABLE(macosx, watchos);

/*!
 @brief Returns the default service for user in particular home
 */
- (void)getDefaultMediaService:(HMHome *)home completion:(void (^)(MediaService *mediaService, NSError *error))completion API_AVAILABLE(ios(14.0))API_UNAVAILABLE(macosx, watchos, tvos);

/*!
 @brief Returns the default music service for all users in current home
 @param completion - Dictionary of homeUserID to DefaultMusicService
 */
- (void)getDefaultMediaServiceForAllUsers:(void (^)(NSDictionary<NSString *, MediaService *> *defaultMediaService, NSError *error))completion API_AVAILABLE(tvos(14.0))API_UNAVAILABLE(ios, macosx, watchos);

/*!
 @brief Returns the resolved service and which user it belongs to
 @param serviceBundleID bundleIdentifier of the service the user is requesting
 @param sharedUserID sharedUserID of the user speaking
 @param completion a completionHandler with the bundle identifier of the resolved service, and sharedUserID resolved user with an error if any
 @discussion The sharedUserID will be nil if the resolved user is the same as the identified user.
 We honor the user if they have specified a particular service name.
 If we don't find the service in the services configured in the home, we return an error @c MSError_ServiceMissingFromHome.
 If the user did not specify a service name in the request, we return the default service.
 
 This resolution logic also checks for the validity of the user's Apple Music subscription. If they don't have a valid service we look for another service/user to play from.
 
 The hierarchy user account checks : Speaker, Default Account User, Home Owner and any other member in the home.
 */

- (void)getResolvedServiceAndUser:(NSString *)serviceBundleID sharedUserID:(NSString *)sharedUserID completion:(void (^)(NSString *resolvedServiceBundleID, NSString *resolvedSharedUserID, NSError *error))completion API_AVAILABLE(tvos(14.0))API_UNAVAILABLE(ios, macosx, watchos);

@end

@interface MediaServiceConfiguration (MediaService)

/*!
 @brief Modify attributes on a service
 @param options - A dictionary of the Property (enum value) that needs to be updated with bool value
 @see MediaService.h for configurable options
 */

- (void)updateProperty:(MediaService *)mediaService forHome:(HMHome *)home withOptions:(NSDictionary<NSNumber *, NSNumber *> *)options completion:(void (^)(BOOL success, NSError *error))completion API_AVAILABLE(ios(14.0))API_UNAVAILABLE(macosx, watchos, tvos);

@end

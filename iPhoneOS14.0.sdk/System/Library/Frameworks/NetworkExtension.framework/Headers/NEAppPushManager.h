/*
 * Copyright (c) 2020 Apple Inc.
 * All rights reserved.
 */

#ifndef __NE_INDIRECT__
#error "Please import the NetworkExtension module instead of this file directly."
#endif

NS_ASSUME_NONNULL_BEGIN

/*!
* @file NEAppPushManager.h
* @discussion This file declares the NEAppPushManager API. The NEAppPushManager API is used to configure and manage a life cycle of NEAppPushProvider.
*
* This API is part of NetworkExtension.framework.
*/

#if defined(__cplusplus)
#define NEAPPPUSH_EXPORT extern "C"
#else
#define NEAPPPUSH_EXPORT extern
#endif

@protocol NEAppPushDelegate;

/*! @const NEAppPushErrorDomain The app push manager error domain */
NEAPPPUSH_EXPORT NSErrorDomain const NEAppPushErrorDomain API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 * @typedef NEAppPushManagerError
 * @abstract App Push Manager error codes
 */
typedef NS_ERROR_ENUM(NEAppPushErrorDomain, NEAppPushManagerError) {
	/*! @const NEAppPushManagerErrorConfigurationInvalid The app push configuration is invalid */
	NEAppPushManagerErrorConfigurationInvalid = 1,
	/*! @const NEAppPushManagerErrorConfigurationNotLoaded The app push configuration is not loaded */
	NEAppPushManagerErrorConfigurationNotLoaded = 2,
	/*! @const NEAppPushManagerErrorInternalError Internal error in API task handling*/
	NEAppPushManagerErrorInternalError = 3,
	/*! @const NEAppPushManagerErrorInactiveSession This operation is invalid on inactive session */
	NEAppPushManagerErrorInactiveSession = 4,
} API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 * @interface NEAppPushManager
 * @discussion The NEAppPushManager class declares a programmatic interface to configure NEAppPushProvider.
 *
 * NEAppPushManager declares methods and properties for configuring and managing life cycle of app push provider.
 *
 *
 * Instances of this class are thread safe.
 */
API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface NEAppPushManager : NSObject

/*!
 * @property matchSSIDs
 * @discussion An array of Wi-Fi SSID strings. If the SSID string of current Wi-Fi network matches with one of these strings then the NEAppPushProvider
 *	is started. It is manadatory to provide at least one SSID to start the provider. The upper limit of number of SSIDs is 10.
 */
@property (copy) NSArray<NSString *> *matchSSIDs API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 * @property providerConfiguration
 * @discussion A dictionary containing vendor-specific key-value pairs, where the data type of values must be one of the data types supported by property list. Values of user defined data
 * 	type are not supported. This dictionary is passed as-is to NEAppPushProvider when is it is started or notified for other specified reasons.
 */
@property (copy) NSDictionary<NSString *, id> *providerConfiguration API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 * @property providerBundleIdentifier
 * @discussion A string containing the bundle identifier of the NEAppPushProvider.
 */
@property (copy, nullable) NSString *providerBundleIdentifier API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 * @property delegate
 * @discussion An instance of type NEAppPushDelegate that is required to receive incoming call informarion from the provider.
*/
@property (readwrite, weak, nullable) id<NEAppPushDelegate> delegate;

/*!
 * @method loadAllFromPreferencesWithCompletionHandler:
 * @discussion This class method asynchronously reads all of the saved configurations and returns them as an array of NEAppPushManager objects.
 * @param completionHandler A block that takes an array of NEAppPushManager objects. The array passed to the block may be empty if no configurations
 * 		  were successfully read from the disk. The NSError object passed to this block will be nil if the load operation succeeded, non-nil otherwise.
 */
+ (void)loadAllFromPreferencesWithCompletionHandler:(void (^)(NSArray<NEAppPushManager *> * __nullable managers, NSError * __nullable error))completionHandler API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);


/*!
 * @method loadFromPreferencesWithCompletionHandler:
 * @discussion This method loads the saved configuration from the persistent store.
 * @param completionHandler A block that will be called when the load operation is completed. The NSError object passed to this block will be nil if the load operation succeeded, non-nil otherwise.
 */
- (void)loadFromPreferencesWithCompletionHandler:(void (^)(NSError * __nullable error))completionHandler API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 * @method removeFromPreferencesWithCompletionHandler:
 * @discussion This method removes the configuration from the persistent store.
 * @param completionHandler A block that will be called when the remove operation is completed. The NSError object passed to this block will be nil if the remove operation succeeded, non-nil otherwise.
 */
- (void)removeFromPreferencesWithCompletionHandler:(void (^)(NSError * __nullable error))completionHandler API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 * @method saveToPreferencesWithCompletionHandler:
 * @discussion This method saves the configuration in the persistent store.
 * @param completionHandler A block that will be called when the save operation is completed. The NSError object passed to this block will be nil if the save operation succeeded, non-nil otherwise.
 */
- (void)saveToPreferencesWithCompletionHandler:(void (^)(NSError * __nullable error))completionHandler API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 * @method sendMessageToProvider:message:completionHandler
 * @discussion This method allows the containing app to send a message to its provider when the user needs to perform an outgoing communication. Calling this method leads to
 * calling handleMessage method of the provider.
 * @param message A dictionary containing key-value pairs, where the data type of values must be one of the data types supported by property list.
 * @param completionHandler A block that will be called after provider calls completion handler passed to handleMessageFromAppWithOptions. A nil NSError object passed to the completion
 * handler indicates a successful operation, non-nil otherwise.
*/
- (void)sendMessageToProvider:(NSDictionary * _Nonnull)message completionHandler:(void (^)(NSError * __nullable error))completionHandler NS_SWIFT_NAME(sendMessageToProvider(message:completionHandler:)) API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 * @property localizedDescription
 * @discussion A string containing a description of the app push manager.
 */
@property (copy, nullable) NSString *localizedDescription API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 * @property enabled
 * @discussion Toggles the enabled status of the configuration. This property will be set to NO when the same app saves another configuration that overlaps with this configuration.
 */
@property (getter=isEnabled) BOOL enabled API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 * @property active
 * @discussion If set to YES, it indicates the associated configuration is in use. Use KVO to watch for changes.
 */
@property (readonly, getter=isActive) BOOL active API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

@end

/*!
 * @protocol NEAppPushDelegate
 * @discussion Delegate for NEAppPushManager.
*/

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
@protocol NEAppPushDelegate<NSObject>

@required

/*!
 * @method appPushManager:didReceiveIncomingCallWithUserInfo:userInfo
 * @discussion This delegate method is called when the provider reports incoming call using reportIncomingCommunicationWithUserInfo method.
 * @param userInfo A dictionary of custom information that the provider passes to reportIncomingCommunicationWithUserInfo method.
*/
- (void)appPushManager:(NEAppPushManager *)manager didReceiveIncomingCallWithUserInfo:(NSDictionary *)userInfo API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos);

@end

NS_ASSUME_NONNULL_END

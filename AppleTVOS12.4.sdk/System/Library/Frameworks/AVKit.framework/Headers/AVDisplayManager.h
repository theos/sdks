/*
	File:  AVDisplayManager.h
 
	Framework:  AVKit
 
	Copyright © 2017 Apple Inc. All rights reserved.
 */

#import <AVKit/AVKitDefines.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AVDisplayCriteria;

/*!
	@constant	AVDisplayManagerModeSwitchStartNotification
	@abstract	Posted when a display begins a display mode switch.
 */
AVKIT_EXTERN NSNotificationName const AVDisplayManagerModeSwitchStartNotification API_AVAILABLE(tvos(11.3));

/*!
	@constant	AVDisplayManagerModeSwitchEndNotification
	@abstract	Posted when a display mode switch has completed.
 */
AVKIT_EXTERN NSNotificationName const AVDisplayManagerModeSwitchEndNotification API_AVAILABLE(tvos(11.3));

/*!
	@constant  AVDisplayManagerModeSwitchSettingsChangedNotification
	@abstract	Posted when the user settings for display criteria matching have changed.
 */
AVKIT_EXTERN NSNotificationName const AVDisplayManagerModeSwitchSettingsChangedNotification API_AVAILABLE(tvos(11.3));


API_AVAILABLE(tvos(11.2))
@interface AVDisplayManager : NSObject

/*!
	@property	preferredDisplayCriteria
	@abstract	Allows the caller to hint which AV display mode it would prefer the display to use.
	@discussion	This value will only be honored when user settings allow it. Set to nil to guide to a display mode that is suitable for a wide range of video and non-video content (such as user interfaces or games).
 */
@property (nonatomic, copy, nullable) AVDisplayCriteria *preferredDisplayCriteria;

/*!
	@property	displayModeSwitchInProgress
	@abstract	True while clients should behave as if the display is in the middle of changing modes (i.e. the display may be temporarily blank).
	@discussion	The accuracy of this setting is dependent on the hardware, and on the nature of the mode switch. The mode switch may last several seconds longer. When displaying temporary content/user interface elements, such as hints/tips, leave them visible longer after a mode switch to ensure the user will see them. This property is observable.
 */
@property (nonatomic, readonly, getter = isDisplayModeSwitchInProgress) BOOL displayModeSwitchInProgress;

/*!
 @property	displayCriteriaMatchingEnabled
 @abstract	True if the current user settings allow display mode switches to occur.
 */
@property (nonatomic, readonly, getter = isDisplayCriteriaMatchingEnabled) BOOL displayCriteriaMatchingEnabled API_AVAILABLE(tvos(11.3));

@end

NS_ASSUME_NONNULL_END

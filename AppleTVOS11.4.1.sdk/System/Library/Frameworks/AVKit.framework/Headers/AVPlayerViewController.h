/*
	File:  AVPlayerViewController.h
	
	Framework:  AVKit
	
	Copyright © 2015-2017 Apple Inc. All rights reserved.
 */

#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AVContentProposal;
@class AVInterstitialTimeRange;
@protocol AVPlayerViewControllerDelegate;
@protocol AVPlayerViewControllerAnimationCoordinator;

/*!
	@class		AVPlayerViewController
	@abstract	AVPlayerViewController is a subclass of UIViewController that can be used to display the visual content of an AVPlayer object and the standard playback controls.
 */

API_AVAILABLE(tvos(9.0))
@interface AVPlayerViewController : UIViewController

/*!
	@property	player
	@abstract	The player from which to source the media content for the view controller.
 */
@property (nonatomic, strong, nullable) AVPlayer *player;

/*!
	@property	showsPlaybackControls
	@abstract	Whether or not the receiver shows playback controls. Default is YES.
	@discussion	Clients can set this property to NO when they don't want to have any playback controls on top of the visual content (e.g. for a game splash screen).
				This property should not be used to temporarily change the visibility of the playback controls since it will create or destroy UI elements.
 */
@property (nonatomic) BOOL showsPlaybackControls;

/*!
	@property	requiresLinearPlayback
	@abstract	Disables certain user operations, such as scanning, skipping, and scrubbing.
	@discussion	This can be used to enforce playback of mandatory content (such as legalese or advertisements).
 */
@property (nonatomic) BOOL requiresLinearPlayback;

/*!
	@property	appliesPreferredDisplayCriteriaAutomatically
	@abstract	Whether or not the receiver automatically changes the screen preferredDisplayCriteria to that of the asset being played.
	@discussion	If set, then when the receiver plays an asset full-screen the UIScreen.preferredAssetDisplayMode will be set to the preferredDisplayMode of that asset. The preferredDisplayCriteria will be reset to the defaultDisplayCriteria when full-screen playback is complete. This should not be changed during full-screen presentation unless the player or player item has been removed.
 */
@property (nonatomic) BOOL appliesPreferredDisplayCriteriaAutomatically API_AVAILABLE(tvos(11.2));

/*!
	@property	videoGravity
	@abstract	A string defining how the video is displayed within an AVPlayerLayer bounds rect.
	@discussion	Options are AVLayerVideoGravityResizeAspect, AVLayerVideoGravityResizeAspectFill and AVLayerVideoGravityResize. AVLayerVideoGravityResizeAspect is default.
 */
@property (nonatomic, copy) AVLayerVideoGravity videoGravity;

/*!
	@property	readyForDisplay
	@abstract	Boolean indicating that the first video frame has been made ready for display for the current item of the associated AVPlayer.
 */
@property (nonatomic, readonly, getter = isReadyForDisplay) BOOL readyForDisplay;

/*!
	@property	contentOverlayView
	@abstract	Use the content overlay view to add additional custom views between the video content and the controls.
 */
@property (nonatomic, readonly, nullable) UIView *contentOverlayView;

/*!
	@property	unobscuredContentGuide
	@abstract	A layout guide representing an area that will not be permanently obscured by fixed-position playback controls when they are visible.
 */
@property (nonatomic, readonly) UILayoutGuide *unobscuredContentGuide API_AVAILABLE(tvos(11.0));

/*!
	@property	delegate
	@abstract	The object that acts as the delegate of the AVPlayerViewController.
 */
@property (nonatomic, weak, nullable) id <AVPlayerViewControllerDelegate> delegate;

@end

@interface AVPlayerViewController (AVPlayerViewControllerSubtitleOptions)

/*!
	@property	allowedSubtitleOptionLanguages
	@abstract	An optional array of BCP 47 language codes to filter the subtitle options presented to the user.
	@discussion	When this property to nil (the default), all available subtitle options are presented. The "Auto" subtitle option is only available when this property is nil, and full subtitles are not required (see requiresFullSubtitles).
 */
@property (nonatomic, copy, nullable) NSArray <NSString *> *allowedSubtitleOptionLanguages; /* BCP47 language codes; nil allows all languages */

/*!
	@property	requiresFullSubtitles
	@abstract	Determines whether the user is given the option to turn off subtitles.
	@discussion	When set to YES, the subtitle options will not present "Off" or "Auto" as options, and subtitles will always be displayed (if they are available). The default is NO.
 */
@property (nonatomic) BOOL requiresFullSubtitles;

@end


/*!
	@constant	AVPlayerViewControllerSkippingBehaviorDefault
				The default skipping behavior.
	@constant	AVPlayerViewControllerSkippingBehaviorSkipItem
				Skip to next/previous item (as in a playlist).
 */
typedef NS_ENUM(NSInteger, AVPlayerViewControllerSkippingBehavior) {
	AVPlayerViewControllerSkippingBehaviorDefault = 0,
	AVPlayerViewControllerSkippingBehaviorSkipItem
};


@interface AVPlayerViewController (AVPlayerViewControllerSkippingBehavior)

/*!
	@property	skippingBehavior
	@abstract	Specifies the behavior triggered by skipping gestures. AVPlayerViewControllerSkippingBehaviorDefault is the default value.
	@discussion	Use this property to override the default skipping behavior.
 */
@property (nonatomic) AVPlayerViewControllerSkippingBehavior skippingBehavior API_AVAILABLE(tvos(10.0));

/*!
	@property	skipForwardEnabled
	@abstract	Indicates whether forward-skipping is available.
	@discussion	This property affects the appearance of the forward-skipping indicator. The behavior associated with forward-skipping is identified by the skippingBehavior property.
 */
@property (nonatomic, getter = isSkipForwardEnabled) BOOL skipForwardEnabled API_AVAILABLE(tvos(10.0));

/*!
	@property	skipBackwardEnabled
	@abstract	Indicates whether backward-skipping is available.
	@discussion	This property affects the appearance of the backward-skipping indicator. The behavior associated with backward-skipping is identified by the skippingBehavior property.
 */
@property (nonatomic, getter = isSkipBackwardEnabled) BOOL skipBackwardEnabled API_AVAILABLE(tvos(10.0));

@end


@interface AVPlayerViewController (AVPlayerViewControllerControls)

/*!
	@property	playbackControlsIncludeTransportBar
	@abstract	Whether or not the receiver shows the transport bar and related controls during user interaction. Default is YES.
	@discussion	Clients can set this property to NO, and set showsPlaybackControls to YES, to selectively prevent the transport bar from being displayed duration user interaction. Changing the value of this property does not immediately change the visiblity of the transport bar.
 */
@property (nonatomic) BOOL playbackControlsIncludeTransportBar API_AVAILABLE(tvos(11.0));

/*!
	@property	playbackControlsIncludeInfoViews
	@abstract	Whether or not the receiver shows the views for video metadata, navigation markers, and playback settings when requested by the user. Default is YES.
	@discussion	Clients can set this property to NO, and showsPlaybackControls to YES, to selectively prevent the information and setting panels from being displayed. Changing the value of this property does not immediately change the visiblity of the info views.
 */
@property (nonatomic) BOOL playbackControlsIncludeInfoViews API_AVAILABLE(tvos(11.0));

/*!
	@property	customInfoViewController
	@abstract	A view controller to be displayed alongside system-provided info and settings panels.
	@discussion	Use this property to provide client-specific content and controls in an additional info view. Implement -preferredContentSize to provide the desired view size.
 */
@property (nonatomic, nullable) UIViewController *customInfoViewController API_AVAILABLE(tvos(11.0));

@end


/*!
	@protocol	AVPlayerViewControllerDelegate
	@abstract	A protocol for delegates of AVPlayerViewController.
 */

@protocol AVPlayerViewControllerDelegate <NSObject>
@optional

/*!
	@method		playerViewControllerShouldDismiss:
	@param		playerViewController
				The player view controller.
	@abstract	The delegate can implement this method to be notified when the player view controller is about to be dismissed.
	@discussion	The player view controller will dismiss itself (with animation) if allowed and if it is possible to do so automatically. If the player view controller is embedded in another view, it may be necessary for the delegate to implement dismissal.
 */
- (BOOL)playerViewControllerShouldDismiss:(AVPlayerViewController *)playerViewController API_AVAILABLE(tvos(11.0));

/*!
	@method		playerViewControllerWillBeginDismissalTransition:
	@param		playerViewController
				The player view controller.
	@abstract	The delegate can implement this method to be notified when the player view controller is being dismissed and is about to start the dismissal transition.
 */
- (void)playerViewControllerWillBeginDismissalTransition:(AVPlayerViewController *)playerViewController API_AVAILABLE(tvos(11.0));

/*!
	@method		playerViewControllerDidEndDismissalTransition:
	@param		playerViewController
				The player view controller.
	@abstract	The delegate can implement this method to be notified when the player view controller is being dismissed and has completed the the dismissal transition.
 */
- (void)playerViewControllerDidEndDismissalTransition:(AVPlayerViewController *)playerViewController API_AVAILABLE(tvos(11.0));

/*!
	@method		playerViewController:willPresentInterstitialTimeRange:
	@param		playerViewController
				The player view controller.
	@param		interstitial
				The interstitial time range.
	@abstract	The delegate can implement this method to be notified when the player view controller is about to present interstitial content to the user.
 */
- (void)playerViewController:(AVPlayerViewController *)playerViewController willPresentInterstitialTimeRange:(AVInterstitialTimeRange *)interstitial;

/*!
	@method		playerViewController:didPresentInterstitialTimeRange:
	@param		playerViewController
				The player view controller.
	@param		interstitial
				The interstitial time range.
	@abstract	The delegate can implement this method to be notified when the player view controller has finished presenting interstitial content.
 */
- (void)playerViewController:(AVPlayerViewController *)playerViewController didPresentInterstitialTimeRange:(AVInterstitialTimeRange *)interstitial;

/*!
	@method		playerViewController:willResumePlaybackAfterUserNavigatedFromTime:toTime:
	@param		playerViewController
				The player view controller.
	@param		oldTime
				The playback time before the user began navigating.
	@param		targetTime
				The target playback time selected by the user.
	@abstract	The delegate can implement this method to be notified when the user has skipped, scrubbed, or otherwise navigated to a new time, and playback is about to start at the new time.
	@discussion	Compare with AVPlayerItemTimeJumpedNotification; this delegate method is delivered for (and only for) user-initiated changes to the playback time. If the user skips/scrubs several times before resuming playback, this method is only called once.
 */
- (void)playerViewController:(AVPlayerViewController *)playerViewController willResumePlaybackAfterUserNavigatedFromTime:(CMTime)oldTime toTime:(CMTime)targetTime;

/*!
	@method		playerViewController:timeToSeekAfterUserNavigatedFromTime:toTime:
	@param		playerViewController
				The player view controller.
	@param		oldTime
				The playback time before the user began navigating.
	@param		targetTime
				The playback time selected by the user.
	@abstract	The delegate can implement this method to be notified when the user has skipped, scrubbed, or otherwise navigated to a new time, and wants to resume playback at the target time.
	@discussion	This delegate method is delivered for (and only for) user-initiated changes to the playback time. If the user skips/scrubs several times before resuming playback, this method is only called once. This method should not be used to disable scrubbing; use the requiresLinearPlayback property of the AVPlayerViewController instead.
 */
- (CMTime)playerViewController:(AVPlayerViewController *)playerViewController timeToSeekAfterUserNavigatedFromTime:(CMTime)oldTime toTime:(CMTime)targetTime API_AVAILABLE(tvos(10.0));

/*!
	@method		playerViewController:didSelectMediaSelectionOption:inMediaSelectionGroup:
	@param		playerViewController
				The player view controller.
	@param		mediaSelectionOption
				The selected media option.
	@param		mediaSelectionGroup
				The media selection group of the selected media option.
	@abstract	The delegate can implement this method to be notified when the user has selected a option from a media selection group or deselected all of the options in the group.
	@discussion	The media selection option will be nil when subtitles are turned off.
 */
- (void)playerViewController:(AVPlayerViewController *)playerViewController didSelectMediaSelectionOption:(nullable AVMediaSelectionOption *)mediaSelectionOption inMediaSelectionGroup:(AVMediaSelectionGroup *)mediaSelectionGroup;

/*!
	@method		playerViewController:didSelectExternalSubtitleOptionLanguage:
	@param		playerViewController
				The player view controller.
	@param		language
				The BCP 47 language code.
	@abstract	The delegate can implement this method to be notified when the user has selected a specific subtitle option.
	@discussion	This method is only called for external subtitle languages specified by the externalSubtitleOptionLanguages property of AVPlayerItem (see AVKit/AVPlayerItem.h). For all other options, playerViewController:didSelectMediaSelectionOption:inMediaSelectionGroup: will be called instead. The delegate is responsible for displaying the corresponding subtitles.
 */
- (void)playerViewController:(AVPlayerViewController *)playerViewController didSelectExternalSubtitleOptionLanguage:(NSString *)language NS_SWIFT_UNAVAILABLE("External subtitle options are not supported");

/*!
	@method		skipToNextItemForPlayerViewController:
	@param		playerViewController
				The player view controller.
	@discussion	Clients that request non-default skipping behavior should implement this method. The delegate should update the playerViewController’s player to play the next player item.
 */
- (void)skipToNextItemForPlayerViewController:(AVPlayerViewController *)playerViewController API_AVAILABLE(tvos(10.0));

/*!
	@method		skipToPreviousItemForPlayerViewController:
	@param		playerViewController
				The player view controller.
	@discussion	The delegate should update the playerViewController’s player to play the previous player item.
 */
- (void)skipToPreviousItemForPlayerViewController:(AVPlayerViewController *)playerViewController API_AVAILABLE(tvos(10.0));

/*!
	@method		playerViewController:shouldPresentContentProposal:
	@abstract	Should return YES, if implemented, to allow presentation of the content proposal.
	@discussion	The delegate may wish to create a custom view controller when this is called.
 */
- (BOOL)playerViewController:(AVPlayerViewController *)playerViewController shouldPresentContentProposal:(AVContentProposal *)proposal API_AVAILABLE(tvos(10.0));

/*!
	@method		playerViewController:didAcceptContentProposal:
	@abstract	The delegate should replace the current player item with the next item.
	@discussion	Clients must implement this method when setting the nextContentProposal property of AVPlayerViewController. The delegate should create a new AVPlayerItem and update the AVPlayer or AVQueuePlayer.
 */
- (void)playerViewController:(AVPlayerViewController *)playerViewController didAcceptContentProposal:(AVContentProposal *)proposal API_AVAILABLE(tvos(10.0));

/*!
	@method		playerViewController:didRejectContentProposal:
	@abstract	The delegate should react to the user rejecting the content proposal, typically by dismissing the player view controller.
	@discussion	If the client does not implement this method, the player view controller will be dismissed.
 */
- (void)playerViewController:(AVPlayerViewController *)playerViewController didRejectContentProposal:(AVContentProposal *)proposal API_AVAILABLE(tvos(10.0));

/*!
	@method		playerViewController:willTransitionToVisibilityOfTransportBar:withAnimationCoordinator:
	@abstract	Called when the visibility of the transport bar changes.
	@param		playerViewController
				The player view controller.
	@param		visible
				Whether the transport bar will become visible.
	@param		coordinator
				An object conforming to AVPlayerViewControllerAnimationCoordinator.
	@discussion	Use the animation coordinator to synchronize animations with transport bar visibility.
 */
- (void)playerViewController:(AVPlayerViewController *)playerViewController willTransitionToVisibilityOfTransportBar:(BOOL)visible withAnimationCoordinator:(id<AVPlayerViewControllerAnimationCoordinator>)coordinator API_AVAILABLE(tvos(11.0));

@end

@protocol AVPlayerViewControllerAnimationCoordinator <NSObject>
/*!
	@method		addCoordinatedAnimations:completion:
	@abstract	Add animations to be performed alongside the playback controls visibility animation.
 */
- (void)addCoordinatedAnimations:(void (^_Nullable)(void))animations completion:(void (^_Nullable)(BOOL finished))completion API_AVAILABLE(tvos(11.0));

@end

NS_ASSUME_NONNULL_END

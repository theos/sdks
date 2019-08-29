/*
	File:  AVPlayerViewController.h
	
	Framework:  AVKit
	
	Copyright © 2015-2016 Apple Inc. All rights reserved.
 */

#import <CoreMedia/CoreMedia.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AVContentProposal;
@class AVPlayer;
@class AVMediaSelectionOption;
@class AVMediaSelectionGroup;
@class AVInterstitialTimeRange;
@protocol AVPlayerViewControllerDelegate;

/*!
	@class		AVPlayerViewController
	@abstract	AVPlayerViewController is a subclass of UIViewController that can be used to display the visual content of an AVPlayer object and the standard playback controls.
 */

NS_CLASS_AVAILABLE_IOS(9_0)
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
	@abstract	Disables certain user operations (fast forward, forward skip, and scrubbing).
	@discussion	This can be used to enforce playback of mandatory content (such as legalese or advertisements).
 */
@property (nonatomic) BOOL requiresLinearPlayback;

/*!
	@property	videoGravity
	@abstract	A string defining how the video is displayed within an AVPlayerLayer bounds rect.
	@discussion	Options are AVLayerVideoGravityResizeAspect, AVLayerVideoGravityResizeAspectFill and AVLayerVideoGravityResize. AVLayerVideoGravityResizeAspect is default.
				See <AVFoundation/AVAnimation.h> for a description of these options.
 */
@property (nonatomic, copy) NSString *videoGravity;

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
	@abstract	The default skipping behavior.
	@constant	AVPlayerViewControllerSkippingBehaviorSkipItem
	@abstract	Skip to next/previous item (as in a playlist).
 */
typedef NS_ENUM(NSInteger, AVPlayerViewControllerSkippingBehavior) {
	AVPlayerViewControllerSkippingBehaviorDefault = 0,
	AVPlayerViewControllerSkippingBehaviorSkipItem
};


@interface AVPlayerViewController (AVPlayerViewControllerSkippingBehavior)

/*
	@property skippingBehavior
	@abstract Specifies the behavior triggered by skipping gestures. AVPlayerViewControllerSkippingBehaviorDefault is the default value.
	@discussion Use this property to override the default skipping behavior.
 */
@property (nonatomic) AVPlayerViewControllerSkippingBehavior skippingBehavior NS_AVAILABLE_IOS(10_0);

/*
	@property skipForwardEnabled
	@abstract Indicates whether forward-skipping is available.
	@discussion This property affects the appearance of the forward-skipping indicator. The behavior associated with forward-skipping is identified by the skippingBehavior property.
 */
@property (nonatomic, getter = isSkipForwardEnabled) BOOL skipForwardEnabled NS_AVAILABLE_IOS(10_0);

/*
	@property skipBackwardEnabled
	@abstract Indicates whether backward-skipping is available.
	@discussion This property affects the appearance of the backward-skipping indicator. The behavior associated with backward-skipping is identified by the skippingBehavior property.
 */
@property (nonatomic, getter = isSkipBackwardEnabled) BOOL skipBackwardEnabled NS_AVAILABLE_IOS(10_0);

@end


/*!
	@protocol	AVPlayerViewControllerDelegate
	@abstract	A protocol for delegates of AVPlayerViewController.
 */

@protocol AVPlayerViewControllerDelegate <NSObject>
@optional

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
- (CMTime)playerViewController:(AVPlayerViewController *)playerViewController timeToSeekAfterUserNavigatedFromTime:(CMTime)oldTime toTime:(CMTime)targetTime NS_AVAILABLE_IOS(10_0);

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
- (void)skipToNextItemForPlayerViewController:(AVPlayerViewController *)playerViewController NS_AVAILABLE_IOS(10_0);

/*!
	@method		skipToPreviousItemForPlayerViewController:
	@param		playerViewController
				The player view controller.
	@discussion	The delegate should update the playerViewController’s player to play the previous player item.
 */
- (void)skipToPreviousItemForPlayerViewController:(AVPlayerViewController *)playerViewController NS_AVAILABLE_IOS(10_0);

/*!
	@method		playerViewController:shouldPresentContentProposal:
	@abstract	Should return YES, if implemented, to allow presentation of the content proposal.
	@discussion	The delegate may wish to create a custom view controller when this is called.
 */
- (BOOL)playerViewController:(AVPlayerViewController *)playerViewController shouldPresentContentProposal:(AVContentProposal *)proposal NS_AVAILABLE_IOS(10_0);

/*!
	@method		playerViewController:didAcceptContentProposal:
	@abstract	The delegate should replace the current player item with the next item.
	@discussion	Clients must implement this method when setting the nextContentProposal property of AVPlayerViewController. The delegate should create a new AVPlayerItem and update the AVPlayer or AVQueuePlayer.
 */
- (void)playerViewController:(AVPlayerViewController *)playerViewController didAcceptContentProposal:(AVContentProposal *)proposal NS_AVAILABLE_IOS(10_0);

/*!
	@method		playerViewController:didRejectContentProposal:
	@abstract	The delegate should react to the user rejecting the content proposal, typically by dismissing the player view controller.
	@discussion	If the client does not implement this method, the player view controller will be dismissed.
 */
- (void)playerViewController:(AVPlayerViewController *)playerViewController didRejectContentProposal:(AVContentProposal *)proposal NS_AVAILABLE_IOS(10_0);

@end

NS_ASSUME_NONNULL_END

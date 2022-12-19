/*
	File:  AVContentProposalViewController
	
	Framework:  AVKit
	
	Copyright © 2016 Apple Inc. All rights reserved.
 */

#import <AVKit/AVPlayerViewController.h>

@class AVContentProposal;
@class AVContentProposalViewController;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, AVContentProposalAction) {
	AVContentProposalActionAccept,
	AVContentProposalActionReject,
	AVContentProposalActionDefer
};

API_AVAILABLE(tvos(10.0))
@interface AVContentProposalViewController : UIViewController

/*!
	@property	contentProposal
	@abstract	The associated content proposal.
	@discussion	This property is set by the AVPlayerViewController; clients should normally not set this property.
 */
@property (nonatomic, readonly, nullable) AVContentProposal *contentProposal;

/*!
	@property	playerViewController
	@abstract	The playerViewController presenting this content proposal.
	@discussion	This property will be set during presentation of the content proposal. It may be nil at other times.
 */
@property (nonatomic, readonly, weak, nullable) AVPlayerViewController *playerViewController;

/*!
	@property	preferredPlayerViewFrame
	@abstract	Contains the desired frame of the player view during presentation of the content proposal.
	@discussion	By default, this returns the entire screen bounds, but custom view controllers may return a smaller rectangle, or CGRectZero to hide the player view completely.
 */
@property (nonatomic, readonly) CGRect preferredPlayerViewFrame;

/*!
	@property	playerLayoutGuide
	@abstract	Contains a layer guide that tracks the size and location of the player view.
	@discussion	The view controller can constrain its views using the anchors of the playerLayoutGuide, which has the same size and position as the player view.
 */
@property (nonatomic, readonly) UILayoutGuide *playerLayoutGuide;

/*!
	@property	dateOfAutomaticAcceptance
	@abstract	The date that this content proposal is scheduled to be automatically accepted.
	@discussion	When this value is nil, automatic acceptance is not scheduled. It is scheduled when the proposal is presented, and may be unscheduled if the user cancels automatic acceptance, manually accepts, or otherwise dismisses the proposal. During presentation, clients should set this property to nil to indicate that automatic acceptance has been canceled.
 */
@property (nonatomic, nullable) NSDate *dateOfAutomaticAcceptance;

/*!
	@method		dismissContentProposalForAction:animated:completion:
	@param		action
				Indicates whether the user accepts or rejects the content proposal, or has deferred the decision.
	@param		animated
				YES if animation should be employed, NO if the presentation should be dismissed immediately.
	@param		block
				An optional block that will be called when the proposal has been hidden.
	@discussion	The user is leaving the presentation. For action AVContentProposalActionDefer, the video will resume playing, or if it has ended, will replay from the beginning. For AVContentProposalActionAccept, the proposed content will begin to play; for AVContentProposalActionReject, the player view controller will be dismissed.
 */
- (void)dismissContentProposalForAction:(AVContentProposalAction)action animated:(BOOL)animated completion:(nullable void (^)(void))block;

@end

@interface AVPlayerViewController (AVContentProposalViewController)

/*!
	@property	contentProposalViewController
	@abstract	The view controller responsible for the presentation of content proposals.
	@discussion	This should be set to a custom subclass of AVContentProposalViewController.
 */
@property (nonatomic, null_resettable) __kindof AVContentProposalViewController *contentProposalViewController API_AVAILABLE(tvos(10.0));

@end

NS_ASSUME_NONNULL_END

/*
	File:  AVContentProposal.h
	
	Framework:  AVKit
	
	Copyright © 2016 Apple Inc. All rights reserved.
	
 */

#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AVMetadataItem;
@class AVPlayerViewController;
@class UIImage;


/*!
	@class		AVContentProposal
	@abstract	AVContentProposal describes content proposed to follow the current item (for example, the next episode of the same series).
 */

NS_CLASS_AVAILABLE_IOS(10_0)
@interface AVContentProposal : NSObject <NSCopying>

/*!
	@property	contentTimeForTransition
	@abstract	The time, within the bounds of the current playerItem, when the content proposal presentation should begin.
	@discussion	This commonly marks the beginning of the end credits in a television show or movie. For other content, this may be at the very end of the video. The default value, kCMTimeIndefinite, indicates that the transition should occur at the very end of the playerItem; this is equivalent to using the duration of the asset.
 */
@property (nonatomic, readonly) CMTime contentTimeForTransition;

/*!
	@property	automaticAcceptanceInterval
	@abstract	The interval between the time playback ends, and automatic acceptance of this content proposal.
	@discussion	The content proposal will display a countdown timer to reflect this value. Set this value to NAN to disable automatic acceptance, which is the default.
 */
@property (nonatomic, readwrite) NSTimeInterval automaticAcceptanceInterval;

/*!
	@property	title
	@abstract	The title of the proposed content.
 */
@property (nonatomic, readonly, copy) NSString *title;

/*!
	@property	previewImage
	@abstract	The (optional, but recommended) preview image for the proposed item (typically a frame from the proposed video, not poster artwork).
 */
@property (nonatomic, readonly, nullable) UIImage *previewImage;

/*!
	@property	URL
	@abstract	The URL for the proposed content, or nil.
	@discussion	If the URL is nil, then the AVContentProposalDelegate must handle content proposal acceptance.
 */
@property (nonatomic, readwrite, nullable) NSURL *URL;

/*!
	@property	metadata
	@abstract	Optional additional metadata for the proposed item.
	@discussion	This can be used to specify season and episode numbers.
 */
@property (nonatomic, copy) NSArray<AVMetadataItem *> *metadata;

/*!
	@method		initWithContentTimeForTransition:title:previewImage:
	@parameter	contentTimeForTransition
		The time, within the bounds of the current playerItem, when the content proposal presentation should begin.
	@parameter	title
		The title of the proposed content.
	@parameter	previewImage
		The preview image for the proposed item.
*/
- (instancetype)initWithContentTimeForTransition:(CMTime)contentTimeForTransition title:(NSString *)title previewImage:(nullable UIImage *)previewImage NS_DESIGNATED_INITIALIZER;

/* Use initWithContentTimeForTransition:title:previewImage: instead.
 */
- (instancetype)init NS_UNAVAILABLE;

@end


@interface AVPlayerItem (AVContentProposal)

/*!
	@property nextContentProposal
	@abstract The item proposed to follow the current content.
	@description When null, no content will be proposed following this item. Only one item can have proposed "next" content at a time. Clients should also implement the AVPlayerViewControllerDelegate
 method 'playerViewController:didAcceptProposal:'.
 */
@property (nonatomic, nullable) AVContentProposal *nextContentProposal NS_AVAILABLE_IOS(10_0);

@end

NS_ASSUME_NONNULL_END

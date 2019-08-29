/*
	File:  AVPlayerItem.h
	
	Framework:  AVKit
	
	Copyright © 2015-2016 Apple Inc. All rights reserved.
	
 */

#import <AVKit/AVKitDefines.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

#define AVKIT_DEPRECATED __attribute__((deprecated))

@class AVInterstitialTimeRange;
@class AVMetadataItem;
@class AVNavigationMarkersGroup;


/*!
 @constant AVKitMetadataIdentifierExternalContentIdentifier
 @abstract AVKit will publish the value of this metadata item to MPNowPlayingInfoPropertyExternalContentIdentifier.
 */
AVKIT_EXTERN NSString *const AVKitMetadataIdentifierExternalContentIdentifier NS_AVAILABLE_IOS(10_1);

/*!
 @constant AVKitMetadataIdentifierExternalUserProfileIdentifier
 @abstract AVKit will publish the value of this metadata item to MPNowPlayingInfoPropertyExternalUserProfileIdentifier.
 */
AVKIT_EXTERN NSString *const AVKitMetadataIdentifierExternalUserProfileIdentifier NS_AVAILABLE_IOS(10_1);

/*!
 @constant AVKitMetadataIdentifierPlaybackProgress
 @abstract AVKit will publish the value of this metadata item to MPNowPlayingInfoPropertyPlaybackProgress.
 */
AVKIT_EXTERN NSString *const AVKitMetadataIdentifierPlaybackProgress NS_AVAILABLE_IOS(10_1);


@interface AVPlayerItem (AVPlayerViewControllerAdditions)

/*!
	@property	navigationMarkersGroups
	@abstract	An array of navigation marker groups; each group represents one means of navigating the media content.
	@discussion	This property allows users to navigate by various criteria (for example, "Goals Scored" in a sport video; such a group would include a marker identifying when each goal is scored). When supplying chapter information, the chapters should always be the first group, and this group should have no title. A chapter navigation marker group will override the chapter information contained in the asset.
 */
@property (nonatomic, copy) NSArray<AVNavigationMarkersGroup *> *navigationMarkerGroups;

/*!
	@property	externalMetadata
	@abstract	Supplements metadata contained in the asset.
	@discussion This property is for display purposes, and will also be published as Now Playing Info. All keys defined in AVMetadataIdentifiers.h are valid. The full set of presentable metadata varies by release. The following are displayed on tvOS:
		 AVMetadataCommonIdentifierTitle
		 AVMetadataCommonIdentifierDescription
		 AVMetadataIdentifieriTunesMetadataContentRating
		 AVMetadataIdentifierQuickTimeMetadataGenre
	 Values are normally strings. Poster artwork can be provided with AVMetadataCommonIdentifierArtwork.
	 The following are not displayed, but will be published through Now Playing Info:
		 AVKitMetadataIdentifierExternalContentIdentifier
		 AVKitMetadataIdentifierExternalProfileIdentifier
		 AVKitMetadataIdentifierPlaybackProgress
 */
@property (nonatomic, copy) NSArray<AVMetadataItem *> *externalMetadata;

/*!
	@property	interstitialTimeRanges
	@abstract	An array of time ranges that identifies interstitial content. Each element must specify the time range of the media occupied by the interstitials.
	@discussion	An interstitial time range identifies a range of an asset that is collapsed into a single dot on the timeline in the user interface. Interstitial content is typically not related to the video being played (e.g., advertisements).
 */
@property (nonatomic, copy) NSArray<AVInterstitialTimeRange *> *interstitialTimeRanges;

@end

//
// The following APIs are deprecated.
// These will stop working (have no effect) in a future release.
//
@interface AVPlayerItem (AVPlayerViewControllerDeprecated)

/*!
	@property	externalSubtitleOptionLanguages
	@abstract	An array of BCP 47 language codes that supplements the list of subtitle options that will be presented to the user.
	@discussion	This list is strictly for non-standard, application-rendered subtitles, that cannot be handled by AVFoundation. Most clients should not need to set this property. The application should implement the playerViewController:didSelectExternalSubtitleOptionLanguage: method of its AVPlayerViewControllerDelegate to be notified when one of these languages has been chosen by the user.
 */
@property (nonatomic, copy) NSArray<NSString *> *externalSubtitleOptionLanguages NS_SWIFT_UNAVAILABLE("External subtitle options are not supported") AVKIT_DEPRECATED; /* BCP 47 language codes */

/*!
	@property	selectedExternalSubtitleOptionLanguage
	@abstract	Specifies BCP 47 language code of the external subtitle option language marked in the user interface.
	@discussion	If anything other than an external subtitle option is selected (including "Off"), then this property should be set to an empty string. If the value is not an empty string, it should be an element of the externalSubtitleOptionLanguages array.
 */
@property (nonatomic, copy) NSString *selectedExternalSubtitleOptionLanguage NS_SWIFT_UNAVAILABLE("External subtitle options are not supported") AVKIT_DEPRECATED; /* BCP 47 language code */

@end

NS_ASSUME_NONNULL_END

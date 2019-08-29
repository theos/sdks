/*
	File:  AVPlayerItem.h
	
	Framework:  AVKit
	
	Copyright © 2015-2017 Apple Inc. All rights reserved.
	
 */

#import <AVKit/AVKitDefines.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AVInterstitialTimeRange;
@class AVMetadataItem;
@class AVNavigationMarkersGroup;


/*!
 @constant AVKitMetadataIdentifierExternalContentIdentifier
 @abstract AVKit will publish the value of this metadata item to MPNowPlayingInfoPropertyExternalContentIdentifier.
 */
AVKIT_EXTERN NSString *const AVKitMetadataIdentifierExternalContentIdentifier API_AVAILABLE(tvos(10.1));

/*!
 @constant AVKitMetadataIdentifierExternalUserProfileIdentifier
 @abstract AVKit will publish the value of this metadata item to MPNowPlayingInfoPropertyExternalUserProfileIdentifier.
 */
AVKIT_EXTERN NSString *const AVKitMetadataIdentifierExternalUserProfileIdentifier API_AVAILABLE(tvos(10.1));

/*!
 @constant AVKitMetadataIdentifierServiceIdentifier
 @abstract AVKit will publish the value of this metadata item to MPNowPlayingInfoPropertyServiceIdentifier.
 */
AVKIT_EXTERN NSString *const AVKitMetadataIdentifierServiceIdentifier API_AVAILABLE(tvos(11.0));

/*!
 @constant AVKitMetadataIdentifierPlaybackProgress
 @abstract AVKit will publish the value of this metadata item to MPNowPlayingInfoPropertyPlaybackProgress.
 */
AVKIT_EXTERN NSString *const AVKitMetadataIdentifierPlaybackProgress API_AVAILABLE(tvos(10.1));

/*!
 @constant AVKitMetadataIdentifierExactStartDate
 @abstract The starting date for a live stream.
 @discussion This is an exact date; for rough estimates, use AVKitMetadataIdentifierApproximateStartDate.
 */
AVKIT_EXTERN NSString *const AVKitMetadataIdentifierExactStartDate API_AVAILABLE(tvos(11.0));

/*!
 @constant AVKitMetadataIdentifierApproximateStartDate
 @abstract The approximate starting date for a live stream.
 @discussion This is an estimate; when the exact date is known, use AVKitMetadataIdentifierExactStartDate. No starting time will be displayed in the user interface, but the transport time scale will be adjusted to reflect the estimate.
 */
AVKIT_EXTERN NSString *const AVKitMetadataIdentifierApproximateStartDate API_AVAILABLE(tvos(11.0));

/*!
 @constant AVKitMetadataIdentifierExactEndDate
 @abstract The ending date for a live stream.
 @discussion This is an exact date; for rough estimates, use AVKitMetadataIdentifierApproximateEndDate.
 */
AVKIT_EXTERN NSString *const AVKitMetadataIdentifierExactEndDate API_AVAILABLE(tvos(11.0));

/*!
 @constant AVKitMetadataIdentifierApproximateEndDate
 @abstract The approximate ending date for a live stream.
 @discussion This is an estimate; when the exact date is known, use AVKitMetadataIdentifierExactEndDate. No ending time will be displayed in the user interface, but the transport time scale will be adjusted to reflect the estimate.
 */
AVKIT_EXTERN NSString *const AVKitMetadataIdentifierApproximateEndDate API_AVAILABLE(tvos(11.0));


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
	 These may be used to constrain and/or label the displayed time range of live and event streams:
 		 AVKitMetadataIdentifierExactStartDate
 		 AVKitMetadataIdentifierApproximateStartDate
 		 AVKitMetadataIdentifierExactEndDate
 		 AVKitMetadataIdentifierApproximateEndDate
	 The duration that is displayed and published to Now Playing Info is modified to reflect these dates.
	 The following are not displayed, but will be published through Now Playing Info:
		 AVKitMetadataIdentifierExternalContentIdentifier
		 AVKitMetadataIdentifierExternalProfileIdentifier
		 AVKitMetadataIdentifierPlaybackProgress
		 AVKitMetadataIdentifierServiceIdentifier
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
@property (nonatomic, copy) NSArray<NSString *> *externalSubtitleOptionLanguages NS_SWIFT_UNAVAILABLE("External subtitle options are not supported") API_DEPRECATED("Not supported", tvos(9.0, 9.0)); /* BCP 47 language codes */

/*!
	@property	selectedExternalSubtitleOptionLanguage
	@abstract	Specifies BCP 47 language code of the external subtitle option language marked in the user interface.
	@discussion	If anything other than an external subtitle option is selected (including "Off"), then this property should be set to an empty string. If the value is not an empty string, it should be an element of the externalSubtitleOptionLanguages array.
 */
@property (nonatomic, copy) NSString *selectedExternalSubtitleOptionLanguage NS_SWIFT_UNAVAILABLE("External subtitle options are not supported") API_DEPRECATED("Not supported", tvos(9.0, 9.0)); /* BCP 47 language code */

@end

NS_ASSUME_NONNULL_END

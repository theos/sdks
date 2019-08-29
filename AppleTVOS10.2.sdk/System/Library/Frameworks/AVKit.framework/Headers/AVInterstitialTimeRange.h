/*
	File:  AVInterstitialTimeRange.h
	
	Framework:  AVKit
	
	Copyright © 2015-2016 Apple Inc. All rights reserved.
	
 */

#import <Foundation/Foundation.h>
#import <CoreMedia/CMTimeRange.h>

NS_ASSUME_NONNULL_BEGIN

/*!
	@class		AVInterstitialTimeRange
	@abstract	AVInterstitialTimeRange represents the time range of an interstitial.
	@discussion	An AVInterstitialTimeRange identifies a portion of an asset as an interstitial. When the asset is presented, the time range of this interstitial content will be collapsed in the user interface timeline to a single dot, scrubbing will skip over this range, and the duration will be subtracted from the time remaining in the video as displayed to the user.
 */

NS_CLASS_AVAILABLE_IOS(9_0)
@interface AVInterstitialTimeRange : NSObject <NSCopying, NSSecureCoding>

/*!
	@method		initWithTimeRange:
	@param		timeRange
				The time range of the interstitial.
	@abstract	Designated initializer.
*/
 - (instancetype)initWithTimeRange:(CMTimeRange)timeRange NS_DESIGNATED_INITIALIZER;

/*!
	@property	timeRange
	@abstract	The time range of the interstitial.
*/
@property (readonly) CMTimeRange timeRange;

@end

NS_ASSUME_NONNULL_END

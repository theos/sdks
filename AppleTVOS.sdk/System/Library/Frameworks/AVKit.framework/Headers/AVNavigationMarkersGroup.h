/*
	File:  AVNavigationMarkersGroup.h
	
	Framework:  AVKit
	
	Copyright © 2015-2016 Apple Inc. All rights reserved.
	
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AVMetadataGroup;
@class AVTimedMetadataGroup;
@class AVDateRangeMetadataGroup;

/*!
	@class		AVNavigationMarkersGroup
	@abstract	AVNavigationMarkersGroup represents a group of navigation markers.
 */

API_AVAILABLE(tvos(9.0))
@interface AVNavigationMarkersGroup : NSObject

/*!
	@method		initWithTitle:timedNavigationMarkers:
	@param		title
				The title of the group that will be displayed in the user interface.
	@param		navigationMarkers
				An array of instances of AVTimedMetadataGroup. Each element represents one marker.
	@abstract	Designated initializer.
 */
- (instancetype)initWithTitle:(nullable NSString *)title timedNavigationMarkers:(NSArray<AVTimedMetadataGroup *> *)navigationMarkers NS_DESIGNATED_INITIALIZER;

/*!
	@method		initWithTitle:dateRangeNavigationMarkers:
	@param		title
				The title of the group that will be displayed in the user interface.
	@param		navigationMarkers
				An array of instances of AVDateRangeMetadataGroup. Each element represents one marker.
	@abstract	Designated initializer. To be used with assets that have associated dates.
 */
- (instancetype)initWithTitle:(nullable NSString *)title dateRangeNavigationMarkers:(NSArray<AVDateRangeMetadataGroup *> *)navigationMarkers NS_DESIGNATED_INITIALIZER;

/*!
	@property	title
	@abstract	The title of the navigation group (optional but recommended).
 */
@property (nonatomic, readonly, nullable) NSString *title;

/*!
	@property	timedNavigationMarkers
	@abstract	An array of AVTimedMetadataGroup, each representing one navigation marker.
	@discussion	The range of each marker represents the time range of an event (if the duration is 0, it extends to the beginning of the next item, or to the end of the asset). Supported marker metadata items include AVMetadataCommonIdentifierTitle and AVMetadataCommonIdentifierDescription. This property is only valid (non-null) if the object has been initialized with timed navigation markers.
 */
@property (nonatomic, readonly, nullable) NSArray<AVTimedMetadataGroup *> *timedNavigationMarkers;

/*!
	@property	dateRangeNavigationMarkers
	@abstract	An array of AVDateRangeMetadataGroup, each representing one navigation marker.
	@discussion	Date-range markers can only be used with content that has associated dates. This property is only valid (non-null) if the object has been initialized with date-range navigation markers.
 */
@property (nonatomic, readonly, nullable) NSArray<AVDateRangeMetadataGroup *> *dateRangeNavigationMarkers;

@end

NS_ASSUME_NONNULL_END

//
//  CPPointOfInterestTemplate.h
//  CarPlay
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <CarPlay/CPTemplate.h>
#import <CarPlay/CPPointOfInterest.h>
#import <MapKit/MKGeometry.h>

@class CPPointOfInterestTemplate;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)

@protocol CPPointOfInterestTemplateDelegate <NSObject>

/**
 The user has changed the map region on the Points of Interest template. Your application
 should return an updated entity reflecting points of interest contained by the new region..
 */
@required
- (void)pointOfInterestTemplate:(CPPointOfInterestTemplate *)aTemplate didChangeMapRegion:(MKCoordinateRegion)region;

@end


@interface CPPointOfInterestTemplate : CPTemplate

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;


/**
Default Initializer for CPPointOfInterestTemplate

CPPointOfInterestTemplate display a map view with selectable points of interest.
 
 @param title Template title
 @param pointsOfInterest Points ot Interests to be presented in a map view
 @param selectedIndex  Index of selected point of interest instance referenced in the pointsOfInterest arary, use NSNotFound to indicate no selection.
*/

- (instancetype)initWithTitle:(NSAttributedString *)title pointsOfInterest:(NSArray<CPPointOfInterest*> *)pointsOfInterest selectedIndex:(NSInteger)selectedIndex NS_DESIGNATED_INITIALIZER;

/**
Template title appears on the template point of interest picker
*/
@property (nonatomic, strong) NSAttributedString *title;

/**
Update the template with a list of points of interests to dispay
 
 @param pointsOfInterest Points ot Interests to be presented in a map view
 @param selectedIndex  Index of selected point of interest instance references in the pointsOfInterest arary, use NSNotFound to indicate no selection.
*/
- (void)setPointsOfInterest:(NSArray<CPPointOfInterest*> *)pointsOfInterest selectedIndex:(NSInteger)selectedIndex;

@property (nonatomic, readonly) NSArray<CPPointOfInterest*> *pointsOfInterest;

/**
Designate an instance in the pointsOfInterest array to highlight.
*/
@property (nonatomic) NSInteger selectedIndex;

/**
 The Point of Interest template's delegate is informed of user events.
 */
@property (nullable, nonatomic, weak) id<CPPointOfInterestTemplateDelegate> pointOfInterestDelegate;

@end

NS_ASSUME_NONNULL_END

//
//  CPPointOfInterest.h
//  CarPlay
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <CarPlay/CPEntity.h>
#import <Foundation/Foundation.h>

@class MKMapItem, CPImageSet, CPEntityButton;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface CPPointOfInterest : CPEntity

/**
Default Initializer for  CPPointOfInterestTemplate

@param location Location indicator use by map annotations.
@param title Primary title for this point of interest
@param subtitle Optional: Secondary title for this point of interest
@param informativeText Optional: tertirary label for this point of interest
@param pinImageSet Optional: a custom map annotation image

CPPointOfInterest instances appear on the Point of Interest map view as both selectable items in the table view overlay and as map annotations.
*/

- (instancetype)initWithLocation:(MKMapItem *)location
                           title:(NSAttributedString *)title
                        subtitle:(nullable NSAttributedString *)subtitle
                 informativeText:(nullable NSAttributedString *)informativeText
                    pinImageSet:(nullable CPImageSet *)pinImageSet NS_DESIGNATED_INITIALIZER;


- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@property (nonatomic, readonly) MKMapItem *location;

/**
 Point of Interest table cell properties
*/
@property (nonatomic, readonly) NSAttributedString *title;
@property (nonatomic, readonly) NSAttributedString *subtitle;
@property (nonatomic, readonly) NSAttributedString *informativeText;

/**
Image used for map view annotations
*/
@property (nonatomic, strong) CPImageSet *pinImageSet;

/**
Point of Interest secondary card details
*/
@property (nonatomic, strong, nullable) NSAttributedString *detailsTitle;
@property (nonatomic, strong, nullable) NSAttributedString *detailsSubtitle;
@property (nonatomic, strong, nullable) NSAttributedString *detailsInformativeText;

/**
Point of Interest secondary card buttons
*/
@property (nullable, nonatomic, strong) CPEntityButton *primaryButton;
@property (nullable, nonatomic, strong) CPEntityButton *secondaryButton;

@end

NS_ASSUME_NONNULL_END

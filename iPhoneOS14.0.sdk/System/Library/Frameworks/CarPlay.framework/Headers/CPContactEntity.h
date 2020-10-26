//
//  CPContactEntity.h
//  CarPlay
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CarPlay/CPEntity.h>

NS_ASSUME_NONNULL_BEGIN

@class CPImageSet, CPEntityButton;

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface CPContactEntity : CPEntity

/**
Initializes a new person entity to be used with CPEntityTemplate.
*/
- (instancetype)init NS_DESIGNATED_INITIALIZER;

/**
Primary contact name
*/
@property (nonatomic, strong) NSAttributedString *name;

/**
Image representing the contact
*/
@property (nullable, nonatomic, strong) CPImageSet *imageSet;

/**
Buttons appearing at the bottoms of the Contact template
*/
@property (nullable, nonatomic, strong) NSArray<CPEntityButton *> *actionButtons;

/**
Optional: label appearing below the name
*/
@property (nullable, nonatomic, strong) NSAttributedString *subtitle;

/**
Optional: label appearing below the subtitle
*/
@property (nullable, nonatomic, strong) NSAttributedString *informativeText;

@end

NS_ASSUME_NONNULL_END

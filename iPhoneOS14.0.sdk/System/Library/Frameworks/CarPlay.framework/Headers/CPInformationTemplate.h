//
//  CPInformationTemplate.h
//  CarPlay
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <CarPlay/CPTemplate.h>
#import <CarPlay/CPDetailLabel.h>

@class CPEntityButton;

NS_ASSUME_NONNULL_BEGIN


API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface CPInformationTemplate : CPTemplate

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;


/**
Default Initializer for CPInformationTemplate

@param title Information template title
@param labels Information elements of types CPDetailLabel
@param actionButtons Optional  buttons to appear at the button of the template

CPInformationTemplate shows textual information with optional buttons
*/

- (instancetype)initWithTitle:(NSAttributedString *)title
                       labels:(nullable NSArray<CPDetailLabel *> *)labels
                actionButtons:(nullable NSArray<CPEntityButton *> *)actionButtons NS_DESIGNATED_INITIALIZER;

/**
Template top most title
*/
@property (nonatomic, strong) NSAttributedString *title;

/**
A list of label elements of type  CPDetailLabel
*/
@property (nonatomic, strong) NSArray<CPDetailLabel *> *labels;

/**
Buttons appearing at the bottoms of the Information template
*/
@property (nonatomic, strong) NSArray<CPEntityButton *> *actionButtons;

@end

NS_ASSUME_NONNULL_END

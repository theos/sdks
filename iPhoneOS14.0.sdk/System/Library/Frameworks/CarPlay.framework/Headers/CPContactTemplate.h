//
//  CPContactTemplate.h
//  CarPlay
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <CarPlay/CPTemplate.h>
#import <CarPlay/CPContactEntity.h>
#import <CarPlay/CPBarButtonProviding.h>


NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface CPContactTemplate : CPTemplate <CPBarButtonProviding>

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

/**
Default Initializer for CPContactTemplate
*/
- (instancetype)initWithContact:(CPContactEntity *)contact NS_DESIGNATED_INITIALIZER;

/**
Contact view model, setting updated instance will update template contents.
*/
@property (nonatomic, strong) CPContactEntity *contact;

@end

NS_ASSUME_NONNULL_END

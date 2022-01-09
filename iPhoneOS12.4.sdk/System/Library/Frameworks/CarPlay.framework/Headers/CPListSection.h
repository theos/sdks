//
//  CPListSection.h
//  CarPlay
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <CarPlay/CPListItem.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @c CPListSection models a single section of items appearing in a @c CPListTemplate.
 */
API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface CPListSection : NSObject <NSSecureCoding>

/**
 Create a section with a list of items and an optional header and identifier.
 */
- (instancetype)initWithItems:(NSArray<CPListItem *> *)items
                       header:(nullable NSString *)header
            sectionIndexTitle:(nullable NSString *)sectionIndexTitle;

/**
 Create a section by specifying a list of items.
 */
- (instancetype)initWithItems:(NSArray <CPListItem *> *)items;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

/**
 * Optional string to use for a header in this section.
 */
@property (nullable, nonatomic, readonly, copy) NSString *header;

/**
 An optional section index title to use in a table displaying this section.
 The system will enforce a maximum length of 1 for each section index title - in other words,
 you must choose single-character section index titles.
 */
@property (nullable, nonatomic, readonly, copy) NSString *sectionIndexTitle;

/**
 Items appearing in this section.
 */
@property (nonatomic, readonly, copy) NSArray <CPListItem *> *items;

@end

NS_ASSUME_NONNULL_END

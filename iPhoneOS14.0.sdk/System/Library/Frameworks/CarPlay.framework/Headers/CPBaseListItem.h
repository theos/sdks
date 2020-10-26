//
//  CPBaseListItem.h
//  CarPlay
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 This class isn't meant to be initialized directly; instead, please see @c CPListItem and @c CPListImageRowItem.
 */
@interface CPBaseListItem : NSObject <NSSecureCoding>

typedef void (^CPListItemHandler) (__kindof CPBaseListItem *item,     // The list item that the user selected in your list template
                                   dispatch_block_t completionBlock); // A completion block that must be called after you process the user's selection.

/**
 An optional action block, fired when the user selects this item in a list template.
 */
@property (nullable, nonatomic, copy) CPListItemHandler listItemHandler;

/**
 The primary text shown in a cell displaying this list item.
 */
@property (nullable, nonatomic, copy, readonly) NSString *text;

/**
 Any custom user info related to this item.
 */
@property (nullable, nonatomic, strong) id userInfo;

/**
 Base initializer. Only to be used by subclasses.
 */
- (instancetype)initWithText:(nullable NSString *)text;

#pragma mark - Dynamic List Item Updates

/**
 Assign a new text label to this list item, automatically reloading this item in its list template.
 */
- (void)setText:(NSString *)text API_AVAILABLE(ios(14.0));

@end 

NS_ASSUME_NONNULL_END

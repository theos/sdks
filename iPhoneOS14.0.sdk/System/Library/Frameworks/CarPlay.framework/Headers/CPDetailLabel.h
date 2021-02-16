//
//  CPDetailLabel.h
//  CarPlay
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
A line item representing a pair of side-by-side labels
*/

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface CPDetailLabel : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
Label that arranges  leading and trailing strings
*/
- (instancetype)initWithAttributedString:(NSAttributedString *)leadingAttributedString trailingAttributedString:(nullable NSAttributedString *)trailingAttributedString NS_DESIGNATED_INITIALIZER;

/**
Label that spans the provided width
*/
- (instancetype)initWithAttributedString:(NSAttributedString *)attributedString;

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) NSAttributedString *trailingAttributedString;

@end

NS_ASSUME_NONNULL_END

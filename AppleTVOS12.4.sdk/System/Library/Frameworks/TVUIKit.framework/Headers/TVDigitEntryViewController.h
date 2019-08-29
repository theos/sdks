//
//  TVDigitEntryViewController.h
//  TVUIKit
//
//  Copyright © 2017 Apple Inc. All rights reserved.
//

#import <UIKit/UIViewController.h>

NS_ASSUME_NONNULL_BEGIN

__attribute__((visibility("default"))) API_AVAILABLE(tvos(12.0)) API_UNAVAILABLE(ios, watchos)
@interface TVDigitEntryViewController : UIViewController

/**
 Entry completion handler.
 @discussion This is called when the number of digits entered reaches .numberOfDigits.
 @param entry Digits entered.
 */
@property (nonatomic, copy) void (^entryCompletionHandler)(NSString *entry);

/**
 The title text.
 @discussion This is presented at the top of the digit entry view.
 */
@property (nullable, nonatomic, copy) NSString *titleText;

/**
 The prompt text.
 @discussion This is presented immediately below titleText.
 */
@property (nullable, nonatomic, copy) NSString *promptText;

/**
 Determines whether the entered digit is immediately obsecured.
 @discussion Default is NO.
 */
@property (nonatomic, assign, getter=isSecureDigitEntry) BOOL secureDigitEntry;

/**
 Determines the number of digits asked for by the digit entry view.
 @discussion Default is 4.
 */
@property (nonatomic, assign) NSUInteger numberOfDigits; // default is 4.

/**
 Clears all the digits from the digit entry view.
 @param animated If YES the digit entry view will animate.
 */
- (void)clearEntryAnimated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END

//
//  UIInputViewController.h
//  UIKit
//
//  Copyright (c) 2014-2015 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIInputView.h>
#import <UIKit/UITextInput.h>

NS_ASSUME_NONNULL_BEGIN

@class UILexicon;

@protocol UITextDocumentProxy <UIKeyInput>

@property (nullable, nonatomic, readonly) NSString *documentContextBeforeInput;
@property (nullable, nonatomic, readonly) NSString *documentContextAfterInput;

// An app can store UITextInputMode in its document context, when user switches to the document, the host will pass the inputMode as documentInputMode to the UIInputViewController,
// which can switch to the inputMode and set primaryLanguage if it supports it.
@property (nullable, nonatomic, readonly) UITextInputMode *documentInputMode NS_AVAILABLE_IOS(10_0);

- (void)adjustTextPositionByCharacterOffset:(NSInteger)offset;

@end

NS_CLASS_AVAILABLE_IOS(8_0) @interface UIInputViewController : UIViewController <UITextInputDelegate>

@property (nullable, nonatomic, strong) UIInputView *inputView;

@property (nonatomic, readonly) id <UITextDocumentProxy> textDocumentProxy;

// The primary language of the UIInputViewController.  A BCP 47 language identifier such as en-US
// If specified, this will supersede any PrimaryLanguage in the Info.plist.
@property (nullable, nonatomic, copy) NSString *primaryLanguage;

- (void)dismissKeyboard;
- (void)advanceToNextInputMode;

// Launch inputMode list above the view when long pressing or swiping up from the view,
// Advance to nextInputMode when short tapping on the view.
// Example: [KeyboardButton addTarget:self action:@selector(handleInputModeListFromView:withEvent:) forControlEvents:UIControlEventAllTouchEvents].
- (void)handleInputModeListFromView:(nonnull UIView *)view withEvent:(nonnull UIEvent *)event NS_AVAILABLE_IOS(10_0);

// This will not provide a complete repository of a language's vocabulary.
// It is solely intended to supplement existing lexicons.
- (void)requestSupplementaryLexiconWithCompletion:(void (^)(UILexicon *))completionHandler;

@end

NS_ASSUME_NONNULL_END

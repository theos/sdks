#if !__has_include(<PassKitUI/PKPaymentButton.h>) || PK_USE_PUBLIC_PASSKIT
//
//  PKPaymentButton.h
//    PassKit
//  Copyright © 2014 Apple, Inc. All rights reserved.
//

#ifndef __PKPAYMENTBUTTON_H
#define __PKPAYMENTBUTTON_H

#import <TargetConditionals.h>

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <AppKit/AppKit.h>
#endif

#import <PassKit/PKConstants.h>
NS_ASSUME_NONNULL_BEGIN

// PKPaymentButton vends a number of Apple Pay related buttons for use inside of your app
// These buttons can be used to prompt the user to pay with Apple Pay, or set up cards for payment
// Refer to the Apple Pay developer documentation for more information on how to use this class
API_AVAILABLE(macos(11.0), ios(8.3))

#if TARGET_OS_IPHONE
@interface PKPaymentButton : UIButton
#else
@interface PKPaymentButton : NSButton
#endif

+ (instancetype)buttonWithType:(PKPaymentButtonType)buttonType style:(PKPaymentButtonStyle)buttonStyle;

- (instancetype)initWithPaymentButtonType:(PKPaymentButtonType)type paymentButtonStyle:(PKPaymentButtonStyle)style API_AVAILABLE(macos(11.0), ios(9.0)) NS_DESIGNATED_INITIALIZER;

@property (nonatomic, assign) CGFloat cornerRadius API_AVAILABLE(macos(11.0), ios(12.0));

@end

NS_ASSUME_NONNULL_END
#endif // __PKPAYMENTBUTTON_H

#else
#if !TARGET_OS_OSX 
#import <TargetConditionals.h>
#import <PassKitUI/PKPaymentButton.h>
#endif
#endif

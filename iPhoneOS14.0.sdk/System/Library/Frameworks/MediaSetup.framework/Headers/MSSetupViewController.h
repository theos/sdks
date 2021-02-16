//
//  MSSetupViewController.h
//  MediaSetup
//
//  Created by Alex Sanciangco on 2/7/20.
//  Copyright © 2020 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class MSServiceAccount;

API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(macosx, watchos, tvos)
@interface MSSetupViewController : UIViewController

/// The `serviceAccount` object associated with this view controller.
@property (nonatomic, copy, readonly) MSServiceAccount *serviceAccount;

///	Creates a view controller for setting up the service represented by the provided serviceAccount object.
/// Clients should `present` this view controller modally from the hosting view controller.
- (instancetype)initWithServiceAccount:(MSServiceAccount *_Nonnull)serviceAccount NS_DESIGNATED_INITIALIZER;

- (nullable instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;
- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

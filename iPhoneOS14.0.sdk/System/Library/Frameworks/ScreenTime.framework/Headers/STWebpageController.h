//
//  STWebpageController.h
//  ScreenTime
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_OSX
#import <AppKit/AppKit.h>
#elif TARGET_OS_IOS
#import <UIKit/UIKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(macos(10.16), ios(14.0))
#if TARGET_OS_OSX
@interface STWebpageController : NSViewController
#elif TARGET_OS_IOS
@interface STWebpageController : UIViewController
#endif

/// Suppresses the recording of web usage.
///
/// When this property is set to @c YES, the current usage recording is stopped, and no further usage is recorded in Screen Time.
@property (nonatomic) BOOL suppressUsageRecording;

@property (nullable, nonatomic, copy) NSURL *URL;
/// Whether or not there are one or more videos that are currently playing in the webpage.
@property (nonatomic) BOOL URLIsPlayingVideo NS_SWIFT_NAME(urlIsPlayingVideo);
/// Whether or not the webpage has a video displayed in a floating Picture in Picture window.
@property (nonatomic) BOOL URLIsPictureInPicture NS_SWIFT_NAME(urlIsPictureInPicture);
/// If @c URL is blocked or not.
///
/// This property can be used for pausing media and ending any Picture in Picture video. It will change at a random delay (for user privacy reasons)
/// after the URL should be blocked, and is KVO-compliant.
@property (readonly) BOOL URLIsBlocked NS_SWIFT_NAME(urlIsBlocked);

/// Changes the bundle identifier used to report web usage.
///
/// The bundle identifier defaults to @c NSBundle.mainBundle.bundleIdentifier but can be changed to facilitate the web UI being in a helper process.
@property (nonatomic, copy) NSString *bundleIdentifier;

- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

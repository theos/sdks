//
//  STWebpageController.h
//  ScreenTime
//
//  Copyright © 2019–2021 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_OSX
#import <AppKit/AppKit.h>
#elif TARGET_OS_IOS
#import <UIKit/UIKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(macos(11.0), ios(14.0))
#if TARGET_OS_OSX
@interface STWebpageController : NSViewController
#elif TARGET_OS_IOS
@interface STWebpageController : UIViewController
#endif

/// A Boolean that indicates whether the webpage controller is not recording web
/// usage.
///
/// Set to `YES` to stop recording and reporting web-usage data.
@property (nonatomic) BOOL suppressUsageRecording;

/// The URL for the webpage.
///
/// Set this value to the webpage’s URL when the user navigates to a new URL.
@property (nullable, nonatomic, copy) NSURL *URL;

/// A Boolean that indicates whether there are one or more videos currently
/// playing in the webpage.
///
/// The default value is `NO`. Set this value when the webpage starts or
/// stops playing video.
///
/// - Important: Set this value to `NO` prior to changing
/// ``ScreenTime/STWebpageController/URL`` if the new webpage at that URL stops currently
/// playing media and won’t immediately start playing new media.
@property (nonatomic) BOOL URLIsPlayingVideo NS_SWIFT_NAME(urlIsPlayingVideo);

/// A Boolean that indicates whether the webpage is currently displaying a
/// floating picture in picture window.
///
/// The default value is `NO`. Set this value when the webpage starts or
/// stops displaying a Picture in Picture window.
///
/// - Important: Set this value to `NO` prior to changing
/// ``ScreenTime/STWebpageController/URL`` if the new webpage at that URL ends all
/// currently displayed Picture in Picture windows, and won’t immediately
/// display a new one.
@property (nonatomic) BOOL URLIsPictureInPicture NS_SWIFT_NAME(urlIsPictureInPicture);

/// A Boolean that indicates whether a parent or guardian has blocked the URL.
///
/// When a parent or guardian blocks the webpage’s URL, the webpage controller
/// displays a blocking UI and then sets this property to `YES`.
@property (readonly) BOOL URLIsBlocked NS_SWIFT_NAME(urlIsBlocked);

/// Changes the bundle identifier used to report web usage.
///
/// This is only supported for web browsers that have been properly registered with Screen Time.
///
/// - Parameters:
///   - bundleIdentifier: The bundle identifier that can be changed to facilitate web usage
///     reporting for a parent web browser from one of its helper processes or extensions.
///   - error: Any error that occurred while changing the bundle identifier.
- (BOOL)setBundleIdentifier:(NSString *)bundleIdentifier error:(NSError **)error;

- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

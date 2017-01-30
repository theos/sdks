/*
 * Copyright (C) 2014 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <WebKit/WKFoundation.h>

#if WK_API_ENABLED

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WKPreferences;
@class WKProcessPool;
@class WKUserContentController;
@class WKWebsiteDataStore;

#if TARGET_OS_IPHONE
/*! @enum WKSelectionGranularity
 @abstract The granularity with which a selection can be created and modified interactively.
 @constant WKSelectionGranularityDynamic    Selection granularity varies automatically based on the selection.
 @constant WKSelectionGranularityCharacter  Selection endpoints can be placed at any character boundary.
 @discussion An example of how granularity may vary when WKSelectionGranularityDynamic is used is
 that when the selection is within a single block, the granularity may be single character, and when
 the selection is not confined to a single block, the selection granularity may be single block.
 */
typedef NS_ENUM(NSInteger, WKSelectionGranularity) {
    WKSelectionGranularityDynamic,
    WKSelectionGranularityCharacter,
} NS_ENUM_AVAILABLE_IOS(8_0);
#endif

/*! A WKWebViewConfiguration object is a collection of properties with
 which to initialize a web view.
 @helps Contains properties used to configure a @link WKWebView @/link.
 */
NS_CLASS_AVAILABLE(10_10, 8_0)
@interface WKWebViewConfiguration : NSObject <NSCopying>

/*! @abstract The process pool from which to obtain the view's web content
 process.
 @discussion When a web view is initialized, a new web content process
 will be created for it from the specified pool, or an existing process in
 that pool will be used.
*/
@property (nonatomic, strong) WKProcessPool *processPool;

/*! @abstract The preference settings to be used by the web view.
*/
@property (nonatomic, strong) WKPreferences *preferences;

/*! @abstract The user content controller to associate with the web view.
*/
@property (nonatomic, strong) WKUserContentController *userContentController;

/*! @abstract The website data store to be used by the web view.
 */
@property (nonatomic, strong) WKWebsiteDataStore *websiteDataStore NS_AVAILABLE(10_11, 9_0);

/*! @abstract A Boolean value indicating whether the web view suppresses
 content rendering until it is fully loaded into memory.
 @discussion The default value is NO.
 */
@property (nonatomic) BOOL suppressesIncrementalRendering;

/*! @abstract The name of the application as used in the user agent string.
*/
@property (nullable, nonatomic, copy) NSString *applicationNameForUserAgent NS_AVAILABLE(10_11, 9_0);

/*! @abstract A Boolean value indicating whether AirPlay is allowed.
 @discussion The default value is YES.
 */
@property (nonatomic) BOOL allowsAirPlayForMediaPlayback NS_AVAILABLE(10_11, 9_0);

#if TARGET_OS_IPHONE
/*! @abstract A Boolean value indicating whether HTML5 videos play inline
 (YES) or use the native full-screen controller (NO).
 @discussion The default value is NO.
 */
@property (nonatomic) BOOL allowsInlineMediaPlayback;

/*! @abstract A Boolean value indicating whether HTML5 videos require the
 user to start playing them (YES) or can play automatically (NO).
 @discussion The default value is YES.
 */
@property (nonatomic) BOOL requiresUserActionForMediaPlayback NS_AVAILABLE(NA, 9_0);

/*! @abstract The level of granularity with which the user can interactively
 select content in the web view.
 @discussion Possible values are described in WKSelectionGranularity.
 The default value is WKSelectionGranularityDynamic.
 */
@property (nonatomic) WKSelectionGranularity selectionGranularity;

/*! @abstract A Boolean value indicating whether HTML5 videos may play
 picture-in-picture.
 @discussion The default value is YES.
 */
@property (nonatomic) BOOL allowsPictureInPictureMediaPlayback NS_AVAILABLE(NA, 9_0);

#endif

@end

@interface WKWebViewConfiguration (WKDeprecated)

#if TARGET_OS_IPHONE
@property (nonatomic) BOOL mediaPlaybackRequiresUserAction NS_DEPRECATED(NA, NA, 8_0, 9_0, "Please use requiresUserActionForMediaPlayback");
@property (nonatomic) BOOL mediaPlaybackAllowsAirPlay NS_DEPRECATED(NA, NA, 8_0, 9_0, "Please use allowsAirPlayForMediaPlayback");
#endif

@end

NS_ASSUME_NONNULL_END

#endif

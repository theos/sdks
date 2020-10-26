//
//  STWebHistory.h
//  ScreenTime
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(macos(10.16), ios(14.0))
@interface STWebHistory : NSObject

/// Creates a web history that will delete web usage for the given bundle identifier.
- (instancetype)initWithBundleIdentifier:(NSString *)bundleIdentifier NS_DESIGNATED_INITIALIZER;
// -init uses NSBundle.mainBundle.bundleIdentifier as the bundle identifier.

/// @param url The URL for which to delete Screen Time usage history. The full URL is used, i.e. the scheme, path, et al. are significant.
- (void)deleteHistoryForURL:(NSURL *)url NS_SWIFT_NAME(deleteHistory(for:));
- (void)deleteHistoryDuringInterval:(NSDateInterval *)interval NS_SWIFT_NAME(deleteHistory(during:));
- (void)deleteAllHistory;

@end

NS_ASSUME_NONNULL_END

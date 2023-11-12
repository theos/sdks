#if (defined(USE_UIKIT_PUBLIC_HEADERS) && USE_UIKIT_PUBLIC_HEADERS) || !__has_include(<UIFoundation/NSTextList.h>)
//
//  NSTextList.h
//  Text Kit
//
//  Copyright (c) 2004-2021, Apple Inc. All rights reserved.

#import <Foundation/NSObject.h>
#import <UIKit/UIKitDefines.h>

NS_HEADER_AUDIT_BEGIN(nullability, sendability)
// NSTextList represents a stylistic format of a group of text list items belonging to the same nested level. It supports both ordered and unordered lists. The type of marker is defined by markerFormat.

typedef NS_OPTIONS(NSUInteger, NSTextListOptions) {
    NSTextListPrependEnclosingMarker API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos) = (1 << 0), // All marker strings up to the top-level parent are concatenated to the marker string used by the text list item.
};

typedef NSString * NSTextListMarkerFormat NS_TYPED_EXTENSIBLE_ENUM API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerBox API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerCheck API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerCircle API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerDiamond API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerDisc API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerHyphen API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerSquare API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerLowercaseHexadecimal API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerUppercaseHexadecimal API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerOctal API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerLowercaseAlpha API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerUppercaseAlpha API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerLowercaseLatin API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerUppercaseLatin API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerLowercaseRoman API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerUppercaseRoman API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);
UIKIT_EXTERN NSTextListMarkerFormat const NSTextListMarkerDecimal API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos);

API_AVAILABLE(macos(10.0), ios(7.0), tvos(9.0)) API_UNAVAILABLE(watchos)
@interface NSTextList : NSObject <NSSecureCoding, NSCopying>

#pragma mark Initialization
- (instancetype)initWithMarkerFormat:(NSTextListMarkerFormat)markerFormat options:(NSTextListOptions)options startingItemNumber:(NSInteger)startingItemNumber NS_DESIGNATED_INITIALIZER API_AVAILABLE(macos(13.0), ios(16.0), tvos(16.0)) API_UNAVAILABLE(watchos);
- (instancetype)initWithMarkerFormat:(NSTextListMarkerFormat)markerFormat options:(NSUInteger)options;

- (nullable instancetype) initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER;

#pragma mark Properties
@property (readonly, strong) NSTextListMarkerFormat markerFormat;
@property (readonly) NSTextListOptions listOptions;

#pragma mark Ordered List
// When > 0, it is used to define the starting value for a group of ordered text list.
@property NSInteger startingItemNumber;

// Yes if markerFormat is an ordered text list type
@property (readonly, getter=isOrdered) BOOL ordered API_AVAILABLE(macos(13.0), ios(16.0), tvos(16.0)) API_UNAVAILABLE(watchos);

#pragma mark Resolved Marker String
// Returns the marker corresponding to itemNumber. itemNumber is ignored if < 1 or isOrdered==NO.
- (NSString *)markerForItemNumber:(NSInteger)itemNumber;

@end

NS_HEADER_AUDIT_END(nullability, sendability)
#else
#import <UIFoundation/NSTextList.h>
#endif

//
//  NSParagraphStyle.h
//  UIKit
//
//  Copyright (c) 2011-2015, Apple Inc. All rights reserved.
//
// NSParagraphStyle and NSMutableParagraphStyle hold paragraph style information
// NSTextTab holds information about a single tab stop

#import <Foundation/NSObject.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/NSText.h>


NS_ASSUME_NONNULL_BEGIN

// NSTextTab
UIKIT_EXTERN NSString *const NSTabColumnTerminatorsAttributeName NS_AVAILABLE(10_0, 7_0); // An attribute for NSTextTab options.  The value is NSCharacterSet.  The character set is used to determine the tab column terminating character.  The tab and newline characters are implied even if not included in the character set.

NS_CLASS_AVAILABLE(10_0, 7_0) @interface NSTextTab : NSObject <NSCopying, NSCoding, NSSecureCoding>

+ (NSCharacterSet *)columnTerminatorsForLocale:(nullable NSLocale *)aLocale NS_AVAILABLE(10_11, 7_0); // Returns the column terminators for locale. Passing nil returns an instance corresponding to +[NSLocale systemLocale]. For matching user's formatting preferences, pass +[NSLocale currentLocale]. Can be used as the value for NSTabColumnTerminatorsAttributeName to make a decimal tab stop.

- (instancetype)initWithTextAlignment:(NSTextAlignment)alignment location:(CGFloat)loc options:(NSDictionary<NSString *, id> *)options NS_DESIGNATED_INITIALIZER; // Initializes a text tab with the text alignment, location, and options.  The text alignment is used to determine the position of text inside the tab column.


@property(readonly, NS_NONATOMIC_IOSONLY) NSTextAlignment alignment;  // Defines the alignment of tab column contents. NSTextAlignmentNatural and NSTextAlignmentJustified are resolved either NSTextAlignmentLeft or NSTextAlignmentRight based on the user's preferred language.
@property(readonly, NS_NONATOMIC_IOSONLY) CGFloat location; // Location of the tab stop inside the line fragment rect coordinate system
@property(readonly, NS_NONATOMIC_IOSONLY) NSDictionary<NSString *, id> *options; // Optional configuration attributes
@end


// NSParagraphStyle
typedef NS_ENUM(NSInteger, NSLineBreakMode) {
    NSLineBreakByWordWrapping = 0,     	// Wrap at word boundaries, default
    NSLineBreakByCharWrapping,		// Wrap at character boundaries
    NSLineBreakByClipping,		// Simply clip
    NSLineBreakByTruncatingHead,	// Truncate at head of line: "...wxyz"
    NSLineBreakByTruncatingTail,	// Truncate at tail of line: "abcd..."
    NSLineBreakByTruncatingMiddle	// Truncate middle of line:  "ab...yz"
} NS_ENUM_AVAILABLE(10_0, 6_0);


NS_CLASS_AVAILABLE(10_0, 6_0) @interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

#if UIKIT_DEFINE_AS_PROPERTIES
@property(class, nonatomic, readonly) NSParagraphStyle *defaultParagraphStyle; // This class method returns a shared and cached NSParagraphStyle instance with the default style settings, with same value as the result of [[NSParagraphStyle alloc] init].
#else
+ (NSParagraphStyle *)defaultParagraphStyle; // This class method returns a shared and cached NSParagraphStyle instance with the default style settings, with same value as the result of [[NSParagraphStyle alloc] init].
#endif

+ (NSWritingDirection)defaultWritingDirectionForLanguage:(nullable NSString *)languageName;  // languageName is in ISO lang region format

@property(readonly, NS_NONATOMIC_IOSONLY) CGFloat lineSpacing; // "Leading": distance between the bottom of one line fragment and top of next (applied between lines in the same container). This value is included in the line fragment heights in layout manager.
@property(readonly, NS_NONATOMIC_IOSONLY) CGFloat paragraphSpacing; // Distance between the bottom of this paragraph and top of next (or the beginning of its paragraphSpacingBefore, if any).
@property(readonly, NS_NONATOMIC_IOSONLY) NSTextAlignment alignment;

// The following values are relative to the appropriate margin (depending on the paragraph direction)

@property(readonly, NS_NONATOMIC_IOSONLY) CGFloat headIndent; // Distance from margin to front edge of paragraph
@property(readonly, NS_NONATOMIC_IOSONLY) CGFloat tailIndent; // Distance from margin to back edge of paragraph; if negative or 0, from other margin
@property(readonly, NS_NONATOMIC_IOSONLY) CGFloat firstLineHeadIndent; // Distance from margin to edge appropriate for text direction

@property(readonly, NS_NONATOMIC_IOSONLY) CGFloat minimumLineHeight; // Line height is the distance from bottom of descenders to top of ascenders; basically the line fragment height. Does not include lineSpacing (which is added after this computation).
@property(readonly, NS_NONATOMIC_IOSONLY) CGFloat maximumLineHeight; // 0 implies no maximum.

@property(readonly, NS_NONATOMIC_IOSONLY) NSLineBreakMode lineBreakMode;

@property(readonly, NS_NONATOMIC_IOSONLY) NSWritingDirection baseWritingDirection;

@property(readonly, NS_NONATOMIC_IOSONLY) CGFloat lineHeightMultiple; // Natural line height is multiplied by this factor (if positive) before being constrained by minimum and maximum line height.
@property(readonly, NS_NONATOMIC_IOSONLY) CGFloat paragraphSpacingBefore; // Distance between the bottom of the previous paragraph (or the end of its paragraphSpacing, if any) and the top of this paragraph.

// Specifies the threshold for hyphenation.  Valid values lie between 0.0 and 1.0 inclusive.  Hyphenation will be attempted when the ratio of the text width as broken without hyphenation to the width of the line fragment is less than the hyphenation factor.  When this takes on its default value of 0.0, the layout manager's hyphenation factor is used instead.  When both are 0.0, hyphenation is disabled.
@property(readonly, NS_NONATOMIC_IOSONLY) float hyphenationFactor;

@property(readonly,copy, NS_NONATOMIC_IOSONLY) NSArray<NSTextTab *> *tabStops NS_AVAILABLE(10_0, 7_0); // An array of NSTextTabs. Contents should be ordered by location. The default value is an array of 12 left-aligned tabs at 28pt interval
@property(readonly, NS_NONATOMIC_IOSONLY) CGFloat defaultTabInterval NS_AVAILABLE(10_0, 7_0); // The default tab interval used for locations beyond the last element in tabStops

@property(readonly, NS_NONATOMIC_IOSONLY) BOOL allowsDefaultTighteningForTruncation NS_AVAILABLE(10_11, 9_0); // Tightens inter-character spacing in attempt to fit lines wider than the available space if the line break mode is one of the truncation modes before starting to truncate. NO by default. The maximum amount of tightening performed is determined by the system based on contexts such as font, line width, etc.
@end


NS_CLASS_AVAILABLE(10_0, 6_0) @interface NSMutableParagraphStyle : NSParagraphStyle

@property(NS_NONATOMIC_IOSONLY) CGFloat lineSpacing;
@property(NS_NONATOMIC_IOSONLY) CGFloat paragraphSpacing;
@property(NS_NONATOMIC_IOSONLY) NSTextAlignment alignment;
@property(NS_NONATOMIC_IOSONLY) CGFloat firstLineHeadIndent;
@property(NS_NONATOMIC_IOSONLY) CGFloat headIndent;
@property(NS_NONATOMIC_IOSONLY) CGFloat tailIndent;
@property(NS_NONATOMIC_IOSONLY) NSLineBreakMode lineBreakMode;
@property(NS_NONATOMIC_IOSONLY) CGFloat minimumLineHeight;
@property(NS_NONATOMIC_IOSONLY) CGFloat maximumLineHeight;
@property(NS_NONATOMIC_IOSONLY) NSWritingDirection baseWritingDirection;
@property(NS_NONATOMIC_IOSONLY) CGFloat lineHeightMultiple;
@property(NS_NONATOMIC_IOSONLY) CGFloat paragraphSpacingBefore;
@property(NS_NONATOMIC_IOSONLY) float hyphenationFactor;
@property(null_resettable, copy, NS_NONATOMIC_IOSONLY) NSArray<NSTextTab *> *tabStops NS_AVAILABLE(10_0, 7_0);
@property(NS_NONATOMIC_IOSONLY) CGFloat defaultTabInterval NS_AVAILABLE(10_0, 7_0);
@property(NS_NONATOMIC_IOSONLY) BOOL allowsDefaultTighteningForTruncation NS_AVAILABLE(10_11, 9_0);

- (void)addTabStop:(NSTextTab *)anObject NS_AVAILABLE(10_0, 9_0);
- (void)removeTabStop:(NSTextTab *)anObject NS_AVAILABLE(10_0, 9_0);

- (void)setParagraphStyle:(NSParagraphStyle *)obj NS_AVAILABLE(10_0, 9_0);

@end


NS_ASSUME_NONNULL_END

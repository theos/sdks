//
//  TVContentItem.h
//  TVServices
//
//  Copyright (c) 2014-2015 Apple, Inc. All rights reserved.
//

#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <Foundation/NSData.h>
#import <Foundation/NSDate.h>
#import <Foundation/NSValue.h>
#import <Foundation/NSURL.h>
#import <TVServices/TVContentIdentifier.h>
#import <CoreGraphics/CoreGraphics.h>


NS_ASSUME_NONNULL_BEGIN

/*!
 @class         TVContentItem
 @abstract      An object describing a piece or group of content.
 @discussion    Most properties are optional, and indeed some properties
                will not apply to all individual items or groups or types
                of content.
 */
NS_CLASS_AVAILABLE_IOS(9_0)
@interface TVContentItem : NSObject <NSCopying, NSSecureCoding>

/*!
 @property      contentIdentifier
 @abstract      The unique content identifier of this item.
 */
@property (nonatomic, copy, readonly) TVContentIdentifier *contentIdentifier;

/*!
 @property      imageURL
 @abstract      A URL of an image to display for this content item.
 @discussion    In tvOS 11.0 and later, use setImageURL:forTraits: to set URLs
                for specific system states. If no URLs are set for trait
                combinations the system understands, the value of this
                property will be used as a last resort, for backwards
                compatibility with older tvOS.
 */
@property (nonatomic, copy, nullable) NSURL *imageURL NS_DEPRECATED_IOS(9_0, 11_0, "Use setImageURL:forTraits: to set image URLs into TVContentItem.");

/*!
 @enum          TVContentItemImageTrait
 @abstract      Option bits for imageURLForTraits: and setImageURL:forTraits:.
 @discussion    In Objective C, use the bitwise OR (|) operator to combine
                options together. Apple will not define values for the upper
                16 bits of this 64-bit type (that is, 1<<48 and higher).
 */
typedef NS_OPTIONS(NSUInteger, TVContentItemImageTrait) {
    
    // Specify at most one user interface style.
    // If there is no URL for the trait describing the system's current state,
    // the system will try the other one, then try with no traits (0).
    TVContentItemImageTraitUserInterfaceStyleLight = (1 << 8),
    TVContentItemImageTraitUserInterfaceStyleDark = (2 << 8),

    // If there is no URL for the trait combination describing the system's
    // current state, the system will try the other scale, then try with the
    // current interface style alone, then try the current scale with the
    // other user interface style, then try the other scale with the other
    // user interface style, then try the other user interface style alone,
    // then try with no traits (0).  (Thus, the URL for zero traits (0), if
    // present, matches when a more specific URL hasn't already been found.)
    //
    // That is, the system tries all of the newest trait dimension's values,
    // and none (for backward compatibility), with the current system state
    // of the other older traits, then begins following the fallback pattern
    // of the older trait dimensions, trying every value of the new trait
    // dimension at each step.
    //
    // The UserInterfaceStyle trait dimension is the eldest.

    // Specify at most one scale.
    TVContentItemImageTraitScreenScale1x = (1 << 12), // implied sRGB gamut
    TVContentItemImageTraitScreenScale2x = (2 << 12), // implied P3 gamut

} API_AVAILABLE(tvos(11.0));

/*!
 @method        imageURLForTraits:
 @abstract      Retrieve a previously set image URL.
 @discussion    Returns nil if no URL has been set for the given combination
                of trait options.
 */
- (nullable NSURL *)imageURLForTraits:(TVContentItemImageTrait)traits API_AVAILABLE(tvos(11.0));

/*!
 @method        setImageURL:forTraits:
 @abstract      Set URLs of images to display for this content item.
 @discussion    The aURL parameter can be nil to remove a previously set
                value for the given trait combination.
 */
- (void)setImageURL:(nullable NSURL *)aURL forTraits:(TVContentItemImageTrait)traits API_AVAILABLE(tvos(11.0));

/*!
 @enum          TVContentItemImageShape
 @abstract      Values for the imageShape property.
 */
typedef NS_ENUM(NSInteger, TVContentItemImageShape) {
    TVContentItemImageShapeNone = 0,
    TVContentItemImageShapePoster,	// ~ 2 : 3
    TVContentItemImageShapeSquare,	// ~ 1 : 1
    TVContentItemImageShapeSDTV,	// ~ 4 : 3
    TVContentItemImageShapeHDTV,	// ~ 16 : 9
    TVContentItemImageShapeWide,	// ~ 8 : 3
    TVContentItemImageShapeExtraWide,	// ~ 87 : 28
};

/*!
 @property      imageShape
 @abstract      A TVContentItemImageShape value describing the intended aspect
                ratio or shape of the image.
 @discussion    For Top Shelf purposes: the subset of values which are valid in
                in this property, for TVContentItems in the topShelfItems property
                of the TVTopShelfProvider, depends on the value of the topShelfStyle
                property of the TVTopShelfProvider:
                    TVTopShelfContentStyleInset:
                        valid: TVContentItemImageShapeExtraWide
                    TVTopShelfContentStyleSectioned:
                        valid: TVContentItemImageShapePoster
                        valid: TVContentItemImageShapeSquare
                        valid: TVContentItemImageShapeHDTV
                When the value of this property is not valid for the Top Shelf style,
                the system reserves the right to scale the image in any way.
 */
@property (nonatomic) TVContentItemImageShape imageShape;

/*!
 @property      title
 @abstract      The localized string title of the item.
 @discussion    String should be localized into the current user's locale.
                This is the only property, other than topShelfItems, which is
                used from a TVContentItem representing a section.
 */
@property (nonatomic, copy, nullable) NSString *title;

/*!
 @property      lastAccessedDate
 @abstract      Date at which the user last accessed (whatever that might mean
                the particular content described by this content item) this item.
 @discussion    A typical use would be the date at which the user last played
                the item, or played a subitem within the item (if this item
                represents a group of items), for content types where "playing"
                applies. This should not be when the user just looked at an item.
 */
@property (nonatomic, copy, nullable) NSDate *lastAccessedDate;

/*!
 @property      expirationDate
 @abstract      Date at which the user will no longer be able to access the item.
 */
@property (nonatomic, copy, nullable) NSDate *expirationDate;

/*!
 @property      creationDate
 @abstract      Date at which the content item was created, or was first
                broadcast, or other such kind of origination date.
 */
@property (nonatomic, copy, nullable) NSDate *creationDate;

/*!
 @property      badgeCount
 @abstract      A badging integer for this item.
 @discussion    The number is interpreted as a positive integer. Not all UI uses
                of content items display badges.
 */
@property (nonatomic, copy, nullable) NSNumber *badgeCount;

/*!
 @property      duration
 @abstract      The time length of this item.
 @discussion    The number is interpreted as a double number of seconds.
 */
@property (nonatomic, copy, nullable) NSNumber *duration;

/*!
 @property      currentPosition
 @abstract      The last time index the user was at in playing this item.
 @discussion    The number is interpreted as a double number of seconds.
 */
@property (nonatomic, copy, nullable) NSNumber *currentPosition;

/*!
 @property      hasPlayedToEnd
 @abstract      A boolean indicating whether the user can be considered to have
                finished this item.
 @discussion    The number is interpreted as a boolean.
 */
@property (nonatomic, copy, nullable) NSNumber *hasPlayedToEnd;

/*!
 @property      playURL
 @abstract      A URL for the system to open to cause the application (which
                created this content item) to begin playing the item, at the
                user's currentPosition.
 @discussion    When opened (the app receives the UIApplication delegate method),
                the application should proceed directly to playback without any
                prompting for other information or confirmation panels or other
                UI, if at all possible.
 */
@property (nonatomic, copy, nullable) NSURL *playURL;

/*!
 @property      displayURL
 @abstract      A URL for the system to open to cause the application (which
                created this content item) to display a description screen
                for the item.
 @discussion    When opened (the app receives the UIApplication delegate method),
                the application should proceed directly to displaying the
                description of the item without any prompting for other information
                or confirmation panels or other UI, if at all possible.
 */
@property (nonatomic, copy, nullable) NSURL *displayURL;

/*!
 @property      topShelfItems
 @abstract      An array of TVContentItems which are the items of a section.
 @discussion    If non-nil, this item will be interpreted as a section item in
                main menu Top Shelf usage contexts. The title property is the
                other interesting property in that case, though other properties
                of this item may be also interpreted by the system in the future.
 */
@property (nonatomic, copy, nullable) NSArray <TVContentItem *> *topShelfItems;


- (nullable instancetype)init NS_UNAVAILABLE;
- (nullable instancetype)initWithContentIdentifier:(TVContentIdentifier *)ident NS_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

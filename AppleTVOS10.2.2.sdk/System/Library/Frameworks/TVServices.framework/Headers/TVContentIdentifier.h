//
//  TVContentIdentifier.h
//  TVServices
//
//  Copyright (c) 2014-2015 Apple, Inc. All rights reserved.
//

#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>


NS_ASSUME_NONNULL_BEGIN

/*!
 @class         TVContentIdentifier
 @abstract		Represents unique identifiers for TVContentItems.
 @discussion    A content identifier is represented by a string, with an optional
                hierarchical structure of other content identifiers. A content identifier
                should be unique to a particular Content Item, across ALL past, current,
                and future content items. A content identifier should be durable: it
                should be able to be saved by itself, and an item should be able to be
                identified by it, unambiguously, in the future (though the user may not
                have access to that item). The uniqueness of a content identifier comes
                from the uniqueness of its two parts: its identifier string and its
                container (another content identifier). The identifier property of
                content identifiers need not be univerally unique across all the app's
                content identifiers, if items have container properties which are
                themselves unique. However, developers should then be careful to not
                be confused by equal identifier strings in content identifiers with
                different container hierarchies.
 */
NS_CLASS_AVAILABLE_IOS(9_0)
@interface TVContentIdentifier : NSObject <NSCopying, NSSecureCoding>

/*!
 @property      identifier
 @abstract      The string contents of this identifier.
 @discussion    Any internal format or structure within the string is up to the application.
 */
@property (nonatomic, readonly, copy) NSString *identifier;

/*!
 @property      container
 @abstract      Optional content identifier for the next level up in the logical structure
                which this content identifier is identifying a part of.
 @discussion    Typically this would be the content identifier for the next larger grouping
                that the content, identified by this content identifier, is part of. For
                example, a podcast episode could be part of a larger podcast season, which
                would be part of the entire podcast series; all three of those layers –
                episodes, seasons, and the series – would need their own unique identifiers.
 */
@property (nonatomic, readonly, copy, nullable) TVContentIdentifier *container;


- (nullable instancetype)init NS_UNAVAILABLE;
- (nullable instancetype)initWithIdentifier:(NSString *)identifier container:(TVContentIdentifier *__nullable)container NS_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

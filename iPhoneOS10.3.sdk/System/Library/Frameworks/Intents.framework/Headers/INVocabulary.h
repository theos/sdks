//
//  INVocabulary.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, INVocabularyStringType) {
    /// The name of a contact as a person will say it, for example “Jon Smith”, “Apple”.
    INVocabularyStringTypeContactName = 1,

    /// The name of a group of contacts as a person will say it, for example "Tahoe Trip".
    INVocabularyStringTypeContactGroupName,

    /// A keyword associated with an image or images, for example "food", "Vacation".
    INVocabularyStringTypePhotoTag = 100,

    /// The name for a photograph album, for example "WWDC 2015 Karaoke".
    /// You may find that INVocabularyStringTypePhotoTag is a better match for concepts that are similar to, but not exactly, albums.
    INVocabularyStringTypePhotoAlbumName,

    /// The name a user has created for a workout, for example  “Half Marathon”, “Kettlebell exercise”
    INVocabularyStringTypeWorkoutActivityName = 200,

    /// The name of a vehicle configuration profile, for example "Roadtrip", "Rally", "Good Weather".
    /// For use by automaker apps that are enabled to work with CarPlay <https://developer.apple.com/carplay/>.
    INVocabularyStringTypeCarProfileName = 300,
    
    /// The name of a vehicle as a person will say it, for example “BMW”, “My Convertible”.
    INVocabularyStringTypeCarName NS_ENUM_AVAILABLE_IOS(10_3),
    
    /// The name of an organization to pay as a person will say it, for example “PG&E”, “Comcast”.
    INVocabularyStringTypePaymentsOrganizationName NS_ENUM_AVAILABLE_IOS(10_3) = 400,
    
    /// The name of an account nick name as a person will say it, for example “Checking”, “Rainy day savings”.
    INVocabularyStringTypePaymentsAccountNickname NS_ENUM_AVAILABLE_IOS(10_3),
} __WATCHOS_PROHIBITED __TVOS_PROHIBITED;

API_AVAILABLE(ios(10.0)) API_UNAVAILABLE(macosx, watchos, tvos)
@interface INVocabulary : NSObject

+ (instancetype)sharedVocabulary;

/// Replaces all vocabulary strings already set for the given type.
/// Strings should be sorted by their expected importance to the user, in descending order.
/// There is no guarantee that every provided string will be used, but preference is given to strings at the beginning of the set.
/// Any strings larger than 1024 bytes when encoded as UTF-16 (roughly 500 characters) will be discarded.
- (void)setVocabularyStrings:(NSOrderedSet<NSString *> *)vocabulary ofType:(INVocabularyStringType)type NS_EXTENSION_UNAVAILABLE("INVocabulary is not available to extensions. The main app is responsible for providing all vocabulary.");

/// Removes all vocabulary strings for every INVocabularyStringType the calling app has previously registered.
- (void)removeAllVocabularyStrings NS_EXTENSION_UNAVAILABLE("INVocabulary is not available to extensions. The main app is responsible for providing all vocabulary.");

@end

NS_ASSUME_NONNULL_END

//
//  INPerson.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@class INImage;
@class INPersonHandle;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(macosx(10.12), ios(10.0))
@interface INPerson : NSObject <NSCopying, NSSecureCoding>

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithPersonHandle:(INPersonHandle *)personHandle
                nameComponents:(nullable NSPersonNameComponents *)nameComponents
                   displayName:(nullable NSString *)displayName
                         image:(nullable INImage *)image
             contactIdentifier:(nullable NSString *)contactIdentifier
              customIdentifier:(nullable NSString *)customIdentifier NS_DESIGNATED_INITIALIZER;

// The identity of the person in the application (e.g. email address, phone number, user handle, etc.)
@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *handle  NS_DEPRECATED(10_12, 10_12, 10_0, 10_0, "Use personHandle instead");

// The identity of the person in the application
@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) INPersonHandle *personHandle;

// Returns the person's name components if this was initialized with them
@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSPersonNameComponents *nameComponents;

// This will return either the displayName if non-nil, else the formatted nameComponents, else the handle, else an empty string
@property (readonly, copy, NS_NONATOMIC_IOSONLY) NSString *displayName;

// Returns an image for the person.
@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) INImage *image;

// Reference to this person, if present in the system's Contacts store
@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *contactIdentifier;

// This property can be set to the app's identifier for this person
@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSString *customIdentifier;

@end

@interface INPerson (INPersonCreation)

//  This is the preferred convenience initializer if the app knows the name components of the person (e.g. given name, family name, etc).
- (instancetype)initWithHandle:(NSString *)handle
                nameComponents:(NSPersonNameComponents *)nameComponents
             contactIdentifier:(nullable NSString *)contactIdentifier NS_DEPRECATED(10_12, 10_12, 10_0, 10_0, "Use the designated initializer instead");

// Use this convenience initializer if the person's name is unknown
- (instancetype)initWithHandle:(NSString *)handle
                   displayName:(nullable NSString *)displayName
             contactIdentifier:(nullable NSString *)contactIdentifier NS_DEPRECATED(10_12, 10_12, 10_0, 10_0, "Use the designated initializer instead");

- (instancetype)initWithHandle:(NSString *)handle
                nameComponents:(nullable NSPersonNameComponents *)nameComponents
                   displayName:(nullable NSString *)displayName
                         image:(nullable INImage *)image
             contactIdentifier:(nullable NSString *)contactIdentifier NS_DEPRECATED(10_12, 10_12, 10_0, 10_0, "Use the designated initializer instead");

@end

typedef NS_ENUM(NSInteger, INPersonSuggestionType) {
    INPersonSuggestionTypeSocialProfile = 1,
    INPersonSuggestionTypeInstantMessageAddress
};

@interface INPerson (INInteraction)

// If your application has other representations for the person's handle, you can supply it for INInteraction donation
@property (readonly, copy, nullable, NS_NONATOMIC_IOSONLY) NSArray<INPersonHandle *> *aliases;

// What Contact property this INInteraction donation should be suggested as when this person is matched to a contact in the system's Contacts store.
@property (readonly, NS_NONATOMIC_IOSONLY) INPersonSuggestionType suggestionType;

- (instancetype)initWithPersonHandle:(INPersonHandle *)personHandle
                nameComponents:(nullable NSPersonNameComponents *)nameComponents
                   displayName:(nullable NSString *)displayName
                         image:(nullable INImage *)image
             contactIdentifier:(nullable NSString *)contactIdentifier
              customIdentifier:(nullable NSString *)customIdentifier
                       aliases:(nullable NSArray<INPersonHandle *> *)aliases
                suggestionType:(INPersonSuggestionType)suggestionType;

@end

NS_ASSUME_NONNULL_END

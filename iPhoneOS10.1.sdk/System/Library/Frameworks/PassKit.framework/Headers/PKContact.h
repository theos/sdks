//
//  PKContact.h
//
//  Copyright © 2015 Apple, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Contacts/Contacts.h>

NS_CLASS_AVAILABLE_IOS(9_0) __WATCHOS_AVAILABLE(3.0)
@interface PKContact : NSObject

@property (nonatomic, strong, nullable) NSPersonNameComponents *name;

@property (nonatomic, strong, nullable) CNPostalAddress *postalAddress;
@property (nonatomic, strong, nullable) NSString        *emailAddress;
@property (nonatomic, strong, nullable) CNPhoneNumber   *phoneNumber;

// CNPostalAddress does not support a distinct sublocality field. Some regions require a distinct sublocality,
// and the Apple Pay sheet will prompt users to input it. Access the sublocality value here.
@property (nonatomic, retain, nullable) NSString        *supplementarySubLocality NS_AVAILABLE_IOS(9_2);

@end

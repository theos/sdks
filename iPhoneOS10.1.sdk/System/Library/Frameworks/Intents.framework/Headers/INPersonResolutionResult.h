//
//  INPersonResolutionResult.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INIntentResolutionResult.h>

@class INPerson;

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(macosx(10.12), ios(10.0))
@interface INPersonResolutionResult : INIntentResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed with a given person. The resolvedPerson need not be identical to the input person. If the app extension wants to continue with a 'nil' value, it must use +notRequired.
+ (instancetype)successWithResolvedPerson:(INPerson *)resolvedPerson NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to disambiguate between the provided people.
+ (instancetype)disambiguationWithPeopleToDisambiguate:(NSArray<INPerson *> *)peopleToDisambiguate NS_SWIFT_NAME(disambiguation(with:));

// This resolution result is to ask Siri to confirm if this is the person with which the user wants to continue.
+ (instancetype)confirmationRequiredWithPersonToConfirm:(nullable INPerson *)personToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

@end

NS_ASSUME_NONNULL_END

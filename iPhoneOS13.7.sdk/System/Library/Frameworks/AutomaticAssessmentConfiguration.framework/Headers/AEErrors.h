//
//  AEErrors.h
//  AutomaticAssessmentConfiguration
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(13.4), macos(10.15.4))
API_UNAVAILABLE(macCatalyst)
extern NSErrorDomain const AEAssessmentErrorDomain;

API_AVAILABLE(ios(13.4), macos(10.15.4))
API_UNAVAILABLE(macCatalyst)
typedef NS_ERROR_ENUM(AEAssessmentErrorDomain, AEAssessmentErrorCode) {
    AEAssessmentErrorUnknown = 1
};

NS_ASSUME_NONNULL_END

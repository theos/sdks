//
//  AEErrors.h
//  AutomaticAssessmentConfiguration
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <AutomaticAssessmentConfiguration/AEVisibility.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

AE_VISIBLE NSErrorDomain const AEAssessmentErrorDomain API_AVAILABLE(ios(13.4), macos(10.15.4), macCatalyst(14.0));

API_AVAILABLE(ios(13.4), macos(10.15.4), macCatalyst(14.0))
typedef NS_ERROR_ENUM(AEAssessmentErrorDomain, AEAssessmentErrorCode) {
    AEAssessmentErrorUnknown = 1,
    AEAssessmentErrorUnsupportedPlatform API_AVAILABLE(ios(16.0), macos(13.0), macCatalyst(16.0)) = 2
};

NS_ASSUME_NONNULL_END

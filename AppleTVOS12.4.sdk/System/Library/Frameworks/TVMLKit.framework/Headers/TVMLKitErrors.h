//
//  TVMLKitErrors.h
//  TVMLKit
//
//  Copyright (c) 2014-2015 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TVMLKit/TVMLKitDefines.h>

NS_ASSUME_NONNULL_BEGIN

TV_EXTERN NSString* const TVMLKitErrorDomain NS_AVAILABLE_IOS(9_0);

/*
 NSError codes for the TVMLKitErrorDomain
 */
typedef NS_ENUM(NSInteger, TVMLKitError) {
    TVMLKitErrorUnknown = 1,

    TVMLKitErrorInternetUnavailable,
    TVMLKitErrorFailedToLaunch,
    
    TVMLKitErrorLast
} NS_ENUM_AVAILABLE_IOS(9_0);

NS_ASSUME_NONNULL_END
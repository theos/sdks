//
//  MLModelCollectionStatus.h
//  CoreML
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MLModelCollectionStatus) {
    MLModelCollectionStatusCouldNotDetermine = 0,
    MLModelCollectionStatusSyncing = 1,
    MLModelCollectionStatusReady = 2,
} API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0), tvos(14.0));

NS_ASSUME_NONNULL_END

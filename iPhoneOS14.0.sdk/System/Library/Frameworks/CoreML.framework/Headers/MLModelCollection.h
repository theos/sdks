//
//  MLModelCollection.h
//  CoreML
//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreML/MLModelCollectionEntry.h>
#import <CoreML/MLModelCollectionStatus.h>
#import <CoreML/MLExport.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * MLModelCollection
 *
 * Construct a model collection.
 * Returns a model collection or nil if there is an error.
 */
API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0), tvos(14.0))
ML_EXPORT
@interface MLModelCollection : NSObject

/// The identifier of the model collection you want to access, as configured in CloudKit. This parameter must not be nil.
@property (readonly, nonatomic) NSString *identifier;

/// The status model collection.
@property (readonly, nonatomic) MLModelCollectionStatus status;

/// Whether the model collection is configured to sync with CloudKit.
@property (readwrite, nonatomic) BOOL isSynchronizationEnabled;

/// Information about the models downloaded in the collection, or nil if the collection has not been downloaded.
@property (readonly, nonatomic, nullable) NSDictionary<NSString *, MLModelCollectionEntry *> *entries;

+ (instancetype)modelCollectionWithIdentifier:(NSString *)identifier;

- (instancetype)init NS_UNAVAILABLE;

+ (id)new NS_UNAVAILABLE;

@end

/// Notification posted when the model collection has changed.
ML_EXPORT
NSNotificationName const MLModelCollectionDidChangeNotification;

NS_ASSUME_NONNULL_END

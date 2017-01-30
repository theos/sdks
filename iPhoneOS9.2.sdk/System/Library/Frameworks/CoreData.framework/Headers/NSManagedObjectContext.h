/*
    NSManagedObjectContext.h
    Core Data
    Copyright (c) 2004-2015, Apple Inc.
    All rights reserved.
*/

#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSDate.h>
#import <Foundation/NSLock.h>
#import <CoreData/CoreDataDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class NSError;
@class NSFetchRequest;
@class NSPersistentStoreRequest;
@class NSPersistentStoreResult;
@class NSManagedObject;
@class NSManagedObjectID;
@class NSPersistentStore;
@class NSPersistentStoreCoordinator;
@class NSPropertyDescription;
@class NSUndoManager;
@class NSNotification;

// Notifications immediately before and immediately after the context saves.  The user info dictionary contains information about the objects that changed and what changed
COREDATA_EXTERN NSString * const NSManagedObjectContextWillSaveNotification NS_AVAILABLE(10_5, 3_0);
COREDATA_EXTERN NSString * const NSManagedObjectContextDidSaveNotification NS_AVAILABLE(10_4, 3_0);

// Notification when objects in a context changed:  the user info dictionary contains information about the objects that changed and what changed
COREDATA_EXTERN NSString * const NSManagedObjectContextObjectsDidChangeNotification NS_AVAILABLE(10_4, 3_0);    

// User info keys for NSManagedObjectContextObjectsDidChangeNotification:  the values for these keys are sets of managed objects
COREDATA_EXTERN NSString * const NSInsertedObjectsKey NS_AVAILABLE(10_4, 3_0);
COREDATA_EXTERN NSString * const NSUpdatedObjectsKey NS_AVAILABLE(10_4, 3_0);
COREDATA_EXTERN NSString * const NSDeletedObjectsKey NS_AVAILABLE(10_4, 3_0);

COREDATA_EXTERN NSString * const NSRefreshedObjectsKey NS_AVAILABLE(10_5, 3_0);
COREDATA_EXTERN NSString * const NSInvalidatedObjectsKey NS_AVAILABLE(10_5, 3_0);

// User info keys for NSManagedObjectContextObjectsDidChangeNotification:  the values for these keys are arrays of objectIDs
COREDATA_EXTERN NSString * const NSInvalidatedAllObjectsKey NS_AVAILABLE(10_5, 3_0); // All objects in the context have been invalidated

// Default policy for all managed object contexts - save returns with an error that contains the object IDs of the objects that had conflicts(NSInsertedObjectsKey, NSUpdatedObjectsKey).
COREDATA_EXTERN id NSErrorMergePolicy NS_AVAILABLE(10_4, 3_0);

// This singleton policy merges conflicts between the persistent store's version of the object and the current in memory version. The merge occurs by individual property. For properties which have been changed in both the external source and in memory, the external changes trump the in memory ones.
COREDATA_EXTERN id NSMergeByPropertyStoreTrumpMergePolicy NS_AVAILABLE(10_4, 3_0);    

// This singleton policy merges conflicts between the persistent store's version of the object and the current in memory version. The merge occurs by individual property. For properties which have been changed in both the external source and in memory, the in memory changes trump the external ones.
COREDATA_EXTERN id NSMergeByPropertyObjectTrumpMergePolicy NS_AVAILABLE(10_4, 3_0);    

// This singleton policy overwrites all state for the changed objects in conflict The current object's state is pushed upon the persistent store.
COREDATA_EXTERN id NSOverwriteMergePolicy NS_AVAILABLE(10_4, 3_0);    

// This singleton policy discards all state for the changed objects in conflict. The persistent store's version of the object is used.
COREDATA_EXTERN id NSRollbackMergePolicy NS_AVAILABLE(10_4, 3_0);    

typedef NS_ENUM(NSUInteger, NSManagedObjectContextConcurrencyType) {
    NSConfinementConcurrencyType  NS_ENUM_DEPRECATED(10_4,10_11,3_0,9_0, "Use another NSManagedObjectContextConcurrencyType") = 0x00,
    NSPrivateQueueConcurrencyType		= 0x01,
    NSMainQueueConcurrencyType			= 0x02
} NS_ENUM_AVAILABLE(10_7,  5_0);

NS_CLASS_AVAILABLE(10_4,3_0)
@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {
@private
  volatile id _queueOwner;
  void *_dispatchQueue;
  void* _reserved1;
  int32_t _spinLock;
  id _parentObjectStore;
  struct _managedObjectContextFlags {
      unsigned int _registeredForCallback:1;
      unsigned int _propagatesDeletesAtEndOfEvent:1;
      unsigned int _exhaustiveValidation:1;
      unsigned int _processingChanges:1;
      unsigned int _useCommittedSnapshot:1;
      unsigned int _registeredUndoTransactionID:1;
      unsigned int _retainsAllRegisteredObjects:1;
      unsigned int _savingInProgress:1;
      unsigned int _wasDisposed:1;
      unsigned int _unprocessedChangesPending:1;
      unsigned int _isDirty:1;
      unsigned int _ignoreUndoCheckpoints:1;
	  unsigned int _propagatingDeletes:1;
	  unsigned int _isNSEditorEditing:1;
      unsigned int _isMainThreadBlessed:1;
      unsigned int _isImportContext:1;
      unsigned int _preflightSaveInProgress:1;
      unsigned int _disableDiscardEditing:1;
      unsigned int _isParentStoreContext:1;
      unsigned int _postSaveNotifications:1;
      unsigned int _isMerging:1;
      unsigned int _concurrencyType:1;
      unsigned int _deleteInaccessible:1;
      unsigned int _reservedFlags:9;
  } _flags;
  NSMutableSet *_unprocessedChanges;
  NSMutableSet *_unprocessedDeletes;
  NSMutableSet *_unprocessedInserts;
  NSMutableSet *_insertedObjects;
  NSMutableSet *_deletedObjects;
  NSMutableSet *_changedObjects;
  NSMutableSet *_lockedObjects;
  NSMutableSet *_refreshedObjects;
  id _infoByGID;
  id *_cachedObsInfoByEntity;
  short _undoTransactionID;
  id _lock;
  long _lockCount;
  long _objectStoreLockCount;
  NSTimeInterval _fetchTimestamp;
  intptr_t _referenceCallbackRegistration;
  id _referenceQueue;
  id _reserved3;
  id _reserved4;
  int32_t _cd_rc;
  int32_t _ignoreChangeNotification;
  id _reserved6;
  NSString* _contextLabel;
  id* _additionalPrivateIvars;
}

+ (instancetype)new NS_DEPRECATED(10_4,10_11,3_0,9_0, "Use -initWithConcurrencyType: instead");
- (instancetype)init NS_DEPRECATED(10_4,10_11,3_0,9_0, "Use -initWithConcurrencyType: instead");
- (instancetype)initWithConcurrencyType:(NSManagedObjectContextConcurrencyType)ct NS_DESIGNATED_INITIALIZER  NS_AVAILABLE(10_7,  5_0);

/* asynchronously performs the block on the context's queue.  Encapsulates an autorelease pool and a call to processPendingChanges */
- (void)performBlock:(void (^)())block NS_AVAILABLE(10_7,  5_0);

/* synchronously performs the block on the context's queue.  May safely be called reentrantly.  */
- (void)performBlockAndWait:(void (^)())block NS_AVAILABLE(10_7,  5_0);

/* coordinator which provides model and handles persistency (multiple contexts can share a coordinator) */
@property (nullable, strong) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nullable, strong) NSManagedObjectContext *parentContext NS_AVAILABLE(10_7,  5_0);

/* custom label for a context.  NSPrivateQueueConcurrencyType contexts will set the label on their queue */
@property (nullable, copy) NSString *name NS_AVAILABLE(10_10, 8_0);

@property (nullable, nonatomic, strong) NSUndoManager *undoManager;

@property (nonatomic, readonly) BOOL hasChanges;
@property (nonatomic, readonly, strong) NSMutableDictionary *userInfo NS_AVAILABLE(10_7,  5_0);
@property (readonly) NSManagedObjectContextConcurrencyType concurrencyType NS_AVAILABLE(10_7,  5_0);

/* returns the object for the specified ID if it is registered in the context already or nil. It never performs I/O. */
- (nullable __kindof NSManagedObject *)objectRegisteredForID:(NSManagedObjectID *)objectID;

/* returns the object for the specified ID if it is already registered, otherwise it creates a fault corresponding to that objectID.  It never returns nil, and never performs I/O.  The object specified by objectID is assumed to exist, and if that assumption is wrong the fault may throw an exception when used. */
- (__kindof NSManagedObject *)objectWithID:(NSManagedObjectID *)objectID;

/* returns the object for the specified ID if it is already registered in the context, or faults the object into the context.  It might perform I/O if the data is uncached.  If the object cannot be fetched, or does not exist, or cannot be faulted, it returns nil.  Unlike -objectWithID: it never returns a fault.  */
- (nullable __kindof NSManagedObject *)existingObjectWithID:(NSManagedObjectID*)objectID error:(NSError**)error NS_AVAILABLE(10_6, 3_0);

// method to fetch objects from the persistent stores into the context (fetch request defines the entity and predicate as well as a sort order for the objects); context will match the results from persistent stores with current changes in the context (so inserted objects are returned even if they are not persisted yet); to fetch a single object with an ID if it is not guaranteed to exist and thus -objectWithObjectID: cannot be used, one would create a predicate like [NSComparisonPredicate predicateWithLeftExpression:[NSExpression expressionForKeyPath:@"objectID"] rightExpression:[NSExpression expressionForConstantValue:<object id>] modifier:NSPredicateModifierDirect type:NSEqualToPredicateOperatorType options:0]
- (nullable NSArray *)executeFetchRequest:(NSFetchRequest *)request error:(NSError **)error;

// returns the number of objects a fetch request would have returned if it had been passed to -executeFetchRequest:error:.   If an error occurred during the processing of the request, this method will return NSNotFound. 
- (NSUInteger) countForFetchRequest: (NSFetchRequest *)request error: (NSError **)error NS_AVAILABLE(10_5, 3_0);    

// Method to pass a request to the store without affecting the contents of the managed object context.
// Will return an NSPersistentStoreResult which may contain additional information about the result of the action
// (ie a batch update result may contain the object IDs of the objects that were modified during the update).
// A request may succeed in some stores and fail in others. In this case, the error will contain information
// about each individual store failure.
// Will always reject NSSaveChangesRequests.
- (nullable __kindof NSPersistentStoreResult *)executeRequest:(NSPersistentStoreRequest*)request error:(NSError **)error NS_AVAILABLE(10_10, 8_0);

- (void)insertObject:(NSManagedObject *)object;
- (void)deleteObject:(NSManagedObject *)object;

// if flag is YES, merges an object with the state of the object available in the persistent store coordinator; if flag is NO, simply refaults an object without merging (which also causes other related managed objects to be released, so you can use this method to trim the portion of your object graph you want to hold in memory) 
- (void)refreshObject:(NSManagedObject *)object mergeChanges:(BOOL)flag;    

// marks an object for conflict detection, which means that the save fails if the object has been altered in the persistent store by another application.  This allows optimistic locking for unchanged objects.  Conflict detection is always performed on changed or deleted objects.
- (void)detectConflictsForObject:(NSManagedObject *)object;    

// key-value observation
- (void)observeValueForKeyPath:(nullable NSString *)keyPath ofObject:(nullable id)object change:(nullable NSDictionary<NSString *, id> *)change context:(nullable void *)context;

// usually contexts process changes to the object graph coalesced at the end of the event - this method triggers it explicitly
- (void)processPendingChanges;    

// specifies the store a newly inserted object will be saved in.  Unnecessary unless there are multiple writable persistent stores added to the NSPersistentStoreCoordinator which support this object's entity.
- (void)assignObject:(id)object toPersistentStore:(NSPersistentStore *)store;    

@property (nonatomic, readonly, strong) NSSet<__kindof NSManagedObject *> *insertedObjects;
@property (nonatomic, readonly, strong) NSSet<__kindof NSManagedObject *> *updatedObjects;
@property (nonatomic, readonly, strong) NSSet<__kindof NSManagedObject *> *deletedObjects;
@property (nonatomic, readonly, strong) NSSet<__kindof NSManagedObject *> *registeredObjects;

- (void)undo;
- (void)redo;
- (void)reset;
- (void)rollback;
- (BOOL)save:(NSError **)error;

/* calls -refreshObject:mergeChanges: on all currently registered objects with this context.  It handles dirtied objects and clearing the context reference queue */
- (void)refreshAllObjects NS_AVAILABLE(10_11,8_3);

- (void)lock NS_DEPRECATED(10_4, 10_10, 3_0, 8_0, "Use a queue style context and -performBlockAndWait: instead");
- (void)unlock NS_DEPRECATED(10_4, 10_10, 3_0, 8_0, "Use a queue style context and -performBlockAndWait: instead");
- (BOOL)tryLock NS_DEPRECATED(10_4, 10_10, 3_0, 8_0, "Use a queue style context and -performBlock: instead");
    
// whether or not the context propagates deletes to related objects at the end of the event, or only at save time
@property (nonatomic) BOOL propagatesDeletesAtEndOfEvent;   // The default is YES.

// whether or not the context holds a retain on all registered objects, or only upon objects necessary for a pending save (inserted, updated, deleted, or locked)
@property (nonatomic) BOOL retainsRegisteredObjects;   // The default is NO.

/*  set the rule to handle inaccessible faults.  If YES, then the managed object is marked deleted and all its properties, including scalars, nonnullable, and mandatory properties, will be nil or zero’d out.  If NO, the context will throw an exception. Managed objects that are inaccessible because their context is nil due to memory management issues will throw an exception regardless. */
@property BOOL shouldDeleteInaccessibleFaults NS_AVAILABLE(10_11,9_0);

/*  this method will not be called from APIs which return an NSError like -existingObjectWithID:error: nor for managed objects with a nil context (e.g. the fault is inaccessible because the object or its context have been released) this method will not be called if Core Data determines there is an unambiguously correct action to recover.  This might happen if a fault was tripped during delete propagation.  In that case, the fault will simply be deleted.  triggeringProperty may be nil when either all properties are involved, or Core Data is unable to determine the reason for firing the fault. the default implementation logs and then returns the value of -shouldDeleteInaccessibleFaults. */
- (BOOL)shouldHandleInaccessibleFault:(NSManagedObject*)fault forObjectID:(NSManagedObjectID*)oid triggeredByProperty:(nullable NSPropertyDescription*)property NS_AVAILABLE(10_11,9_0);

// Staleness interval is the relative time until cached data should be considered stale. The value is applied on a per object basis. For example, a value of 300.0 informs the context to utilize cached information for no more than 5 minutes after that object was originally fetched. This does not affect objects currently in use. Principly, this controls whether fulfilling a fault uses data previously fetched by the application, or issues a new fetch.  It is a hint which may not be supported by all persistent store types.
@property () NSTimeInterval stalenessInterval; // a negative value is considered infinite.  The default is infinite staleness.
 // acceptable merge policies are listed above as id constants
@property (strong) id mergePolicy;    // default: NSErrorMergePolicy

/* Converts the object IDs of the specified objects to permanent IDs.  This implementation will convert the object ID of each managed object in the specified array to a permanent ID.  Any object in the target array with a permanent ID will be ignored;  additionally, any managed object in the array not already assigned to a store will be assigned, based on the same rules Core Data uses for assignment during a save operation (first writable store supporting the entity, and appropriate for the instance and its related items.)  Although the object will have a permanent ID, it will still respond positively to -isInserted until it is saved.  If an error is encountered obtaining an identifier, the return value will be NO.
*/
- (BOOL)obtainPermanentIDsForObjects:(NSArray<NSManagedObject *> *)objects error:(NSError **)error NS_AVAILABLE(10_5, 3_0);

/* Merges the changes specified in notification object received from another context's NSManagedObjectContextDidSaveNotification into the receiver.  This method will refresh any objects which have been updated in the other context, fault in any newly inserted objects, and invoke deleteObject: on those which have been deleted.  The developer is only responsible for the thread safety of the receiver.
*/
- (void)mergeChangesFromContextDidSaveNotification:(NSNotification *)notification NS_AVAILABLE(10_5, 3_0);

/* Similar to mergeChangesFromContextDidSaveNotification, this method handles changes from potentially other processes or serialized state.  It more efficiently
     * merges changes into multiple contexts, as well as nested context. The keys in the dictionary should be one those from an
     *  NSManagedObjectContextObjectsDidChangeNotification: NSInsertedObjectsKey, NSUpdatedObjectsKey, etc.
     *  the values should be an NSArray of either NSManagedObjectID or NSURL objects conforming to valid results from -URIRepresentation
     */
+ (void)mergeChangesFromRemoteContextSave:(NSDictionary*)changeNotificationData intoContexts:(NSArray<NSManagedObjectContext*> *)contexts NS_AVAILABLE(10_11,9_0);

@end

NS_ASSUME_NONNULL_END

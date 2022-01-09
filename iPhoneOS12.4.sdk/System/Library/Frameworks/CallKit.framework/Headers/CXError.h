//
//  CXError.h
//  CallKit
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CallKit/CXBase.h>

NS_ASSUME_NONNULL_BEGIN

CX_EXTERN NSErrorDomain const CXErrorDomain API_AVAILABLE(ios(10.0));
CX_EXTERN NSErrorDomain const CXErrorDomainIncomingCall API_AVAILABLE(ios(10.0));
CX_EXTERN NSErrorDomain const CXErrorDomainRequestTransaction API_AVAILABLE(ios(10.0));
CX_EXTERN NSErrorDomain const CXErrorDomainCallDirectoryManager API_AVAILABLE(ios(10.0));

typedef NS_ERROR_ENUM(CXErrorDomain, CXErrorCode) {
    CXErrorCodeUnknownError = 0,
} API_AVAILABLE(ios(10.0));

typedef NS_ERROR_ENUM(CXErrorDomainIncomingCall, CXErrorCodeIncomingCallError) {
    CXErrorCodeIncomingCallErrorUnknown = 0,
    CXErrorCodeIncomingCallErrorUnentitled = 1,
    CXErrorCodeIncomingCallErrorCallUUIDAlreadyExists = 2,
    CXErrorCodeIncomingCallErrorFilteredByDoNotDisturb = 3,
    CXErrorCodeIncomingCallErrorFilteredByBlockList = 4,
} API_AVAILABLE(ios(10.0));

typedef NS_ERROR_ENUM(CXErrorDomainRequestTransaction, CXErrorCodeRequestTransactionError) {
    CXErrorCodeRequestTransactionErrorUnknown = 0,
    CXErrorCodeRequestTransactionErrorUnentitled = 1,
    CXErrorCodeRequestTransactionErrorUnknownCallProvider = 2,
    CXErrorCodeRequestTransactionErrorEmptyTransaction = 3,
    CXErrorCodeRequestTransactionErrorUnknownCallUUID = 4,
    CXErrorCodeRequestTransactionErrorCallUUIDAlreadyExists = 5,
    CXErrorCodeRequestTransactionErrorInvalidAction = 6,
    CXErrorCodeRequestTransactionErrorMaximumCallGroupsReached = 7,
} API_AVAILABLE(ios(10.0));

typedef NS_ERROR_ENUM(CXErrorDomainCallDirectoryManager, CXErrorCodeCallDirectoryManagerError) {
    CXErrorCodeCallDirectoryManagerErrorUnknown = 0,
    CXErrorCodeCallDirectoryManagerErrorNoExtensionFound = 1,
    CXErrorCodeCallDirectoryManagerErrorLoadingInterrupted = 2,
    CXErrorCodeCallDirectoryManagerErrorEntriesOutOfOrder = 3,
    CXErrorCodeCallDirectoryManagerErrorDuplicateEntries = 4,
    CXErrorCodeCallDirectoryManagerErrorMaximumEntriesExceeded = 5,
    CXErrorCodeCallDirectoryManagerErrorExtensionDisabled = 6,
    CXErrorCodeCallDirectoryManagerErrorCurrentlyLoading API_AVAILABLE(ios(10.3)) = 7,
    CXErrorCodeCallDirectoryManagerErrorUnexpectedIncrementalRemoval API_AVAILABLE(ios(11.0)) = 8,
} API_AVAILABLE(ios(10.0));

NS_ASSUME_NONNULL_END

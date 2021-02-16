//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @class XCTSourceCodeLocation
 * Contains a file URL and line number representing a distinct location in source code related to a run of a test.
 */
__attribute__((objc_subclassing_restricted))
@interface XCTSourceCodeLocation : NSObject <NSSecureCoding>

- (instancetype)initWithFileURL:(NSURL *)fileURL lineNumber:(NSInteger)lineNumber NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithFilePath:(NSString *)filePath lineNumber:(NSInteger)lineNumber;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@property (readonly) NSURL *fileURL;
@property (readonly) NSInteger lineNumber;

@end

/*!
 * @class XCTSourceCodeSymbolInfo
 * Contains symbolication information for a given frame in a call stack.
 */
__attribute__((objc_subclassing_restricted))
@interface XCTSourceCodeSymbolInfo : NSObject <NSSecureCoding>

- (instancetype)initWithImageName:(NSString *)imageName
                       symbolName:(NSString *)symbolName
                         location:(nullable XCTSourceCodeLocation *)location NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@property (readonly, copy) NSString *imageName;
@property (readonly, copy) NSString *symbolName;
@property (readonly, nullable) XCTSourceCodeLocation *location;

@end

/*!
* @class XCTSourceCodeFrame
* Represents a single frame in a call stack and supports retrieval of symbol information for the address.
*/
__attribute__((objc_subclassing_restricted))
@interface XCTSourceCodeFrame : NSObject <NSSecureCoding>

- (instancetype)initWithAddress:(uint64_t)address symbolInfo:(nullable XCTSourceCodeSymbolInfo *)symbolInfo NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithAddress:(uint64_t)address;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@property (readonly) uint64_t address;

@property (readonly, nullable) XCTSourceCodeSymbolInfo *symbolInfo;

/// Error previously returned for symbolication attempt. This is not serialized when the frame is encoded.
@property (readonly, nullable) NSError *symbolicationError;

/*!
 * method -symbolInfoWithError:
 * Attempts to get symbol information for the address. This can fail if required symbol data is not available. Only
 * one attempt will be made and the error will be stored and returned for future requests.
 */
- (nullable XCTSourceCodeSymbolInfo *)symbolInfoWithError:(NSError **)outError;

@end

/*!
 * @class XCTSourceCodeContext
 * Call stack and optional specific location - which may or may not be also included in the call stack
 * providing context around a point of execution in a test.
 */
__attribute__((objc_subclassing_restricted))
@interface XCTSourceCodeContext : NSObject <NSSecureCoding>

- (instancetype)initWithCallStack:(NSArray<XCTSourceCodeFrame *> *)callStack
                         location:(nullable XCTSourceCodeLocation *)location NS_DESIGNATED_INITIALIZER;

/// The call stack addresses could be those from NSThread.callStackReturnAddresses,
/// NSException.callStackReturnAddresses, or another source.
- (instancetype)initWithCallStackAddresses:(NSArray<NSNumber *> *)callStackAddresses
                                  location:(nullable XCTSourceCodeLocation *)location;

/// Initializes a new instance with call stack derived from NSThread.callStackReturnAddresses and the specified location.
- (instancetype)initWithLocation:(nullable XCTSourceCodeLocation *)location;

/// Initializes a new instance with call stack derived from NSThread.callStackReturnAddresses and a nil location.
- (instancetype)init;

@property (readonly, copy) NSArray<XCTSourceCodeFrame *> *callStack;
@property (readonly, nullable) XCTSourceCodeLocation *location;

@end

NS_ASSUME_NONNULL_END

//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface _XCTSkipFailureException : NSException
@end

XCT_EXPORT void _XCTSkipHandler(const char *, NSUInteger, NSString *, ...) NS_FORMAT_FUNCTION(3,4);

XCT_EXPORT void _XCTSkipHandlerForExpectedValue(NSString * _Nullable, BOOL, const char *, NSUInteger, NSString *, ...) NS_FORMAT_FUNCTION(5,6);

XCT_EXPORT void _XCTSkipHandlerForException(NSString * _Nullable, NSException * _Nullable, const char *, NSUInteger, NSString *, ...) NS_FORMAT_FUNCTION(5,6);

#define _XCTPrimitiveSkip(...) \
({ \
    _XCTSkipHandler(__FILE__, __LINE__, @"" __VA_ARGS__); \
})

#define _XCTPrimitiveSkipIfEqual(expression, expectedValue, expressionStr, ...) \
({ \
    @try { \
        BOOL expressionValue = !!(expression); \
        if (expressionValue == expectedValue) { \
            _XCTSkipHandlerForExpectedValue(expressionStr, expectedValue, __FILE__, __LINE__, @"" __VA_ARGS__); \
        } \
    } \
    @catch (_XCTSkipFailureException *exception) { [exception raise]; } \
    @catch (NSException *exception) { \
        _XCTSkipHandlerForException(expressionStr, exception, __FILE__, __LINE__, @"" __VA_ARGS__); \
    } \
    @catch (...) { \
        _XCTSkipHandlerForException(expressionStr, nil, __FILE__, __LINE__, @"" __VA_ARGS__); \
    } \
})

NS_ASSUME_NONNULL_END

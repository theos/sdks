//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCTestSkippingImpl.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @function XCTSkip(...)
 * Cease executing the current test and mark it as skipped.
 * @param ... An optional supplementary description of why the test is being skipped. A literal NSString, optionally with string format specifiers. This parameter can be completely omitted.
*/
#define XCTSkip(...) \
    _XCTPrimitiveSkip(__VA_ARGS__)

/*!
 * @function XCTSkipIf(expression, ...)
 * Ceases executing the current test and marks it as skipped when ((\a expression) == true).
 * @param expression An expression of boolean type.
 * @param ... An optional supplementary description of why the test is being skipped. A literal NSString, optionally with string format specifiers. This parameter can be completely omitted.
*/
#define XCTSkipIf(expression, ...) \
    _XCTPrimitiveSkipIfEqual(expression, YES, @#expression, __VA_ARGS__)

/*!
 * @function XCTSkipUnless(expression, ...)
 * Ceases executing the current test and marks it as skipped when ((\a expression) == false).
 * @param expression An expression of boolean type.
 * @param ... An optional supplementary description of why the test is being skipped. A literal NSString, optionally with string format specifiers. This parameter can be completely omitted.
*/
#define XCTSkipUnless(expression, ...) \
    _XCTPrimitiveSkipIfEqual(expression, NO, @#expression, __VA_ARGS__)

NS_ASSUME_NONNULL_END

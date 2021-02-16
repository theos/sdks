//
// Copyright (c) 2013-2015 Apple Inc. All rights reserved.
//
// Copyright (c) 1997-2005, Sen:te (Sente SA).  All rights reserved.
//
// Use of this source code is governed by the following license:
// 
// Redistribution and use in source and binary forms, with or without modification, 
// are permitted provided that the following conditions are met:
// 
// (1) Redistributions of source code must retain the above copyright notice, 
// this list of conditions and the following disclaimer.
// 
// (2) Redistributions in binary form must reproduce the above copyright notice, 
// this list of conditions and the following disclaimer in the documentation 
// and/or other materials provided with the distribution.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS'' 
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
// IN NO EVENT SHALL Sente SA OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT 
// OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// Note: this license is equivalent to the FreeBSD license.
// 
// This notice may not be removed from this file.

#import <XCTest/XCAbstractTest.h>

@class XCTIssue;

NS_ASSUME_NONNULL_BEGIN

/*!
 * @class XCTestRun
 * A test run collects information about the execution of a test. Failures in explicit
 * test assertions are classified as "expected", while failures from unrelated or
 * uncaught exceptions are classified as "unexpected".
 */
@interface XCTestRun : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/*!
 * @method +testRunWithTest:
 * Class factory method for the XCTestRun class.
 *
 * @param test An XCTest instance.
 *
 * @return A test run for the provided test.
 */
+ (instancetype)testRunWithTest:(XCTest *)test;

/*!
 * @method -initWithTest:
 * Designated initializer for the XCTestRun class.
 *
 * @param test An XCTest instance.
 *
 * @return A test run for the provided test.
 */
- (instancetype)initWithTest:(XCTest *)test NS_DESIGNATED_INITIALIZER;

/*!
 * @property test
 * The test instance provided when the test run was initialized.
 */
@property (readonly, strong) XCTest *test;

/*!
 * @method -start
 * Start a test run. Must not be called more than once.
 */
- (void)start;

/*!
 * @method -stop
 * Stop a test run. Must not be called unless the run has been started. Must not be called more than once.
 */
- (void)stop;

/*!
 * @property startDate
 * The time at which the test run was started, or nil.
 */
@property (readonly, copy, nullable) NSDate *startDate;

/*!
 * @property stopDate
 * The time at which the test run was stopped, or nil.
 */
@property (readonly, copy, nullable) NSDate *stopDate;

/*!
 * @property totalDuration
 * The number of seconds that elapsed between when the run was started and when it was stopped.
 */
@property (readonly) NSTimeInterval totalDuration;

/*!
 * @property testDuration
 * The number of seconds that elapsed between when the run was started and when it was stopped.
 */
@property (readonly) NSTimeInterval testDuration;

/*!
 * @property testCaseCount
 * The number of tests in the run.
 */
@property (readonly) NSUInteger testCaseCount;

/*!
 * @property executionCount
 * The number of test executions recorded during the run.
 */
@property (readonly) NSUInteger executionCount;

/*!
 * @property skipCount
 * The number of test skips recorded during the run.
 */
@property (readonly) NSUInteger skipCount;

/*!
 * @property failureCount
 * The number of test failures recorded during the run.
 */
@property (readonly) NSUInteger failureCount;

/*!
 * @property unexpectedExceptionCount
 * The number of uncaught exceptions recorded during the run.
 */
@property (readonly) NSUInteger unexpectedExceptionCount;

/*!
 * @property totalFailureCount
 * The total number of test failures and uncaught exceptions recorded during the run.
 */
@property (readonly) NSUInteger totalFailureCount;

/*!
 * @property hasSucceeded
 * YES if all tests in the run completed their execution without recording any failures, otherwise NO.
 */
@property (readonly) BOOL hasSucceeded;

/*!
 * @property hasBeenSkipped
 * YES if the test was skipped, otherwise NO.
 */
@property (readonly) BOOL hasBeenSkipped;

/*!
 * @method -recordIssue:
 * Records a failure or other  issue in the execution of the test and is used by all test assertions.
 * Overrides of this method should call super unless they wish to suppress the issue.
 * Super can be invoked with a different issue object.
 *
 * @param issue Object with all details related to the issue.
 */
- (void)recordIssue:(XCTIssue *)issue;

@end

#pragma mark - Deprecated/discouraged APIs

/*
 The APIs below are deprecated and may be removed in a future release. Please do not use them in
 new code, and for existing code which uses them, consult their documentation for information about
 replacement(s) to use instead.
 */

@interface XCTestRun (XCTDeprecated)

/*!
 * @method -recordFailureWithDescription:inFile:atLine:expected:
 * Records a failure in the execution of the test for this test run. Must not be called
 * unless the run has been started. Must not be called if the test run has been stopped.
 *
 * This method is deprecated and has been replaced by the `-recordIssue:` method and XCTIssue class, which
 * provide greater flexibility for recording issues that arise during testing. Overriding this method in an XCTestRun subclass and
 * modifying its arguments before calling `super` may cause information about the failure to be lost and is not recommended.
 * Instead, override `-recordIssue:` and pass `super` a modified XCTIssue.
 *
 * @param description The description of the failure being recorded. When replacing usage of this deprecated API,
 * this can be represented using the `compactDescription` property on XCTIssue.
 *
 * @param filePath The file path to the source file where the failure being recorded was encountered
 * or nil if unknown. When replacing usage of this deprecated API, this can be specified using an XCTSourceCodeLocation instance
 * associated with an XCTIssue via its `sourceCodeContext` property.
 *
 * @param lineNumber The line number in the source file at filePath where the failure being recorded
 * was encountered or 0 if unknown. When replacing usage of this deprecated API, this can be specified using an
 * XCTSourceCodeLocation instance associated with an XCTIssue via its `sourceCodeContext` property.
 *
 * @param expected NO if the failure being recorded was the result of an uncaught exception, YES if it was the result
 * of a failed assertion or any other reason. When replacing usage of this deprecated API, the representation using XCTIssue may vary.
 * A NO value may be specified using the issue type `XCTIssueTypeUncaughtException`, and a YES value may be represented
 * using a different issue type such as `XCTIssueTypeAssertionFailure` combined with other properties on XCTIssue.
 */
- (void)recordFailureWithDescription:(NSString *)description
                              inFile:(nullable NSString *)filePath
                              atLine:(NSUInteger)lineNumber
                            expected:(BOOL)expected XCT_DEPRECATED_WITH_REPLACEMENT("-recordIssue:");

@end

NS_ASSUME_NONNULL_END

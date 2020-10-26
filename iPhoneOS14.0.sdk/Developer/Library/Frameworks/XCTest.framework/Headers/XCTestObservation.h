//
//  Copyright (c) 2014-2015 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class XCTestCase;
@class XCTestSuite;
@class XCTIssue;

/*!
 * @protocol XCTestObservation
 *
 * Objects conforming to XCTestObservation can register to be notified of the progress of test runs. See XCTestObservationCenter
 * for details on registration.
 *
 * Progress events are delivered in the following sequence:
 *
 * -testBundleWillStart:                            // exactly once per test bundle
 *      -testSuiteWillStart:                        // exactly once per test suite
 *          -testCaseWillStart:                     // exactly once per test case
 *          -testCase:didRecordIssue:               // zero or more times per test case, any time between test case start and finish
 *          -testCaseDidFinish:                     // exactly once per test case
 *      -testSuite:didRecordIssue:                  // zero or more times per test suite, any time between test suite start and finish
 *      -testSuiteDidFinish:                        // exactly once per test suite
 * -testBundleDidFinish:                            // exactly once per test bundle
 */
@protocol XCTestObservation <NSObject>
@optional

/*!
 * @method -testBundleWillStart:
 *
 * Sent immediately before tests begin as a hook for any pre-testing setup.
 *
 * @param testBundle The bundle containing the tests that were executed.
 */
- (void)testBundleWillStart:(NSBundle *)testBundle;

/*!
 * @method -testBundleDidFinish:
 *
 * Sent immediately after all tests have finished as a hook for any post-testing activity. The test process will generally
 * exit after this method returns, so if there is long running and/or asynchronous work to be done after testing, be sure
 * to implement this method in a way that it blocks until all such activity is complete.
 *
 * @param testBundle The bundle containing the tests that were executed.
 */
- (void)testBundleDidFinish:(NSBundle *)testBundle;

/*!
 * @method -testSuiteWillStart:
 *
 * Sent when a test suite starts executing.
 *
 * @param testSuite The test suite that started. Additional information can be retrieved from the associated XCTestRun.
 */
- (void)testSuiteWillStart:(XCTestSuite *)testSuite;

/*!
 * @method -testSuite:didRecordIssue:
 *
 * Sent when a test suite reports an issue. Suite issues are most commonly reported during suite-level setup and teardown
 * whereas issues during tests are reported for the test case alone and are not reported as suite issues.
 *
 * @param testSuite The test suite that recorded the issue.
 * @param issue Object with all details related to the issue.
 */
- (void)testSuite:(XCTestSuite *)testSuite didRecordIssue:(XCTIssue *)issue;

/*!
 * @method -testSuiteDidFinish:
 *
 * Sent when a test suite finishes executing.
 *
 * @param testSuite The test suite that finished. Additional information can be retrieved from the associated XCTestRun.
 */
- (void)testSuiteDidFinish:(XCTestSuite *)testSuite;

/*!
 * @method -testCaseWillStart:
 *
 * Sent when a test case starts executing.
 *
 * @param testCase The test case that started. Additional information can be retrieved from the associated XCTestRun.
 */
- (void)testCaseWillStart:(XCTestCase *)testCase;

/*!
 * @method -testCase:didRecordIssue:
 *
 * Sent when a test case reports an issue.
 *
 * @param testCase The test case that recorded the issue.
 * @param issue Object with all details related to the issue.
 */
- (void)testCase:(XCTestCase *)testCase didRecordIssue:(XCTIssue *)issue;

/*!
 * @method -testCaseDidFinish:
 *
 * Sent when a test case finishes executing.
 *
 * @param testCase The test case that finished. Additional information can be retrieved from the associated XCTestRun.
 */
- (void)testCaseDidFinish:(XCTestCase *)testCase;

#pragma mark - Deprecated/discouraged APIs

/*
 The APIs below are deprecated and may be removed in a future release. Please do not use them in
 new code, and for existing code which uses them, consult their documentation for information about
 replacement(s) to use instead.
 */

/*!
 * @method -testSuiteDidFail:withDescription:inFile:atLine:
 * Sent when a test suite reports a failure. Suite failures are most commonly reported during suite-level setup and teardown
 * whereas failures during tests are reported for the test case alone and are not reported as suite failures.
 *
 * This method is deprecated and replaced by the `-testSuite:didRecordIssue:` method whose XCTIssue parameter provides greater flexibility
 * for describing issues that arise during testing. If the receiver of this method also responds to `-testSuite:didRecordIssue:`, that method
 * is called instead and this will not be called.
 *
 * @param testSuite The test suite that failed. Additional information can be retrieved from the associated XCTestRun.
 *
 * @param description A textual description of the failure. When replacing usage of this deprecated API, this can
 * be obtained using the `compactDescription` property on XCTIssue.
 *
 * @param filePath The path of file where the failure occurred or nil if unknown. When replacing usage of this deprecated API, this
 * can be obtained using the XCTSourceCodeLocation instance associated with an XCTIssue via its `sourceCodeContext` property
 *
 * @param lineNumber The line where the failure was reported or 0 if unknown. When replacing usage of this deprecated API, this
 * can be obtained using the XCTSourceCodeLocation instance associated with an XCTIssue via its `sourceCodeContext` property
 */
- (void)testSuite:(XCTestSuite *)testSuite didFailWithDescription:(NSString *)description inFile:(nullable NSString *)filePath atLine:(NSUInteger)lineNumber XCT_DEPRECATED_WITH_REPLACEMENT("-testSuite:didRecordIssue:");

/*!
 * @method -testCaseDidFail:withDescription:inFile:atLine:
 * Sent when a test case reports a failure.
 *
 * This method is deprecated and replaced by the `-testCase:didRecordIssue:` method whose XCTIssue parameter provides greater flexibility
 * for describing issues that arise during testing. If the receiver of this method also responds to `-testCase:didRecordIssue:`, that method
 * is called instead and this will not be called.
 *
 * @param testCase The test case that failed. Additional information can be retrieved from the associated XCTestRun.
 *
 * @param description A textual description of the failure. When replacing usage of this deprecated API, this can
 * be obtained using the `compactDescription` property on XCTIssue.
 *
 * @param filePath The path of file where the failure occurred or nil if unknown. When replacing usage of this deprecated API, this
 * can be obtained using the XCTSourceCodeLocation instance associated with an XCTIssue via its `sourceCodeContext` property
 *
 * @param lineNumber The line where the failure was reported or 0 if unknown. When replacing usage of this deprecated API, this
 * can be obtained using the XCTSourceCodeLocation instance associated with an XCTIssue via its `sourceCodeContext` property
 */
- (void)testCase:(XCTestCase *)testCase didFailWithDescription:(NSString *)description inFile:(nullable NSString *)filePath atLine:(NSUInteger)lineNumber XCT_DEPRECATED_WITH_REPLACEMENT("-testCase:didRecordIssue:");

@end

NS_ASSUME_NONNULL_END

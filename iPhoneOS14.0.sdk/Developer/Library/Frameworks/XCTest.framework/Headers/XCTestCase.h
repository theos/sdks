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
#import <XCTest/XCTestDefines.h>
#import <XCTest/XCTActivity.h>

NS_ASSUME_NONNULL_BEGIN

@class XCTestSuite;

#if XCT_UI_TESTING_AVAILABLE
@class XCUIElement;
#endif

@protocol XCTMetric;
@class XCTMeasureOptions;
@class XCTIssue;

/*!
 * @class XCTestCase
 * XCTestCase is a concrete subclass of XCTest that should be the override point for
 * most developers creating tests for their projects. A test case subclass can have
 * multiple test methods and supports setup and tear down that executes for every test
 * method as well as class level setup and tear down.
 *
 * To define a test case:
 *
 * • Create a subclass of XCTestCase.
 * • Implement -test methods.
 * • Optionally define instance variables or properties that store the state of the test.
 * • Optionally initialize state by overriding -setUp
 * • Optionally clean-up after a test by overriding -tearDown.
 *
 * Test methods are instance methods meeting these requirements:
 * • accepting no parameters
 * • returning no value
 * • prefixed with 'test'
 *
 * For example:

    - (void)testSomething;

 * Test methods are automatically recognized as test cases by the XCTest framework.
 * Each XCTestCase subclass's defaultTestSuite is a XCTestSuite which includes these
 * tests. Test method implementations usually contain assertions that must be verified
 * for the test to pass, for example:
 * @textblock

    @interface MathTest : XCTestCase

    @property float f1;
    @property float f2;

    @end

    @implementation MathTest

    - (void)setUp
    {
        self.f1 = 2.0;
        self.f2 = 3.0;
    }

    - (void)testAddition
    {
        XCTAssertTrue(f1 + f2 == 5.0);
    }

    @end

 * @/textblock
 */
@interface XCTestCase : XCTest

/*!
 * @method +testCaseWithInvocation:
 */
+ (instancetype)testCaseWithInvocation:(nullable NSInvocation *)invocation;

/*!
 * @method -initWithInvocation:
 */
- (instancetype)initWithInvocation:(nullable NSInvocation *)invocation;

/*!
 * @method +testCaseWithSelector:
 */
+ (nullable instancetype)testCaseWithSelector:(SEL)selector;

/*!
 * @method -initWithSelector:
 */
- (instancetype)initWithSelector:(SEL)selector;

/*!
 * @property invocation
 * The invocation used when this test is run.
 */
@property (strong, nullable) NSInvocation *invocation;

/*!
 * @method -invokeTest
 * Invoking a test performs its setUp, invocation, and tearDown. In general this
 * should not be called directly.
 */
- (void)invokeTest;

/*!
 * @property continueAfterFailure
 * Determines whether the test method continues execution after an XCTAssert fails.
 *
 * By default, this property is YES, meaning the test method will complete regardless of how many
 * XCTAssert failures occur. Setting this to NO causes the test method to end execution immediately
 * after the first failure occurs, but does not affect remaining test methods in the suite.
 *
 * If XCTAssert failures in the test method indicate problems with state or determinism, additional
 * failures may be not be helpful information. Setting `continueAfterFailure` to NO can reduce the
 * noise in the test report for these kinds of tests.
 */
@property BOOL continueAfterFailure;

/*!
 * @method -recordIssue:
 * Records a failure or other issue in the execution of the test and is used by all test assertions.
 * Overrides of this method should call super unless they wish to suppress the issue.
 * Super can be invoked with a different issue object.
 *
 * @param issue Object with all details related to the issue.
 */
- (void)recordIssue:(XCTIssue *)issue;

/*!
 * @property testInvocations
 * Invocations for each test method in the test case.
 */
@property (class, readonly, copy) NSArray<NSInvocation *> *testInvocations;

/*!
 * @method -addTeardownBlock:
 * Registers a block to be run at the end of a test.
 *
 * Teardown blocks are executed after the current test method has returned but before
 * -tearDown is invoked.
 *
 * Registered blocks are run on the main thread but can be registered from any thread.
 * They are guaranteed to run only once, in LIFO order, and are executed serially. You
 * may register blocks during -setUp, but you may *not* register blocks during -tearDown
 * or from other teardown blocks.
 *
 * @param block A block to enqueue for future execution.
*/
- (void)addTeardownBlock:(void (^)(void))block;

/*!
 * @property executionTimeAllowance
 *
 * If test timeouts are enabled, this property represents the amount of time the test would like to be given to run.
 * If the test exceeds its allowance, Xcode will capture a spindump of the process and then restart it
 * so that test execution can continue on with the next test. The test that timed out will be marked
 * as a failure, and the spindump will be attached to the test in Xcode's test report.
 *
 * Note that the value you supply will be rounded up to the nearest minute value. Also note that a test
 * may be given less time than the value you specify if the -maximum-test-execution-time-allowance
 * option is passed to xcodebuild.
 *
 * The default value is 10 minutes.
 */
@property NSTimeInterval executionTimeAllowance;

#pragma mark - Measuring Performance Metrics


typedef NSString * XCTPerformanceMetric NS_EXTENSIBLE_STRING_ENUM;

/*!
 * @const XCTPerformanceMetric_WallClockTime
 * Records wall clock time in seconds between startMeasuring/stopMeasuring.
 */
XCT_EXPORT XCTPerformanceMetric const XCTPerformanceMetric_WallClockTime;

/*!
 * @property defaultPerformanceMetrics
 * The names of the performance metrics to measure when invoking -measureBlock:. Returns XCTPerformanceMetric_WallClockTime by default. Subclasses can override this to change the behavior of -measureBlock:
 */
@property (class, readonly, copy) NSArray<XCTPerformanceMetric> *defaultPerformanceMetrics;

/*!
 * @method -measureBlock:
 *
 * Call from a test method to measure resources (+defaultPerformanceMetrics) used by the
 * block in the current process.

    - (void)testPerformanceOfMyFunction {

        [self measureBlock:^{
            // Do that thing you want to measure.
            MyFunction();
        }];
    }

 * @param block A block whose performance to measure.
 */
- (void)measureBlock:(XCT_NOESCAPE void (^)(void))block;

/*!
 * @method -measureMetrics:automaticallyStartMeasuring:forBlock:
 *
 * Call from a test method to measure resources (XCTPerformanceMetrics) used by the
 * block in the current process. Each metric will be measured across calls to the block.
 * The number of times the block will be called is undefined and may change in the
 * future. For one example of why, as long as the requested performance metrics do
 * not interfere with each other the API will measure all metrics across the same
 * calls to the block. If the performance metrics may interfere the API will measure
 * them separately.
 
    - (void)testMyFunction2_WallClockTime {
        [self measureMetrics:[self class].defaultPerformanceMetrics automaticallyStartMeasuring:NO forBlock:^{

            // Do setup work that needs to be done for every iteration but you don't want to measure before the call to -startMeasuring
            SetupSomething();
            [self startMeasuring];

            // Do that thing you want to measure.
            MyFunction();
            [self stopMeasuring];

            // Do teardown work that needs to be done for every iteration but you don't want to measure after the call to -stopMeasuring
            TeardownSomething();
        }];
    }

 * Caveats:
 * • If YES was passed for automaticallyStartMeasuring and -startMeasuring is called
 *      anyway, the test will fail.
 * • If NO was passed for automaticallyStartMeasuring then -startMeasuring must be
 *      called once and only once before the end of the block or the test will fail.
 * • If -stopMeasuring is called multiple times during the block the test will fail.
 *
 * @param metrics An array of NSStrings (XCTPerformanceMetrics) to measure. Providing an unrecognized string is a test failure.
 *
 * @param automaticallyStartMeasuring If NO, XCTestCase will not take any measurements until -startMeasuring is called.
 *
 * @param block A block whose performance to measure.
 */
- (void)measureMetrics:(NSArray<XCTPerformanceMetric> *)metrics automaticallyStartMeasuring:(BOOL)automaticallyStartMeasuring forBlock:(XCT_NOESCAPE void (^)(void))block;

/*!
 * @method -startMeasuring
 * Call this from within a measure block to set the beginning of the critical section.
 * Measurement of metrics will start at this point.
 */
- (void)startMeasuring;

/*!
 * @method -stopMeasuring
 * Call this from within a measure block to set the ending of the critical section.
 * Measurement of metrics will stop at this point.
 */
- (void)stopMeasuring;

@end

@interface XCTestCase (XCTestSuiteExtensions)

/*!
 * @property defaultTestSuite
 * Returns a test suite containing test cases for all of the tests in the class.
 */
@property (class, readonly) XCTestSuite *defaultTestSuite;

/*!
 * @method +setUp
 * Suite-level setup method called before the class begins to run any of its test methods or their associated
 * per-instance setUp methods.
 */
+ (void)setUp;

/*!
 * @method +tearDown
 * Suite-level teardown method called after the class has finished running all of its test methods and their
 * associated per-instance tearDown methods and teardown blocks.
 */
+ (void)tearDown;

@end

/*!
 * XCTestCase conforms to XCTActivity, allowing test attachments to be added directly from test methods.
 *
 * See XCTAttachment.h for details on how to create attachments. Once created, they can be added directly to XCTestCase:
 *
 * @textblock
 
     - (void)testFoo
     {
         XCTAttachment *attachment = ...
         [self addAttachment:attachment];
     }
 
 * @/textblock
 */
@interface XCTestCase() <XCTActivity>
@end

/*!
 * Interface extension for measure related API.
 */
@interface XCTestCase (XCTPerformanceAnalysis)

/*!
 * @property defaultMetrics
 * A collection of metrics to be taken by default when -measureBlock or -measureWithOptions:block: is called.
 */
@property (class, readonly, copy) NSArray<id<XCTMetric>> *defaultMetrics XCT_METRIC_API_AVAILABLE;

/*!
 * @property defaultMeasureOptions
 * Collection of configurable settings to change how measurements are taken.
 */
@property (class, readonly, copy) XCTMeasureOptions *defaultMeasureOptions;

/*!
 * @method -measureWithMetrics:block:
 * Measures the block using the provided metrics and the default options from your XCTestCase class.
 *
 * @param metrics A non-empty array of objects which adopt the XCTMetric protocol, describing the set of metrics to measure.
 * @param block The block to be measured.
 */
- (void)measureWithMetrics:(NSArray<id<XCTMetric>> *)metrics block:(XCT_NOESCAPE void (^)(void))block XCT_METRIC_API_AVAILABLE;

/*!
 * @method -measureWithOptions:block:
 * Measures the block using the default metrics from your XCTestCase class and the provided options.
 *
 * @param options An object describing the options to use when measuring the block, such as the number of times the block should be executed.
 * @param block The block to be measured.
 *
 * @seealso XCTMeasureOptions
 */
- (void)measureWithOptions:(XCTMeasureOptions *)options block:(XCT_NOESCAPE void (^)(void))block XCT_METRIC_API_AVAILABLE;

/*!
 * @method -measureWithMetrics:options:block:
 * Measures the block using the provided metrics and options.
 *
 * @param metrics A non-empty array of objects which adopt the XCTMetric protocol, describing the set of metrics to measure.
 * @param options An object describing the options to use when measuring the block, such as the number of times the block should be executed.
 * @param block The block to be measured.
 */
- (void)measureWithMetrics:(NSArray<id<XCTMetric>> *)metrics options:(XCTMeasureOptions *)options block:(XCT_NOESCAPE void (^)(void))block XCT_METRIC_API_AVAILABLE;

@end

#pragma mark - Deprecated/discouraged APIs

/*
 The APIs below are deprecated and may be removed in a future release. Please do not use them in
 new code, and for existing code which uses them, consult their documentation for information about
 replacement(s) to use instead.
 */

@interface XCTestCase (XCTDeprecated)

/*!
 * @method -recordFailureWithDescription:inFile:atLine:expected:
 * Records a failure in the execution of the test.
 *
 * This method is deprecated and has been replaced by the `-recordIssue:` method and XCTIssue class, which
 * provide greater flexibility for recording issues that arise during testing. Overriding this method in an XCTestCase subclass and
 * modifying its arguments before calling `super` may cause information about the failure to be lost and is not recommended.
 * Instead, override `-recordIssue:` and pass `super` a modified XCTIssue.
 *
 * @param description The description of the failure being recorded. When replacing usage of this deprecated API,
 * this can be represented using the `compactDescription` property on XCTIssue.
 *
 * @param filePath The file path to the source file where the failure being recorded was encountered.
 * When replacing usage of this deprecated API, this can be specified using an XCTSourceCodeLocation instance
 * associated with an XCTIssue via its `sourceCodeContext` property.
 *
 * @param lineNumber The line number in the source file at filePath where the failure being recorded
 * was encountered. When replacing usage of this deprecated API, this can be specified using an XCTSourceCodeLocation
 * instance associated with an XCTIssue via its `sourceCodeContext` property.
 *
 * @param expected NO if the failure being recorded was the result of an uncaught exception, YES if it was the result
 * of a failed assertion or any other reason. When replacing usage of this deprecated API, the representation using XCTIssue may vary.
 * A NO value may be specified using the issue type `XCTIssueTypeUncaughtException`, and a YES value may be represented
 * using a different issue type such as `XCTIssueTypeAssertionFailure` combined with other properties on XCTIssue.
 */
- (void)recordFailureWithDescription:(NSString *)description
                              inFile:(NSString *)filePath
                              atLine:(NSUInteger)lineNumber
                            expected:(BOOL)expected XCT_DEPRECATED_WITH_REPLACEMENT("-recordIssue:");

@end

NS_ASSUME_NONNULL_END

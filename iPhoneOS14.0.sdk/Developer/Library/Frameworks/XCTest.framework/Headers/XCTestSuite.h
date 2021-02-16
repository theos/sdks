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

NS_ASSUME_NONNULL_BEGIN

/*!
 * @class XCTestSuite
 * A concrete subclass of XCTest, XCTestSuite is a collection of test cases. Suites
 * are usually managed by the IDE, but XCTestSuite also provides API for dynamic test
 * and suite management:
 * @textblock

    XCTestSuite *suite = [XCTestSuite testSuiteWithName:@"My tests"];
    [suite addTest:[MathTest testCaseWithSelector:@selector(testAdd)]];
    [suite addTest:[MathTest testCaseWithSelector:@selector(testDivideByZero)]];

 * @/textblock
 * Alternatively, a test suite can extract the tests to be run automatically. To do so,
 * pass the class of your test case class to the suite's constructor:
 * @textblock

    XCTestSuite *suite = [XCTestSuite testSuiteForTestCaseClass:[MathTest class]];

 * @/textblock
 * This creates a suite with all the methods starting with "test" that take no arguments.
 * Also, a test suite of all the test cases found in the runtime can be created automatically:
 * @textblock

    XCTestSuite *suite = XCTestSuite.defaultTestSuite;

 * @/textblock
 * This creates a suite of suites with all the XCTestCase subclasses methods that start
 * with "test" and take no arguments.
 */
@interface XCTestSuite : XCTest

@property (class, readonly) XCTestSuite *defaultTestSuite;
+ (instancetype)defaultTestSuite;
+ (instancetype)testSuiteForBundlePath:(NSString *)bundlePath;
+ (instancetype)testSuiteForTestCaseWithName:(NSString *)name;
+ (instancetype)testSuiteForTestCaseClass:(Class)testCaseClass;

+ (instancetype)testSuiteWithName:(NSString *)name;
- (instancetype)initWithName:(NSString *)name NS_DESIGNATED_INITIALIZER;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (void)addTest:(XCTest *)test;

@property (readonly, copy) NSArray <__kindof XCTest *> *tests;

@end

NS_ASSUME_NONNULL_END


//
//  Copyright © 2019 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * @enum XCTMeasurementInvocationOptions
 */
typedef NS_OPTIONS(NSUInteger, XCTMeasurementInvocationOptions) {
    /* When provided, XCTestCase will automatically take measurements at the beginning and end of the measure block. This is the default. */
    XCTMeasurementInvocationNone = 0,
    /* When provided, XCTestCase will not take any measurements until -startMeasuring is called. */
    XCTMeasurementInvocationManuallyStart = 1 << 0,
    /* When provided, XCTestCase will stop taking measurements after -stopMeasuring is called. */
    XCTMeasurementInvocationManuallyStop = 1 << 1,
};

/*!
 * @class XCTMeasureOptions
 * Collection of options which configures behavior when passed into the -[XCTMeasure measure*] APIs.
 */
@interface XCTMeasureOptions : NSObject

/*!
 * @property defaultOptions
 * Builds a set of recommended default options for measuring.
 *
 * @return An object which represents a set of default configuration options for measuring.
 */
@property (class, readonly, copy) XCTMeasureOptions *defaultOptions;

/*!
 * @property invocationOptions
 * Set of options which configure how measurements are taken. The default option is XCTMeasurementInvocationNone.
 */
@property (nonatomic) XCTMeasurementInvocationOptions invocationOptions;

/*!
 * @property iterationCount
 * The number of times the block being measured should be invoked. The default value is 5.
 * Note that the block is actually invoked `iterationCount` + 1 times, and the first iteration
 * is discarded. This is done to reduce the chance that the first iteration will be an outlier.
 */
@property (nonatomic) NSUInteger iterationCount;

@end

NS_ASSUME_NONNULL_END

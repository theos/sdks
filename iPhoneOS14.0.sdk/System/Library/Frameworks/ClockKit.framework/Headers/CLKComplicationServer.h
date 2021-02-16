//
//  CLKComplicationServer.h
//  ClockKit
//
//  Copyright © 2015 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <ClockKit/CLKDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class CLKComplication;

extern NSString * const CLKComplicationServerActiveComplicationsDidChangeNotification API_AVAILABLE(watchos(2.0)) API_UNAVAILABLE(ios);

API_AVAILABLE(watchos(2.0)) API_UNAVAILABLE(ios)
@interface CLKComplicationServer : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, readonly, nullable) NSArray<CLKComplication *> *activeComplications;

@property (nonatomic, readonly) NSDate *earliestTimeTravelDate;
@property (nonatomic, readonly) NSDate *latestTimeTravelDate;

- (void)reloadTimelineForComplication:(CLKComplication *)complication;
- (void)extendTimelineForComplication:(CLKComplication *)complication;

- (void)reloadComplicationDescriptors API_AVAILABLE(watchos(7.0)) API_UNAVAILABLE(ios);

@end

NS_ASSUME_NONNULL_END

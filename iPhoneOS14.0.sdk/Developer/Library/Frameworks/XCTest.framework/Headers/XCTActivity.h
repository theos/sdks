//
//  Copyright © 2017 Apple. All rights reserved.
//

#import <XCTest/XCTAttachmentLifetime.h>

NS_ASSUME_NONNULL_BEGIN

@class XCTAttachment;

/*!
 * Represents a test activity.
 */
@protocol XCTActivity <NSObject>

/*!
 * Human-readable name of the activity, given at creation time.
 */
@property (readonly, copy) NSString *name;

/*!
 * Adds an attachment which is always kept by Xcode, regardless of the test result.
 * Thread-safe, attachments can be added from any thread, are reported in the order they are added.
 */
- (void)addAttachment:(XCTAttachment *)attachment;

@end

NS_ASSUME_NONNULL_END

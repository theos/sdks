//
//  Copyright © 2017 Apple. All rights reserved.
//

#import <XCTest/XCTestDefines.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, XCTAttachmentLifetime) {
    
    /*
     * Attachment will be kept regardless of the outcome of the test.
     */
    XCTAttachmentLifetimeKeepAlways = 0,
    
    /*
     * Attachment will only be kept when the test fails, and deleted otherwise.
     */
    XCTAttachmentLifetimeDeleteOnSuccess = 1
};

NS_ASSUME_NONNULL_END

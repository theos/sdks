//
//  CLSContextProvider.h
//  ClassKit
//
//  Created by Baskaran Subramaniam on 10/02/18.
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ClassKit/CLSDefines.h>


@class CLSContext;

NS_ASSUME_NONNULL_BEGIN

/*!
 @abstract      The CLSContext provider protocol.
 @discussion    The app extension that provides CLSContexts should adopt this protocol.
 */
API_AVAILABLE(ios(12.2)) API_UNAVAILABLE(macos) API_UNAVAILABLE(watchos, tvos)
@protocol CLSContextProvider

@required

/*!
 @abstract      This method asks the app extension to update CLSContexts that are descendants of a given context.
 @param         context     A CLSContext whose descendants are to be updated
 @param         completion  A completion block the extension should call with an optional error to indicate success or failure.
 @discussion    The extension may choose to modify, delete, or create some or all descendants of the given context. The host app may call this method as the user selects a context.
 */
- (void)updateDescendantsOfContext:(CLSContext *)context completion:(void(^)(NSError * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END

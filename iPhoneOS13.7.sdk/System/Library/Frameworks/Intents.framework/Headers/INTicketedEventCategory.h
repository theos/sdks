//
//  INTicketedEventCategory.h
//  Intents
//
//  Copyright (c) 2016-2020 Apple Inc. All rights reserved.
//

#ifndef INTicketedEventCategory_h
#define INTicketedEventCategory_h

#import <Foundation/Foundation.h>
#import <Intents/IntentsDefines.h>

typedef NS_ENUM(NSInteger, INTicketedEventCategory) {
    INTicketedEventCategoryUnknown = 0,
    INTicketedEventCategoryMovie,
} API_AVAILABLE(ios(13.0), watchos(6.0)) API_UNAVAILABLE(macos, tvos);

#endif // INTicketedEventCategory_h

//
//  INChargingConnectorTypeOptions.h
//  Intents
//
//  Copyright (c) 2016-2020 Apple Inc. All rights reserved.
//

#ifndef INChargingConnectorTypeOptions_h
#define INChargingConnectorTypeOptions_h

#import <Foundation/Foundation.h>
#import <Intents/IntentsDefines.h>

typedef NS_OPTIONS(NSUInteger, INChargingConnectorTypeOptions) {
    INChargingConnectorTypeOptionNone = (1UL << 0),
    INChargingConnectorTypeOptionJ1772 = (1UL << 1),
    INChargingConnectorTypeOptionCCS1 = (1UL << 2),
    INChargingConnectorTypeOptionCCS2 = (1UL << 3),
    INChargingConnectorTypeOptionCHAdeMO = (1UL << 4),
    INChargingConnectorTypeOptionGBTAC = (1UL << 5),
    INChargingConnectorTypeOptionGBTDC = (1UL << 6),
    INChargingConnectorTypeOptionTesla = (1UL << 7),
    INChargingConnectorTypeOptionMennekes = (1UL << 8),
} API_AVAILABLE(ios(14.0), watchos(7.0)) API_UNAVAILABLE(macos, tvos);

#endif // INChargingConnectorTypeOptions_h

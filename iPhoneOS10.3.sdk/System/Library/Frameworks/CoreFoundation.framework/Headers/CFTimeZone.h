/*	CFTimeZone.h
	Copyright (c) 1998-2016, Apple Inc. All rights reserved.
*/

#if !defined(__COREFOUNDATION_CFTIMEZONE__)
#define __COREFOUNDATION_CFTIMEZONE__ 1

#include <CoreFoundation/CFBase.h>
#include <CoreFoundation/CFArray.h>
#include <CoreFoundation/CFData.h>
#include <CoreFoundation/CFDate.h>
#include <CoreFoundation/CFDictionary.h>
#include <CoreFoundation/CFString.h>
#include <CoreFoundation/CFNotificationCenter.h>
#include <CoreFoundation/CFLocale.h>

CF_IMPLICIT_BRIDGING_ENABLED
CF_EXTERN_C_BEGIN

CF_EXPORT
CFTypeID CFTimeZoneGetTypeID(void);

CF_EXPORT
CFTimeZoneRef CFTimeZoneCopySystem(void);

CF_EXPORT
void CFTimeZoneResetSystem(void);

CF_EXPORT
CFTimeZoneRef CFTimeZoneCopyDefault(void);

CF_EXPORT
void CFTimeZoneSetDefault(CFTimeZoneRef tz);

CF_EXPORT
CFArrayRef CFTimeZoneCopyKnownNames(void);

CF_EXPORT
CFDictionaryRef CFTimeZoneCopyAbbreviationDictionary(void);

CF_EXPORT
void CFTimeZoneSetAbbreviationDictionary(CFDictionaryRef dict);

CF_EXPORT
CFTimeZoneRef CFTimeZoneCreate(CFAllocatorRef allocator, CFStringRef name, CFDataRef data);

CF_EXPORT
CFTimeZoneRef CFTimeZoneCreateWithTimeIntervalFromGMT(CFAllocatorRef allocator, CFTimeInterval ti);

CF_EXPORT
CFTimeZoneRef CFTimeZoneCreateWithName(CFAllocatorRef allocator, CFStringRef name, Boolean tryAbbrev);

CF_EXPORT
CFStringRef CFTimeZoneGetName(CFTimeZoneRef tz);

CF_EXPORT
CFDataRef CFTimeZoneGetData(CFTimeZoneRef tz);

CF_EXPORT
CFTimeInterval CFTimeZoneGetSecondsFromGMT(CFTimeZoneRef tz, CFAbsoluteTime at);

CF_EXPORT
CFStringRef CFTimeZoneCopyAbbreviation(CFTimeZoneRef tz, CFAbsoluteTime at);

CF_EXPORT
Boolean CFTimeZoneIsDaylightSavingTime(CFTimeZoneRef tz, CFAbsoluteTime at);

CF_EXPORT
CFTimeInterval CFTimeZoneGetDaylightSavingTimeOffset(CFTimeZoneRef tz, CFAbsoluteTime at) CF_AVAILABLE(10_5, 2_0);

CF_EXPORT
CFAbsoluteTime CFTimeZoneGetNextDaylightSavingTimeTransition(CFTimeZoneRef tz, CFAbsoluteTime at) CF_AVAILABLE(10_5, 2_0);

typedef CF_ENUM(CFIndex, CFTimeZoneNameStyle) {
	kCFTimeZoneNameStyleStandard,
	kCFTimeZoneNameStyleShortStandard,
	kCFTimeZoneNameStyleDaylightSaving,
	kCFTimeZoneNameStyleShortDaylightSaving,
	kCFTimeZoneNameStyleGeneric,
	kCFTimeZoneNameStyleShortGeneric
} CF_ENUM_AVAILABLE(10_5, 2_0);

CF_EXPORT
CFStringRef CFTimeZoneCopyLocalizedName(CFTimeZoneRef tz, CFTimeZoneNameStyle style, CFLocaleRef locale) CF_AVAILABLE(10_5, 2_0);

CF_EXPORT
const CFNotificationName kCFTimeZoneSystemTimeZoneDidChangeNotification CF_AVAILABLE(10_5, 2_0);

CF_EXTERN_C_END
CF_IMPLICIT_BRIDGING_DISABLED

#endif /* ! __COREFOUNDATION_CFTIMEZONE__ */


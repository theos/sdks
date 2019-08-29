#ifndef LOCKDOWN_LOCKDOWN_H
#define LOCKDOWN_LOCKDOWN_H

#include <CoreFoundation/CFString.h>

#ifdef __cplusplus
extern "C" {
#endif

extern CFStringRef kLockdownUniqueDeviceIDKey;

extern void *lockdown_connect(void);
extern CFStringRef lockdown_copy_value(void *lockdown, void *null, CFStringRef key);
extern void lockdown_disconnect(void *lockdown);

#ifdef __cplusplus
}
#endif

#endif/*LOCKDOWN_LOCKDOWN_H*/

/* iPhone Open SDK - Free Open Source Anti-Apple SDK
 * Copyright (C) 2008  Jay Freeman (saurik)
*/

/*
 *        Redistribution and use in source and binary
 * forms, with or without modification, are permitted
 * provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the
 *    above copyright notice, this list of conditions
 *    and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the
 *    above copyright notice, this list of conditions
 *    and the following disclaimer in the documentation
 *    and/or other materials provided with the
 *    distribution.
 * 3. The name of the author may not be used to endorse
 *    or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef LOCKDOWN_LOCKDOWN_H
#define LOCKDOWN_LOCKDOWN_H

#include <CoreFoundation/CFString.h>

#ifdef __cplusplus
extern "C" {
#endif

extern CFStringRef kLDErrorMissingKey;

extern CFStringRef kLockdownActivationInfoCompleteKey;
extern CFStringRef kLockdownActivationInfoErrorsKey;
extern CFStringRef kLockdownActivationInfoKey;
extern CFStringRef kLockdownActivationRandomnessKey;
extern CFStringRef kLockdownActivationStateAcknowledgedKey;
extern CFStringRef kLockdownActivationStateKey;
extern CFStringRef kLockdownActivationTicketKey;
extern CFStringRef kLockdownAmountCameraAvailableKey;
extern CFStringRef kLockdownAmountCameraReservedKey;
extern CFStringRef kLockdownAmountDataAvailableKey;
extern CFStringRef kLockdownAmountDataReservedKey;
extern CFStringRef kLockdownAmountSongsReservedKey;
extern CFStringRef kLockdownBasebandBootloaderVersionKey;
extern CFStringRef kLockdownBasebandMasterKeyHashKey;
extern CFStringRef kLockdownBasebandThumbprintKey;
extern CFStringRef kLockdownBasebandVersionKey;
extern CFStringRef kLockdownBluetoothAddressKey;
extern CFStringRef kLockdownBrickStateKey;
extern CFStringRef kLockdownBuildVersionKey;
extern CFStringRef kLockdownCalendarUsageKey;
extern CFStringRef kLockdownCameraUsageKey;
extern CFStringRef kLockdownCaptureSyslogKey;
extern CFStringRef kLockdownCarrierBundleInfoKey;
extern CFStringRef kLockdownCheckpointDomainKey;
extern CFStringRef kLockdownColorSyncProfileKey;
extern CFStringRef kLockdownDBVersionKey;
extern CFStringRef kLockdownDataSyncDomainKey;
extern CFStringRef kLockdownDebugDockPresentKey;
extern CFStringRef kLockdownDebugDomainKey;
extern CFStringRef kLockdownDeviceCertificateKey;
extern CFStringRef kLockdownDeviceClassKey;
extern CFStringRef kLockdownDeviceNameKey;
extern CFStringRef kLockdownDevicePrivateKey;
extern CFStringRef kLockdownDevicePublicKey;
extern CFStringRef kLockdownDiskUsageDomainKey;
extern CFStringRef kLockdownEnable8021XLogsKey;
extern CFStringRef kLockdownEnableVPNLogsKey;
extern CFStringRef kLockdownFairPlayCertificateKey;
extern CFStringRef kLockdownFairPlayContextIDKey;
extern CFStringRef kLockdownFairPlayDomainKey;
extern CFStringRef kLockdownFairPlayGUIDKey;
extern CFStringRef kLockdownFairPlayIDKey;
extern CFStringRef kLockdownFairPlayKeyDataKey;
extern CFStringRef kLockdownFamilyIDKey;
extern CFStringRef kLockdownFirmwareVersionKey;
extern CFStringRef kLockdownHostAttachedKey;
extern CFStringRef kLockdownICCIDKey;
extern CFStringRef kLockdownIMEIKey;
extern CFStringRef kLockdownIMSIKey;
extern CFStringRef kLockdownInternalDomainKey;
extern CFStringRef kLockdownInternationalDomainKey;
extern CFStringRef kLockdownInverseDeviceIDKey;
extern CFStringRef kLockdownIsInternalKey;
extern CFStringRef kLockdownKeyboardKey;
extern CFStringRef kLockdownLanguageKey;
extern CFStringRef kLockdownLocaleKey;
extern CFStringRef kLockdownLogToDiskKey;
extern CFStringRef kLockdownMediaCacheUsageKey;
extern CFStringRef kLockdownMinimumiTunesVersionKey;
extern CFStringRef kLockdownMobileApplicationUsageKey;
extern CFStringRef kLockdownModelNumberKey;
extern CFStringRef kLockdownNANDInfoKey;
extern CFStringRef kLockdownNotesUsageKey;
extern CFStringRef kLockdownPasswordProtectedKey;
extern CFStringRef kLockdownPhoneNumberKey;
extern CFStringRef kLockdownPhotoUsageKey;
extern CFStringRef kLockdownProductTypeKey;
extern CFStringRef kLockdownProductVersionKey;
extern CFStringRef kLockdownProhibitAppInstallKey;
extern CFStringRef kLockdownProposedTicketKey;
extern CFStringRef kLockdownProtocolVersionKey;
extern CFStringRef kLockdownRegionInfoKey;
extern CFStringRef kLockdownReleaseTypeKey;
extern CFStringRef kLockdownRentalBagRequestKey;
extern CFStringRef kLockdownRentalBagRequestVersionKey;
extern CFStringRef kLockdownRentalBagResponseKey;
extern CFStringRef kLockdownRentalCheckinAckRequestKey;
extern CFStringRef kLockdownRentalCheckinAckResponseKey;
extern CFStringRef kLockdownReservedBytesKey;
extern CFStringRef kLockdownRestrictionDomainKey;
extern CFStringRef kLockdownSIMGID1Key;
extern CFStringRef kLockdownSIMGID2Key;
extern CFStringRef kLockdownSIMStatusKey;
extern CFStringRef kLockdownSerialNumberKey;
extern CFStringRef kLockdownSomebodySetTimeZoneKey;
extern CFStringRef kLockdownSupportedKeyboardsKey;
extern CFStringRef kLockdownSupportedLanguagesKey;
extern CFStringRef kLockdownSupportedLocalesKey;
extern CFStringRef kLockdownSupportsCarrierBundleInstallKey;
extern CFStringRef kLockdownSyncDataClassDomainKey;
extern CFStringRef kLockdownTimeIntervalSince1970Key;
extern CFStringRef kLockdownTimeZoneKey;
extern CFStringRef kLockdownTimeZoneOffsetFromUTCKey;
extern CFStringRef kLockdownTotalDataAvailableKey;
extern CFStringRef kLockdownTotalDataCapacityKey;
extern CFStringRef kLockdownTotalDiskCapacityKey;
extern CFStringRef kLockdownTotalSystemAvailableKey;
extern CFStringRef kLockdownTotalSystemCapacityKey;
extern CFStringRef kLockdownTrustedHostAttachedKey;
extern CFStringRef kLockdownUniqueDeviceIDKey;
extern CFStringRef kLockdownUnlockCodeKey;
extern CFStringRef kLockdownUserPreferencesDomainKey;
extern CFStringRef kLockdownUserSetLanguageKey;
extern CFStringRef kLockdownUserSetLocaleKey;
extern CFStringRef kLockdownUses24HourClockKey;
extern CFStringRef kLockdownVoicemailUsageKey;
extern CFStringRef kLockdownVoidWarrantyKey;
extern CFStringRef kLockdownWifiAddressKey;
extern CFStringRef kLockdownWildcardTicketKey;
extern CFStringRef kLockdowniTunesHasConnectedKey;

extern void *lockdown_connect(void);
extern CFStringRef lockdown_copy_value(void *lockdown, void *null, CFStringRef key);
extern void lockdown_disconnect(void *lockdown);

#ifdef __cplusplus
}
#endif

#endif/*LOCKDOWN_LOCKDOWN_H*/
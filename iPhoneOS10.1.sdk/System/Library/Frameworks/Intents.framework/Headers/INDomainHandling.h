//
//  INDomainHandling.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INIntents.h>

API_AVAILABLE(macosx(10.12),ios(10.0))
@protocol INCallsDomainHandling <INStartAudioCallIntentHandling, INStartVideoCallIntentHandling, INSearchCallHistoryIntentHandling>
@end

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(macosx)
@protocol INCarPlayDomainHandling <INSetAudioSourceInCarIntentHandling, INSetClimateSettingsInCarIntentHandling, INSetDefrosterSettingsInCarIntentHandling, INSetSeatSettingsInCarIntentHandling, INSetProfileInCarIntentHandling, INSaveProfileInCarIntentHandling>
@end

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(macosx)
@protocol INWorkoutsDomainHandling <INStartWorkoutIntentHandling, INPauseWorkoutIntentHandling, INEndWorkoutIntentHandling, INCancelWorkoutIntentHandling, INResumeWorkoutIntentHandling>
@end

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(macosx)
@protocol INRadioDomainHandling <INSetRadioStationIntentHandling>
@end

API_AVAILABLE(macosx(10.12), ios(10.0))
@protocol INMessagesDomainHandling <INSendMessageIntentHandling, INSearchForMessagesIntentHandling, INSetMessageAttributeIntentHandling>
@end

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(macosx)
@protocol INPaymentsDomainHandling <INSendPaymentIntentHandling, INRequestPaymentIntentHandling>
@end

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(macosx)
@protocol INPhotosDomainHandling <INSearchForPhotosIntentHandling, INStartPhotoPlaybackIntentHandling>
@end

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(macosx)
@protocol INRidesharingDomainHandling <INListRideOptionsIntentHandling, INRequestRideIntentHandling, INGetRideStatusIntentHandling>
@end

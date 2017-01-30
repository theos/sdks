/*
 File:  AVSpeechSynthesis.h
 
 Framework:  AVFoundation
 
 Copyright 2013-2015 Apple Inc. All rights reserved.
 */

#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, AVSpeechBoundary) {
    AVSpeechBoundaryImmediate,
    AVSpeechBoundaryWord
} NS_ENUM_AVAILABLE_IOS(7_0);

typedef NS_ENUM(NSInteger, AVSpeechSynthesisVoiceQuality) {
    AVSpeechSynthesisVoiceQualityDefault = 1,
    AVSpeechSynthesisVoiceQualityEnhanced
} NS_ENUM_AVAILABLE_IOS(9_0);

AVF_EXPORT const float AVSpeechUtteranceMinimumSpeechRate NS_AVAILABLE_IOS(7_0);
AVF_EXPORT const float AVSpeechUtteranceMaximumSpeechRate NS_AVAILABLE_IOS(7_0);
AVF_EXPORT const float AVSpeechUtteranceDefaultSpeechRate NS_AVAILABLE_IOS(7_0);

// Use the Alex identifier with voiceWithIdentifier:. If the voice is present on the system,
// an AVSpeechSynthesisVoice will be returned. Alex is en-US only.
AVF_EXPORT NSString *const AVSpeechSynthesisVoiceIdentifierAlex NS_AVAILABLE_IOS(9_0);

@protocol AVSpeechSynthesizerDelegate;

/*!
 @class AVSpeechSynthesisVoice
 @abstract
 AVSpeechSynthesisVoice encapsulates the attributes of the voice used to synthesize speech on the system.
 
 @discussion
 Retrieve a voice by specifying the language code your text should be spoken in, or by using voiceWithIdentifier
 for a known voice identifier.
 */
NS_CLASS_AVAILABLE_IOS(7_0)
@interface AVSpeechSynthesisVoice : NSObject<NSSecureCoding>

+ (NSArray<AVSpeechSynthesisVoice *> *)speechVoices;
+ (NSString *)currentLanguageCode;

/*!
 @method        voiceWithLanguage:
 @abstract      Use a BCP-47 language tag to specify the desired language and region.
 @param			language
 Specifies the BCP-47 language tag that represents the voice.
 @discussion
 The default is the system's region and language.
 Passing in nil will return the default voice.
 Passing in an invalid languageCode will return nil.
 Will return enhanced quality voice if available, default quality otherwise.
 Examples: en-US (U.S. English), fr-CA (French Canadian)
 */
+ (nullable AVSpeechSynthesisVoice *)voiceWithLanguage:(nullable NSString *)languageCode;

/*!
 @method        voiceWithIdentifier:
 @abstract      Retrieve a voice by its identifier.
 @param			identifier
 A unique identifier for a voice.
 @discussion
 Passing in an invalid identifier will return nil.
 Returns nil if the identifier is valid, but the voice is not available on device (i.e. not yet downloaded by the user).
 */
+ (nullable AVSpeechSynthesisVoice *)voiceWithIdentifier:(NSString *)identifier NS_AVAILABLE_IOS(9_0);

@property(nonatomic, readonly) NSString *language;
@property(nonatomic, readonly) NSString *identifier NS_AVAILABLE_IOS(9_0);
@property(nonatomic, readonly) NSString *name NS_AVAILABLE_IOS(9_0);
@property(nonatomic, readonly) AVSpeechSynthesisVoiceQuality quality NS_AVAILABLE_IOS(9_0);

@end

/*!
 @class AVSpeechUtterance
 @abstract
 AVSpeechUtterance is the atom of speaking a string or pausing the synthesizer.
 
 @discussion
 To start speaking, specify the AVSpeechSynthesisVoice and the string to be spoken, then optionally change the rate, pitch or volume if desired.
 */
NS_CLASS_AVAILABLE_IOS(7_0)
@interface AVSpeechUtterance : NSObject<NSCopying, NSSecureCoding>

+ (instancetype)speechUtteranceWithString:(NSString *)string;

- (instancetype)initWithString:(NSString *)string;

/* If no voice is specified, the system's default will be used. */
@property(nonatomic, retain, nullable) AVSpeechSynthesisVoice *voice;

@property(nonatomic, readonly) NSString *speechString;

/* Setting these values after a speech utterance has been enqueued will have no effect. */

@property(nonatomic) float rate;             // Values are pinned between AVSpeechUtteranceMinimumSpeechRate and AVSpeechUtteranceMaximumSpeechRate.
@property(nonatomic) float pitchMultiplier;  // [0.5 - 2] Default = 1
@property(nonatomic) float volume;           // [0-1] Default = 1

@property(nonatomic) NSTimeInterval preUtteranceDelay;    // Default is 0.0
@property(nonatomic) NSTimeInterval postUtteranceDelay;   // Default is 0.0


@end

/*!
 @class AVSpeechSynthesizer
 @abstract
 AVSpeechSynthesizer allows speaking of speech utterances with a basic queuing mechanism.
 
 @discussion
 Create an instance of AVSpeechSynthesizer to start generating synthesized speech by using AVSpeechUtterance objects.
 */
NS_CLASS_AVAILABLE_IOS(7_0)
@interface AVSpeechSynthesizer : NSObject

@property(nonatomic, assign, nullable) id<AVSpeechSynthesizerDelegate> delegate;

@property(nonatomic, readonly, getter=isSpeaking) BOOL speaking;
@property(nonatomic, readonly, getter=isPaused) BOOL paused;

/* AVSpeechUtterances are queued by default. 
   Enqueing the same AVSpeechUtterance that is already enqueued or is speaking will raise an exception. */
- (void)speakUtterance:(AVSpeechUtterance *)utterance;

/* These methods will operate on the speech utterance that is speaking. Returns YES if it succeeds, NO for failure. */

/* Call stopSpeakingAtBoundary: to interrupt current speech and clear the queue. */
- (BOOL)stopSpeakingAtBoundary:(AVSpeechBoundary)boundary;
- (BOOL)pauseSpeakingAtBoundary:(AVSpeechBoundary)boundary;
- (BOOL)continueSpeaking;

@end

/*!
 @protocol AVSpeechSynthesizerDelegate
 @abstract
 Defines an interface for delegates of AVSpeechSynthesizer to receive notifications of important speech utterance events.
 */
@protocol AVSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(AVSpeechSynthesizer *)synthesizer didStartSpeechUtterance:(AVSpeechUtterance *)utterance;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)synthesizer didFinishSpeechUtterance:(AVSpeechUtterance *)utterance;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)synthesizer didPauseSpeechUtterance:(AVSpeechUtterance *)utterance;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)synthesizer didContinueSpeechUtterance:(AVSpeechUtterance *)utterance;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)synthesizer didCancelSpeechUtterance:(AVSpeechUtterance *)utterance;

- (void)speechSynthesizer:(AVSpeechSynthesizer *)synthesizer willSpeakRangeOfSpeechString:(NSRange)characterRange utterance:(AVSpeechUtterance *)utterance;
@end

NS_ASSUME_NONNULL_END


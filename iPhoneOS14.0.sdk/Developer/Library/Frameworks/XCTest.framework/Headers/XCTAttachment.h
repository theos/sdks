//
//  Copyright © 2017 Apple. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCTAttachmentLifetime.h>

NS_ASSUME_NONNULL_BEGIN

/*!
 * @class XCTAttachment
 * Represents the concept of data attached to an XCTActivity. Allows reporting more context about the test run
 * for debugging, such as screenshots, log files, and configuration dictionaries.
 *
 * Each attachment must be added to an activity to be handed off to XCTest. There are two ways to get an activity:
 * 1. XCTestCase conforms to the XCTActivity protocol, attachments can be added to it directly.
 * 2. Create a nested activity with +[XCTContext runActivityNamed:block:], the parameter inside the block is a new activity to which attachments can be added.
 *
 * Once you have an XCTActivity-conforming object:
 * • Create a new XCTAttachment with one of the initializers provided.
 * • Optionally customize the attachment's `lifetime`, `name` and `userInfo` properties.
 * • Add the attachment to the activity with -[XCTActivity addAttachment:].
 *
 * @textblock
 
    - (void)testFoo
    {
        // ...
        NSString *logs = ...
        XCTAttachment *attachment = [XCTAttachment attachmentWithString:logs];
        attachment.name = @"Build logs";
        [self addAttachment:attachment];
    }

    - (void)testNestedFoo
    {
        // ...
        [XCTContext runActivityNamed:@"Collect logs" block:^(id<XCTActivity> activity){
            NSString *logs = ...
            XCTAttachment *attachment = [XCTAttachment attachmentWithString:logs];
            attachment.name = @"Build logs";
            [activity addAttachment:attachment];
        }];
    }
 
 * @/textblock
 *
 * Attachments have the default lifetime of .deleteOnSuccess, which means they are deleted when
 * their test passes. This ensures attachments are only kept when test fails. To override this
 * behavior, change the value of the `lifetime` property to .keepAlways before adding it to an activity.
 *
 * @textblock
 
     - (void)testImportantAttachment
     {
         XCTAttachment *attachment = ...
         attachment.lifetime = XCTAttachmentLifetimeKeepAlways;
         [self addAttachment:attachment];
     }
 
 * @/textblock
 */
@interface XCTAttachment : NSObject <NSSecureCoding>

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/*!
 * @method -initWithUniformTypeIdentifier:name:payload:userInfo:
 */
- (instancetype)initWithUniformTypeIdentifier:(nullable NSString *)identifier
                                         name:(nullable NSString *)name
                                      payload:(nullable NSData *)payload
                                     userInfo:(nullable NSDictionary *)userInfo NS_DESIGNATED_INITIALIZER;

+ (instancetype)attachmentWithUniformTypeIdentifier:(nullable NSString *)identifier
                                               name:(nullable NSString *)name
                                            payload:(nullable NSData *)payload
                                           userInfo:(nullable NSDictionary *)userInfo;

/*!
 * @property uniformTypeIdentifier
 * UTI (Uniform Type Identifier) of the payload data.
 * Examples: "public.png", "public.jpeg", "public.plain-text", "public.data", "com.apple.xml-property-list".
 */
@property (readonly, copy) NSString *uniformTypeIdentifier;

/*!
 * @property name
 * Attachment name.
 */
@property (copy, nullable) NSString *name;

/*!
 * @property userInfo
 * Container for additional metadata, such as pixel density with images.
 */
@property (copy, nullable) NSDictionary *userInfo;

/*
 * @property lifetime
 * Attachment lifetime. Controls whether the attachment is persisted.
 * @see XCTAttachmentLifetime
 * Default: XCTAttachmentLifetimeDeleteOnSuccess
 */
@property XCTAttachmentLifetime lifetime;

@end

#if TARGET_OS_OSX
@class NSImage;
#else
@class UIImage;
#endif

#if XCT_UI_TESTING_AVAILABLE
@class XCUIScreenshot;
#endif

/*!
 * @enum XCTImageQuality
 */
typedef NS_ENUM(NSInteger, XCTImageQuality) {
    
    /* Original quality, lossless PNG. */
    XCTImageQualityOriginal,
    
    /* High quality, lossy JPEG or HEIC. */
    XCTImageQualityMedium,
    
    /* Highly compressed, lossy JPEG or HEIC. */
    XCTImageQualityLow
};

@interface XCTAttachment (ConvenienceInitializers)

/*!
 * @method -attachmentWithData:
 * Creates a new data attachment (type "public.data") with the specified payload.
 */
+ (instancetype)attachmentWithData:(NSData *)payload;

/*!
 * @method -attachmentWithData:uniformTypeIdentifier:
 * Creates a new attachment with the specified payload and type.
 */
+ (instancetype)attachmentWithData:(NSData *)payload uniformTypeIdentifier:(NSString *)identifier;

/*!
 * @method -attachmentWithString:
 * Creates a new plain UTF-8 encoded text attachment (type "public.plain-text") with the specified string.
 */
+ (instancetype)attachmentWithString:(NSString *)string;

/*!
 * @method -attachmentWithArchivableObject:
 * Creates an attachment with an object that can be encoded with NSSecureCoding.
 * Defaults to type "public.data".
 */
+ (instancetype)attachmentWithArchivableObject:(id<NSSecureCoding>)object;

/*!
 * @method -attachmentWithArchivableObject:uniformTypeIdentifier:
 * Creates an attachment with an object that can be encoded with NSSecureCoding and type.
 */
+ (instancetype)attachmentWithArchivableObject:(id<NSSecureCoding>)object uniformTypeIdentifier:(NSString *)identifier;

/*!
 * @method -attachmentWithPlistObject:
 * Creates an attachment with an object that can be encoded into an XML property list.
 */
+ (instancetype)attachmentWithPlistObject:(id)object;

/*!
 * @method -attachmentWithContentsOfFileAtURL:
 * Creates an attachment with an existing file on disk. Attachment's UTI is inferred from the file extension.
 * If no type can be inferred from the extension, fallback is "public.data".
 * @note Only works for files, not directories.
 */
+ (instancetype)attachmentWithContentsOfFileAtURL:(NSURL *)url;

/*!
 * @method -attachmentWithContentsOfFileAtURL:uniformTypeIdentifier:
 * Creates an attachment with an existing file on disk and type.
 * @note Only works for files, not directories.
 */
+ (instancetype)attachmentWithContentsOfFileAtURL:(NSURL *)url uniformTypeIdentifier:(NSString *)identifier;

#if TARGET_OS_OSX || TARGET_OS_MACCATALYST
/*!
 * @method -attachmentWithCompressedContentsOfDirectoryAtURL:
 * Creates an attachment with an existing directory on disk. Automatically zips the directory, the content type is "public.zip-archive".
 */
+ (instancetype)attachmentWithCompressedContentsOfDirectoryAtURL:(NSURL *)url;
#endif

/*!
 * @method +attachmentWithImage:
 * Creates an attachment with a platform-specific image class.
 */
#if TARGET_OS_OSX
+ (instancetype)attachmentWithImage:(NSImage *)image;
#else
+ (instancetype)attachmentWithImage:(UIImage *)image;
#endif

/*!
 * @method +attachmentWithImage:quality:
 * Creates an attachment with a platform-specific image class and specified quality.
 */
#if TARGET_OS_OSX
+ (instancetype)attachmentWithImage:(NSImage *)image quality:(XCTImageQuality)quality;
#else
+ (instancetype)attachmentWithImage:(UIImage *)image quality:(XCTImageQuality)quality;
#endif

#if XCT_UI_TESTING_AVAILABLE

/*!
 * @method +attachmentWithScreenshot:
 * Creates an attachment with a screenshot and the specified quality.
 */
+ (instancetype)attachmentWithScreenshot:(XCUIScreenshot *)screenshot;

/*!
 * @method +attachmentWithScreenshot:quality:
 * Creates an attachment with a screenshot and the specified quality.
 */
+ (instancetype)attachmentWithScreenshot:(XCUIScreenshot *)screenshot quality:(XCTImageQuality)quality;

#endif

@end

NS_ASSUME_NONNULL_END

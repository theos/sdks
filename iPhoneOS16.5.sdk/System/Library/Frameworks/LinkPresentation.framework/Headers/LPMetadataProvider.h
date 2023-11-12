//
//  LinkPresentation
//  Copyright © 2015-2019 Apple Inc. All rights reserved.
//

#import <LinkPresentation/LPFoundation.h>

#import <LinkPresentation/LPLinkMetadata.h>

NS_ASSUME_NONNULL_BEGIN

/**
 An LPMetadataProvider object retrieves metadata for a given URL.

 An instance of LPMetadataProvider can only be asked to retrieve metadata once;
 a new instance should be created for each request.

 A client must have the com.apple.security.network.client entitlement
 in order to be able to use LPMetadataProvider for remote URLs.

 @see `LPLinkMetadata`
 */

/// An object that retrieves metadata for a URL.
///
/// Use ``LPMetadataProvider`` to fetch metadata for a URL, including its title,
/// icon, and image or video links. All properties on the resulting
/// ``LPLinkMetadata`` instance are optional.
///
/// - Note: To enable macOS clients to fetch metadata for remote URLs, add the
/// <doc://com.apple.documentation/documentation/bundleresources/entitlements/com_apple_security_network_client>
/// entitlement.
///
/// ## Fetch link metadata from a URL
///
/// For each metadata request, create an instance of ``LPMetadataProvider`` and
/// call ``LPMetadataProvider/startFetchingMetadataForURL:completionHandler:``.
///
/// In the completion handler, check the error. If your user doesn’t have a
/// network connection, the fetch can fail. If the server doesn’t respond or is
/// too slow, the fetch can time out. Alternatively, the app may cancel the
/// request, or an unknown error may occur.
///
/// Otherwise, use the metadata however you want, for example, to populate the
/// title for a table view cell.
///
/// ```swift
/// let metadataProvider = LPMetadataProvider()
/// let url = URL(string: "https://www.apple.com/ipad")!
///
/// metadataProvider.startFetchingMetadata(for: url) { metadata, error in
///     if error != nil {
///         // The fetch failed; handle the error.
///         return
///     }
///
///     // Make use of fetched metadata.
/// }
/// ```
///
/// For more information about handling link presentation errors, see
/// ``LinkPresentation/LPError``.
LP_EXTERN API_AVAILABLE(macos(10.15), ios(13.0), watchos(9.0)) API_UNAVAILABLE(tvos)
@interface LPMetadataProvider : NSObject

/**
 Fetch metadata for the given URL.

 The completion handler will be called on a non-main queue.

 File URLs returned in the resultant LPLinkMetadata will be deleted
 when the completion handler returns.

 An exception will be thrown if this is called more than once
 on a particular LPMetadataProvider instance.
 */

/// Fetches metadata for the given URL.
///
/// Call this method once per ``LPMetadataProvider`` instance. If you attempt to
/// fetch metadata multiple times on a single ``LPMetadataProvider`` instance,
/// it throws an error.
///
/// The completion handler executes on a background queue. Dispatch any
/// necessary UI updates back to the main queue. When the completion handler
/// returns, it deletes any file URLs returned in the resulting
/// ``LPLinkMetadata``.
- (void)startFetchingMetadataForURL:(NSURL *)URL completionHandler:(void(^)(LPLinkMetadata *_Nullable metadata, NSError *_Nullable error))completionHandler;

/**
 Fetch metadata for the given NSURLRequest.

 The completion handler will be called on a non-main queue.

 File URLs returned in the resultant LPLinkMetadata will be deleted
 when the completion handler returns.

 An exception will be thrown if this is called more than once
 on a particular LPMetadataProvider instance.
 */

/// > Concurrency Note: You can call this method from synchronous code using a completion handler,
/// > as shown on this page, or you can call it as an asynchronous method that has the
/// > following declaration:
/// >
/// > ```swift
/// >  func startFetchingMetadata(for request: URLRequest) async throws -> LPLinkMetadata
/// > ```
/// >
/// > For information about concurrency and asynchronous code in Swift, see <doc://com.apple.documentation/documentation/swift/calling-objective-c-apis-asynchronously>.
- (void)startFetchingMetadataForRequest:(NSURLRequest *)request completionHandler:(void(^)(LPLinkMetadata *_Nullable metadata, NSError *_Nullable error))completionHandler API_AVAILABLE(macos(12.0), ios(15.0));

/**
 Cancel a metadata request.

 If the request had not already completed, the completion handler will be invoked
 with the error code `LPErrorMetadataFetchCancelled`.
 */

/// Cancels a metadata request.
///
/// This method invokes the completion handler with the error code
/// ``LPErrorCode/LPErrorMetadataFetchCancelled`` if the request hasn’t already
/// completed.
- (void)cancel;

/**
 A boolean value indicating whether LPMetadataProvider should download secondary
 resources specified by the metadata, like the icon, image, or video. If
 shouldFetchSubresources is set to `NO`, the returned LPLinkMetadata object will
 consist only of metadata retrieved from the main resource.
 
 The default value is `YES`.
 */

/// A Boolean value indicating whether to download subresources specified by the
/// metadata.
///
/// Subresources include the icon, image, or video. When set to `false`, the
/// returned ``LPLinkMetadata`` object consists only of metadata retrieved from
/// the main resource identified by the url passed to
/// ``LPMetadataProvider/startFetchingMetadataForURL:completionHandler:``.
///
/// The default value is `true`.
@property (nonatomic) BOOL shouldFetchSubresources;

/**
 The time interval after which the request will automatically fail if it has not
 already completed.

 If the timeout is reached, no metadata is returned; the completion handler will
 be invoked with the error code `LPErrorMetadataFetchTimedOut`.

 The default timeout is 30 seconds.
*/

/// The time interval after which the request automatically fails if it hasn’t
/// already completed.
///
/// The default timeout interval is 30 seconds. If a metadata fetch takes longer
/// than the timeout interval, the completion handler is called with the error
/// code ``LPErrorCode/LPErrorMetadataFetchTimedOut``.
@property (nonatomic) NSTimeInterval timeout;

@end

NS_ASSUME_NONNULL_END

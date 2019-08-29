//
//  TVApplicationController.h
//  TVMLKit
//
//  Copyright (c) 2014-2015 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <TVMLKit/TVMLKitDefines.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class TVApplicationController;

/*!
 @brief This class is used to provide launch info to TVApplicationController.
 */
TV_EXTERN_CLASS_AVAILABLE(9_0)
@interface TVApplicationControllerContext : NSObject <NSCopying>

/*!
 @brief URL to application JavaScript.
 */
@property (nonatomic, copy) NSURL *javaScriptApplicationURL;

/*!
 @brief Optional identifier for local storage file name.
 */
@property (nonatomic, copy, nullable) NSString *storageIdentifier;

/*!
 @brief Data that gets passed to JavaScript onLaunch method. Values must be
            serializable. If app intends for JavaScript to handle openURL: then
            launchOptions should include UIApplicationLaunchOptionsURLKey and
            UIApplicationLaunchOptionsSourceApplicationKey to the launch options.
            TVApplicationController adds location (boot url) by default. If UIApplicationLaunchOptionsURLKey
            and UIApplicationLaunchOptionsSourceApplicationKey are provided then
            maps them to openURL and sourceAppIdentifier keys respectively.
 */
@property (nonatomic, copy) NSDictionary<NSString *, id> *launchOptions;

@end

@protocol TVApplicationControllerDelegate <NSObject>

@optional

/*!
 @brief This method lets delegate to add JavaScript classes and objects.
 */
- (void)appController:(TVApplicationController *)appController evaluateAppJavaScriptInContext:(JSContext *)jsContext NS_AVAILABLE_IOS(9_0);

/*!
 @brief Tells the delegate that the application did finish launching.
 */
- (void)appController:(TVApplicationController *)appController didFinishLaunchingWithOptions:(nullable NSDictionary<NSString *, id> *)options NS_AVAILABLE_IOS(9_0);

/*!
 @brief Tells the delegate that the application failed to load.
 */
- (void)appController:(TVApplicationController *)appController didFailWithError:(NSError *)error NS_AVAILABLE_IOS(9_0);

/*!
 @brief Tells the delegate that the application did stop.
 */
- (void)appController:(TVApplicationController *)appController didStopWithOptions:(nullable NSDictionary<NSString *, id> *)options NS_AVAILABLE_IOS(9_0);

@end

/*!
 @description The TVApplicationController class establishes the JavaScript environment
            to provide a centralized point of control and co-ordination. The class
            bridges the UI, navigation stack, storage and event handling from JavaScript.
  */
TV_EXTERN_CLASS_AVAILABLE(9_0)
@interface TVApplicationController : NSObject

/*!
 @description Initializes and returns application controller given the launch context.
                Optionally window can be passed, and in that case TVApplicationController
                acts like an application delegate, and handles the JavaScript
                application lifecycle events e.g. onResume, onSuspend. If window
                is not provided, caller is responsible for hosting the navigationController.
 */
- (instancetype)initWithContext:(TVApplicationControllerContext *)context window:(nullable UIWindow *)window delegate:(nullable id<TVApplicationControllerDelegate>)delegate NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@property (nonatomic, readonly, nullable) UIWindow *window;
@property (nonatomic, readonly) TVApplicationControllerContext *context;
@property (nonatomic, weak, readonly, nullable) id<TVApplicationControllerDelegate> delegate;

/*!
 @brief Returns the navigation controller which is bridged from JavaScript. Native controllers can also be pushed onto this controller.
 */
@property (nonatomic, readonly) UINavigationController *navigationController;

/*!
 @description Adds the block to the JavaScript execution queue and invokes
            completion block once the evaluation block has finished execution. JSContext is
            valid within the scope of evaluation block and should not be referenced by the
            application outside the block.
 @param evaluation Block to evaluate in JavaScript execution queue.
 @param completion Invoked after the evaluation block has been executed.
            evaluated is YES if the block was evaluated; NO otherwise.
 */
- (void)evaluateInJavaScriptContext:(void (^)(JSContext *context))evaluation completion:(nullable void (^)(BOOL evaluated))completion;

/*!
 @brief Stops the application lifecycle. appController:didStopWithOptions: is
        called once the JSContext has finished execution and has released all
        it's resources. The delegate must wait before releasing the controller.
        The controller cannot be reused after calling stop.
 */
- (void)stop;

@end

NS_ASSUME_NONNULL_END

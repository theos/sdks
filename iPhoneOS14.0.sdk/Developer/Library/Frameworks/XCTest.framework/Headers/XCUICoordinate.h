//
//  Copyright (c) 2014-2015 Apple Inc. All rights reserved.
//

#import <XCTest/XCTestDefines.h>
#import <XCTest/XCUIElement.h>

#if TARGET_OS_OSX
#import <AppKit/AppKit.h>
#endif

#if XCT_UI_TESTING_AVAILABLE

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN

#if !TARGET_OS_TV

@class XCUIElement;

NS_CLASS_AVAILABLE(10_11, 9_0)

/*! A coordinate represents a location on screen, relative to some element. Coordinates are dynamic, just like the elements to which they refer, and may compute different screen locations at different times, or be invalid if the referenced element does not exist. */
@interface XCUICoordinate : NSObject <NSCopying>

+ (instancetype)new XCT_UNAVAILABLE("Coordinates are never instantiated directly. Instead, they are created by elements or by other coordinates.");
- (instancetype)init XCT_UNAVAILABLE("Coordinates are never instantiated directly. Instead, they are created by elements or by other coordinates.");

/*! The element that the coordinate is based on, either directly or via the coordinate from which it was derived. */
@property (readonly) XCUIElement *referencedElement;

/*! The dynamically computed value of the coordinate's location on screen. Note that this value is dependent on the current frame of the referenced element; if the element's frame changes, so will the value returned by this property. If the referenced element does exist when this is called, it will fail the test; check the referenced element's exists property if the element may not be present. */
@property (readonly) CGPoint screenPoint;

/*! Creates a new coordinate with an absolute offset in points from the original coordinate. */
- (XCUICoordinate *)coordinateWithOffset:(CGVector)offsetVector;

@end

@interface XCUICoordinate (XCUICoordinateTouchEvents)

- (void)tap;
- (void)doubleTap;
- (void)pressForDuration:(NSTimeInterval)duration;
- (void)pressForDuration:(NSTimeInterval)duration thenDragToCoordinate:(XCUICoordinate *)otherCoordinate;
- (void)pressForDuration:(NSTimeInterval)duration thenDragToCoordinate:(XCUICoordinate *)otherCoordinate withVelocity:(XCUIGestureVelocity)velocity thenHoldForDuration:(NSTimeInterval)holdDuration;

@end

#if TARGET_OS_OSX || TARGET_OS_MACCATALYST

@interface XCUICoordinate (XCUICoordinateMouseEvents)

- (void)hover;
- (void)click;
- (void)doubleClick;
- (void)rightClick;
- (void)clickForDuration:(NSTimeInterval)duration thenDragToCoordinate:(XCUICoordinate *)otherCoordinate;
- (void)clickForDuration:(NSTimeInterval)duration thenDragToCoordinate:(XCUICoordinate *)otherCoordinate withVelocity:(XCUIGestureVelocity)velocity thenHoldForDuration:(NSTimeInterval)holdDuration;
- (void)scrollByDeltaX:(CGFloat)deltaX deltaY:(CGFloat)deltaY;

@end

#endif // TARGET_OS_OSX || TARGET_OS_MACCATALYST

#endif

NS_ASSUME_NONNULL_END

#endif

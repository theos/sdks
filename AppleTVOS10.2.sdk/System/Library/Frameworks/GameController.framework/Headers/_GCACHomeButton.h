/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/_GCControllerButtonInput.h>

@protocol _GCACHomeButtonDelegate;
@interface _GCACHomeButton : _GCControllerButtonInput {

	id<_GCACHomeButtonDelegate> _delegate;
	BOOL needsReset;

}
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
@end


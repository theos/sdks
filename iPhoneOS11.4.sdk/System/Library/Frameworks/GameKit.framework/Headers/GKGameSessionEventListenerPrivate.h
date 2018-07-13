//
//  GKGameSessionEventListener.h
//  GameCenterFoundation
//
//  Created by Johnny Trenh on 3/17/16.
//  Copyright © 2016 Apple Inc. All rights reserved.
//

#import "GKGameSession.h"

@interface GKGameSession (GKGameSessionEventListenerPrivate)
+ (void)postSession:(GKGameSession *)session didAddPlayer:(GKCloudPlayer *)player;
+ (void)postSession:(GKGameSession *)session didRemovePlayer:(GKCloudPlayer *)player;
+ (void)postSession:(GKGameSession *)session player:(GKCloudPlayer *)player didChangeConnectionState:(GKConnectionState)newState;
+ (void)postSession:(GKGameSession *)session player:(GKCloudPlayer *)player didSaveData:(NSData *)data;
+ (void)postSession:(GKGameSession *)session didReceiveData:(NSData *)data fromPlayer:(GKCloudPlayer *)player;
+ (void)postSession:(GKGameSession *)session didReceiveMessage:(NSString *)message withData:(NSData *)data fromPlayer:(GKCloudPlayer *)player;

@end

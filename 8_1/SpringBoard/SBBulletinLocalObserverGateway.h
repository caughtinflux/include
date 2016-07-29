//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"

@class BBObserver, NSString;

@interface SBBulletinLocalObserverGateway : NSObject <BBObserverDelegate>
{
    BBObserver *_bbObserver;
}

+ (id)sharedInstance;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

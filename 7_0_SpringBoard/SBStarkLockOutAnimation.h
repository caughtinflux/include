//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface SBStarkLockOutAnimation : NSObject
{
    long long _type;
    UIView *_snapshotView;
    long long _statusBarStyle;
    _Bool _statusBarHidden;
}

@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (void)dealloc;

@end


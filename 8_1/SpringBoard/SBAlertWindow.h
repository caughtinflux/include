//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWindow.h"

@class NSMapTable, SBAlertWindowViewController;

@interface SBAlertWindow : SBWindow
{
    SBAlertWindowViewController *_rootViewController;
    NSMapTable *_alertToDisplayMap;
}

+ (BOOL)_isSecure;
+ (float)windowLevel;
- (void)noteInterfaceOrientationChangingTo:(int)arg1 animated:(BOOL)arg2 withActivatingAlert:(id)arg3;
- (id)stackedAlertsIncludingActiveAlert:(BOOL)arg1;
- (int)stackedDisplayCount;
- (BOOL)hasActiveAlertsOrDisplays;
- (void)addView:(id)arg1 toBeObscuredByAlert:(id)arg2;
- (BOOL)deactivateAlert:(id)arg1;
- (void)displayAlert:(id)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 attached:(BOOL)arg3;
- (id)initWithScreen:(id)arg1 rootViewController:(id)arg2 layoutStrategy:(id)arg3 debugName:(id)arg4 scene:(id)arg5;
- (id)initWithScreen:(id)arg1 rootViewController:(id)arg2 debugName:(id)arg3 scene:(id)arg4;

@end

/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, SBApplication, UIView, UIWindow;

@interface SBSheetController : NSObject
{
    NSMutableDictionary *_appToSheetMap;
    UIWindow *_presentationWindow;
    SBApplication *_topHostedApp;
    UIView *_topHostedAppView;
}

+ (id)sharedInstance;
- (BOOL)sheetWantsProgress;
- (id)applicationForTopSheet;
- (void)dismissSheetsForApplication:(id)arg1;
- (void)dismissAllSheets;
- (BOOL)isShowingSheetsForApplication:(id)arg1;
- (BOOL)isShowingSheets;
- (void)sendStatusBarOrientationWillChangeToSheets:(int)arg1 duration:(CGFloat)arg2;
- (void)dismissRemoteViewIdentifier:(id)arg1 forApplication:(id)arg2 animated:(BOOL)arg3;
- (BOOL)presentRemoteViewIdentifier:(id)arg1 asSheetForApplication:(id)arg2 requireTopApplication:(BOOL)arg3 animated:(BOOL)arg4;
- (void)dismissSheetView:(id)arg1 animated:(BOOL)arg2;
- (void)_tearDownSheet:(id)arg1;
- (void)presentSheetView:(id)arg1 animated:(BOOL)arg2;
- (void)_positionFakeStatusBarView:(id)arg1 forOrientation:(int)arg2;
- (void)dealloc;
- (id)init;

@end


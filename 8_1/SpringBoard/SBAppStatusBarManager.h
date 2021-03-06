//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableDictionary, NSMutableOrderedSet;

@interface SBAppStatusBarManager : NSObject
{
    NSHashTable *_disableAlphaChangeAssertions;
    NSHashTable *_disableUserInteractionChangeAssertions;
    NSMutableOrderedSet *_windowLevelOverrideReasons;
    NSMutableDictionary *_windowLevelOverrideMap;
    float _defaultWindowLevel;
    NSMutableDictionary *_edgeInsetsDictionary;
    unsigned int _activeLayoutLayer;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned int activeLayoutLayer; // @synthesize activeLayoutLayer=_activeLayoutLayer;
- (void)_applyEdgeInsetsToStatusBar;
@property(readonly, nonatomic) struct UIEdgeInsets statusBarEdgeInsets;
- (void)setStatusBarEdgeInsets:(struct UIEdgeInsets)arg1 forLayoutLayer:(unsigned int)arg2;
- (void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg1;
- (void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg1;
- (void)_removeAssertion:(id)arg1 fromAssertions:(id)arg2;
- (void)_addAssertion:(id)arg1 toAssertions:(id)arg2;
- (void)_updateWindowLevel;
- (void)removeWindowLevelOverrideReason:(id)arg1;
- (void)setWindowLevel:(float)arg1 forOverrideReason:(id)arg2;
- (void)setDefaultWindowLevel:(float)arg1;
- (BOOL)isStatusBarUserInteractionEnabled;
- (void)setStatusBarUserInteractionEnabled:(BOOL)arg1;
- (void)hideStatusBar;
- (void)showStatusBar;
- (BOOL)isStatusBarHidden;
- (void)setStatusBarAlpha:(float)arg1;
- (void)_setStatusBarValueForPropertyWithAssertions:(id)arg1 setter:(CDUnknownBlockType)arg2;
- (id)_descriptionForPropertyWithAssertions:(id)arg1;
- (void)dealloc;
- (id)init;

@end


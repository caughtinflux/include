//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

@class SBLockScreenActionContext;

@interface SBLockScreenViewControllerBase : SBAlert
{
    id <SBLockScreenViewControllerDelegate> _delegate;
    SBLockScreenActionContext *_customLockScreenActionContext;
}

@property(nonatomic) id <SBLockScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)allPendingAlertItems;
- (BOOL)hasSuperModalAlertItems;
- (id)currentAlertItem;
- (id)dequeueAllPendingSuperModalAlertItems;
- (void)deactivateAlertItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)activateAlertItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)wantsToHandleAlert:(id)arg1;
- (BOOL)handleExternalKeyDownEvent;
- (void)noteResetRestoreStateUpdated;
- (void)noteDeviceBlockedStatusUpdated;
- (BOOL)isLockScreenVisible;
- (BOOL)isShowingOverheatUI;
- (void)shakeSlideToUnlockTextWithCustomText:(id)arg1;
- (void)updateInterfaceIfNecessary;
- (void)setShowingMediaControls:(BOOL)arg1;
- (BOOL)isShowingMediaControls;
- (void)updateOrientationForUndim;
- (BOOL)lockScreenBulletinControllerIsActive;
- (void)setCustomLockScreenActionContext:(id)arg1;
- (id)_customLockScreenActionContext;
- (id)currentLockScreenActionContext;
- (BOOL)lockScreenIsShowingBulletins;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)shouldShowSlideshowButton;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (void)noteExitingLostMode;
- (void)prepareToEnterLostMode;
- (void)updateCardItem:(id)arg1;
- (void)deactivateCardItem:(id)arg1;
- (void)activateCardItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)allowAnimatedDismissalForLockScreenPlugin;
- (void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1;
- (void)adjustLockScreenContentByOffset:(float)arg1 forPluginController:(id)arg2 withAnimationDuration:(double)arg3;
- (struct CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(int)arg2;
- (void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2;
- (void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2;
- (id)activeLockScreenPluginController;
- (BOOL)isLockScreenPluginViewVisible;
- (BOOL)hasActiveUIAccessories;
- (void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2;
- (void)setInScreenOffMode:(BOOL)arg1;
- (BOOL)isInScreenOffMode;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (BOOL)canRelockForAutoDimTimer;
- (BOOL)wantsScreenToAutoDim;
- (void)prepareForMesaUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned int)arg2;
- (void)noteNextUnlockShouldReturnToCallIfPossible:(BOOL)arg1;
- (BOOL)isHidingPasscodeViewDuringCall;
- (void)setForcesPasscodeViewDuringCall:(BOOL)arg1;
- (void)handlePhoneAppExitedIfNecessary;
- (void)noteStartingPhoneCallWhileUILocked;
- (BOOL)isMakingEmergencyCall;
- (void)emergencyDialerExitedWithError:(id)arg1;
- (void)exitEmergencyDialerAnimated:(BOOL)arg1;
- (void)launchEmergencyDialer;
- (void)activateCameraAnimated:(BOOL)arg1;
- (void)activateCamera;
- (void)willBeginDeactivationForTransitionToApps:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_isLockAlert;
- (void)prepareForExternalUIUnlock;
- (void)deactivate;
- (void)activate;
- (BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
- (void)finishUIUnlockFromSource:(int)arg1;
- (void)attemptToUnlockUIFromNotification;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (void)prepareForUIUnlock;
- (BOOL)wantsPasscodeLockForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (BOOL)isPasscodeLockVisible;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 withUnlockSource:(int)arg3 andOptions:(id)arg4;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateLegibility;
- (BOOL)allowSystemGestureAtLocation:(struct CGPoint)arg1;
- (void)_transitionWallpaperFromLockWithOptionalOutTimingFunction:(id)arg1 adjustWindowLevel:(BOOL)arg2;
- (void)_transitionWallpaperFromLock;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end


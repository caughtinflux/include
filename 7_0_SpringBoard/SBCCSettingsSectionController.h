//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBControlCenterSectionViewController.h"

#import "RadiosPreferencesDelegate.h"
#import "SBUIControlCenterButtonDelegate.h"

@class BBSettingsGateway, BluetoothManager, NSMutableDictionary, RadiosPreferences;

@interface SBCCSettingsSectionController : SBControlCenterSectionViewController <SBUIControlCenterButtonDelegate, RadiosPreferencesDelegate>
{
    NSMutableDictionary *_buttonsByID;
    _Bool _settingSupported[6];
    RadiosPreferences *_airplaneModeController;
    struct __WiFiManagerClient *_wifiManager;
    struct __WiFiDeviceClient *_wifiDevice;
    BBSettingsGateway *_settingsGateway;
    _Bool _dndEnabled;
    long long _dndStatus;
    BluetoothManager *_btManager;
}

+ (Class)viewClass;
- (void)_updateOrientationLockButtonState;
- (_Bool)_getOrientationLocked;
- (void)_setOrientationLocked:(_Bool)arg1;
- (void)_tearDownOrientationLock;
- (void)_initOrientationLock;
- (void)_updateMuteButtonState;
- (_Bool)_getMuted;
- (void)_setMuted:(_Bool)arg1;
- (void)_tearDownMute;
- (void)_initMute;
- (_Bool)_getDND;
- (void)_setDNDEnabled:(_Bool)arg1 updateServer:(_Bool)arg2;
- (void)_setDNDStatus:(long long)arg1;
- (void)_tearDownDND;
- (void)_initDND;
- (void)_updateBluetoothButtonState;
- (_Bool)_getBluetooth;
- (void)_setBluetoothEnabled:(_Bool)arg1;
- (void)_tearDownBluetooth;
- (void)_initBluetooth;
- (void)_updateWifiButtonState;
- (_Bool)_getWifi;
- (void)_setWifiEnabled:(_Bool)arg1;
- (void)_tearDownWifi;
- (void)_initWifi;
- (void)airplaneModeChanged;
- (_Bool)_getAirplaneMode;
- (void)_setAirplaneModeEnabled:(_Bool)arg1;
- (void)_tearDownAirplaneMode;
- (void)_initAirplaneMode;
- (void)buttonTapped:(id)arg1;
- (id)_buttonForSetting:(long long)arg1;
- (void)_addButtonForSetting:(long long)arg1;
- (id)_identifierForSetting:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)noteSettingsDidUpdate:(id)arg1;
- (id)view;
- (struct CGSize)contentSizeForOrientation:(long long)arg1;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)init;

@end


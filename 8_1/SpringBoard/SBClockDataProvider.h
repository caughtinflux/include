//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBRemoteDataProvider.h"

@class BBBulletinRequest, BBDataProviderProxy, NSDate, NSMutableDictionary, NSString, NSTimer, UILocalNotification;

@interface SBClockDataProvider : NSObject <BBRemoteDataProvider>
{
    NSTimer *_alarmUpdateTimer;
    BBDataProviderProxy *_dataProviderProxy;
    NSMutableDictionary *_localNotificationsByPublisherBulletinID;
    UILocalNotification *_nextAlarmForToday;
    BBBulletinRequest *_nextTodayAlarmBulletin;
    UILocalNotification *_firstAlarmForTomorrow;
    NSDate *_nextTomorrowFireDate;
    BBBulletinRequest *_nextTomorrowAlarmBulletin;
}

+ (id)sharedInstance;
- (void)_handleBulletinSnoozeDismissResponse:(id)arg1;
- (void)_removeBulletinWithPublisherBulletinID:(id)arg1;
- (void)_handleBulletinAlarmSnoozeResponse:(id)arg1;
- (void)_handleBulletinAlarmDismissResponse:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)_actionWithIdentifier:(id)arg1 title:(id)arg2;
- (id)_supplementaryActionsFromAlarmNotification:(id)arg1;
- (id)_snoozeActionFromAlarmNotification:(id)arg1;
- (id)_dismissActionFromSnoozeNotification:(id)arg1;
- (id)_dismissActionFromAlarmNotification:(id)arg1;
- (id)_alternateActionFromAlarmNotification:(id)arg1;
- (id)_songSoundFromSoundName:(id)arg1;
- (id)_defaultSound;
- (id)_ringtoneSoundFromSoundName:(id)arg1;
- (id)_soundFromNotification:(id)arg1;
- (id)_publisherBulletinIDFromNotification:(id)arg1;
- (id)_titleFromNotification:(id)arg1;
- (id)_timerIDFromNotification:(id)arg1;
- (BOOL)_isTimerNotification:(id)arg1;
- (id)_alarmIDFromNotification:(id)arg1;
- (BOOL)_isAlarmNotification:(id)arg1;
- (id)_bulletinForNotification:(id)arg1;
- (void)_interruptAudioAndLockDeviceForLocalNotification:(id)arg1;
- (void)_publishBulletinForLocalNotification:(id)arg1;
- (void)_handleLocalNotificationDidFire:(id)arg1;
- (id)sortDescriptors;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)bulletinsFilteredBy:(unsigned int)arg1 count:(unsigned int)arg2 lastCleared:(id)arg3;
- (int)_sectionSubtypeFromNotification:(id)arg1;
- (id)sectionParameters;
- (void)_migrateSectionInfo;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (id)_alarmMessageForNotification:(id)arg1 withSingleAlarmFormat:(BOOL)arg2;
- (void)_publishAlarmsWithScheduledNotifications:(id)arg1;
- (void)_calculateNextTomorrowAlarmAndBulletinWithScheduledNotifications:(id)arg1;
- (void)_calculateNextTodayAlarmAndBulletinWithScheduledNotifications:(id)arg1;
- (id)_nextAlarmForFeed:(unsigned int)arg1 withNotifications:(id)arg2;
- (void)_snoozedAlarmRefired:(id)arg1;
- (id)_bulletinRequestForSnoozedAlarm:(id)arg1;
- (void)_handleAlarmSnoozedNotification:(id)arg1;
- (id)_bulletinRequestForTimerNotification:(id)arg1;
- (void)_publishTimerInScheduledNotifications:(id)arg1;
- (id)_scheduledNotifications;
- (void)_handleClockNotificationUpdate:(id)arg1;
- (void)dealloc;
- (void)dataProviderDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

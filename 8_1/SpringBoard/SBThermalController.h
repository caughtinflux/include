//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBThermalWarningAlertItemDelegate.h"
#import "SBThermalWarningSuppressionAssertionDelegate.h"

@class NSDictionary, NSMutableSet, NSString;

@interface SBThermalController : NSObject <SBThermalWarningSuppressionAssertionDelegate, SBThermalWarningAlertItemDelegate>
{
    BOOL _sampling;
    double _samplingStartTime;
    NSDictionary *_samplingStartCPUTimesByApp;
    int _sunlightStateToken;
    int _coldTempToken;
    int _warningAssertionToken;
    int _warningResponseToken;
    NSMutableSet *_warningSuppressionAssertions;
    BOOL _warningSuppressionPreference;
    int _level;
    BOOL _inSunlight;
}

+ (void)logThermalEvent:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isInSunlight) BOOL inSunlight; // @synthesize inSunlight=_inSunlight;
@property(readonly, nonatomic) int level; // @synthesize level=_level;
- (void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2;
- (void)thermalWarningAssertionExpired:(id)arg1;
- (BOOL)captureWarningSuppressionAssertionWithPort:(unsigned int)arg1 reason:(id)arg2;
- (void)_didReceiveWarningAction:(int)arg1;
- (void)_calculateAppsCPUTimesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_killThermallyActiveApplication;
- (void)_killThermallyActiveApplicationGivenCPUTimes:(id)arg1;
- (void)_beginThermalJetsamCPUSampling;
- (void)respondToCurrentThermalCondition;
- (void)showThermalAlertIfNecessary;
- (void)startListeningForThermalEvents;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

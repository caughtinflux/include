//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LocationServicesListController.h"

@class PSSpecifier, RTRoutineManager;

@interface LocationCoreRoutineListController : LocationServicesListController
{
    PSSpecifier *_coreRoutineSpecifier;
    id _coreRoutineSettings;
    id _cachedParentController;
    RTRoutineManager *_routineManager;
}

@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
@property(retain) id cachedParentController; // @synthesize cachedParentController=_cachedParentController;
- (id)specifiers;
- (void)setStatusEnabled:(id)arg1 specifier:(id)arg2;
- (id)isStatusEnabled:(id)arg1;
- (void)setCoreRoutineEnabled:(id)arg1 specifier:(id)arg2;
- (id)isCoreRoutineEnabled:(id)arg1;
- (void)updateSpecifiersForImposedSettings;
- (void)stopLocationStatusUpdates;
- (void)startLocationStatusUpdates;
- (void)updateLocationUsage;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;

@end


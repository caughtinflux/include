//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

@interface SBAlertItemsSettings : _UISettings
{
    BOOL _disableBBHandlers;
    int _testItemToken;
}

+ (id)newTestItemForToken:(int)arg1;
+ (id)settingsControllerModule;
@property(nonatomic) int testItemToken; // @synthesize testItemToken=_testItemToken;
@property(nonatomic) BOOL disableBBHandlers; // @synthesize disableBBHandlers=_disableBBHandlers;
- (void)setDefaultValues;

@end


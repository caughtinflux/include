/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBApplicationIcon.h"

@class UIWebClip;

@interface SBWebApplicationIcon : SBApplicationIcon
{
    UIWebClip *_webClip;
}

- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitle;
- (BOOL)canGenerateImageInBackgroundForFormat:(int)arg1;
- (id)webClip;

@end


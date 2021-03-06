/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBIconView.h"

@class SBFolderSettings, SBFolderIcon;

@interface SBFolderIconView : SBIconView <_UISettingsKeyObserver>
{
    SBFolderSettings *_folderSettings;
}

+ (BOOL)canShowUpdatedMark;
- (id)_folderIconImageView;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)setSuppressesBlurryBackgroundChanges:(BOOL)arg1;
- (void)_updateAdaptiveColors;
- (void)_applyEditingStateAnimated:(BOOL)arg1;
- (void)cleanupAfterFloatyFolderCrossfade;
- (void)setFloatyFolderCrossfadeFraction:(CGFloat)arg1;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(BOOL)arg2;
- (void)removeDropGlow;
- (void)showDropGlow:(BOOL)arg1;
- (void)prepareDropGlow;
- (void)setBackgroundAndIconGridImageAlpha:(CGFloat)arg1;
- (void)setIconGridImageAlpha:(CGFloat)arg1;
- (double)grabDurationForEvent:(id)arg1;
- (BOOL)allowsTapWhileEditing;
- (id)description;
- (id)folder;
- (void)scrollToGapOrTopIfFullOfPage:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)scrollToTopOfPage:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)scrollToFirstGapAnimated:(BOOL)arg1;
- (void)scrollToTopOfFirstPageAnimated:(BOOL)arg1;
- (CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(NSUInteger)arg1;
- (CGRect)frameForMiniIconAtIndex:(NSUInteger)idx;
- (NSUInteger)lastVisibleMiniIconIndex;
- (NSUInteger)centerVisibleMiniIconIndex;
- (NSUInteger)firstVisibleMiniIconIndex;
- (NSUInteger)visibleMiniIconListIndex;
- (NSUInteger)visibleMiniIconCount;
- (id)iconBackgroundView;
- (id)dropGlow;
- (void)setIcon:(SBFolderIcon *)icon;
- (SBFolderIcon *)folderIcon;
@end


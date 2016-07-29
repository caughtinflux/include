//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBFolder, SBIconView, UITouch;

@protocol SBIconViewDelegate <NSObject>

@optional
- (float)iconLabelWidth;
- (BOOL)iconViewDisplaysCloseBox:(SBIconView *)arg1;
- (BOOL)iconViewDisplaysBadges:(SBIconView *)arg1;
- (void)iconCloseBoxTapped:(SBIconView *)arg1;
- (void)icon:(SBIconView *)arg1 openFolder:(SBFolder *)arg2 animated:(BOOL)arg3;
- (BOOL)icon:(SBIconView *)arg1 canReceiveGrabbedIcon:(SBIconView *)arg2;
- (void)iconTapped:(SBIconView *)arg1;
- (BOOL)iconShouldAllowTap:(SBIconView *)arg1;
- (void)icon:(SBIconView *)arg1 touchEnded:(BOOL)arg2;
- (void)icon:(SBIconView *)arg1 touchMoved:(UITouch *)arg2;
- (void)iconTouchBegan:(SBIconView *)arg1;
- (void)iconHandleLongPress:(SBIconView *)arg1;
@end

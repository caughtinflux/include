//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKBalloonView, NSArray, UIEvent;

@protocol CKBalloonViewDelegate <NSObject>
- (void)balloonViewWillResignFirstResponder:(CKBalloonView *)arg1;
- (void)balloonViewTapped:(CKBalloonView *)arg1 withEvent:(UIEvent *)arg2;
- (void)balloonViewTouchedDown:(CKBalloonView *)arg1 withEvent:(UIEvent *)arg2;
- (_Bool)balloonView:(CKBalloonView *)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;
- (struct CGRect)calloutTargetRectForBalloonView:(CKBalloonView *)arg1;
- (NSArray *)menuItemsForBalloonView:(CKBalloonView *)arg1;
- (void)balloonViewDidFinishDataDetectorAction:(CKBalloonView *)arg1;
@end

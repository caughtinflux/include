//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_SBFVibrantView.h"

@class NSString, SBLegibilityView, SBSaturatedIconView, UIImage, _SBFVibrantSettings;

@interface SBSlideUpAppGrabberView : UIView <_SBFVibrantView>
{
    struct UIEdgeInsets _hitTestEdgeInsets;
    UIView *_tintView;
    UIView *_backgroundView;
    SBLegibilityView *_legibilityView;
    SBSaturatedIconView *_saturatedIconView;
    UIImage *_grabberImage;
    BOOL _vibrancyAllowed;
    _SBFVibrantSettings *_vibrantSettings;
    id <SBResponderTouchDelegate> _delegate;
}

@property(nonatomic, getter=isVibrancyAllowed) BOOL vibrancyAllowed; // @synthesize vibrancyAllowed=_vibrancyAllowed;
@property(nonatomic) id <SBResponderTouchDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;
@property(readonly, nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateForChangedSettings:(id)arg1;
- (void)setStrength:(float)arg1;
- (id)_lazyLegibilityView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)_shouldUseVibrancy;
- (void)setAppStyleGrabberImage:(id)arg1;
- (void)setGrabberImageFromApp:(id)arg1;
- (void)setGrabberImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithAdditionalTopPadding:(BOOL)arg1 invertVerticalInsets:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


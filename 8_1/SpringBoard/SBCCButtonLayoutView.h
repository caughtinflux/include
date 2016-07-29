//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBControlCenterSectionView.h"

@class NSMutableArray, UIScrollView;

@interface SBCCButtonLayoutView : SBControlCenterSectionView
{
    NSMutableArray *_buttons;
    UIScrollView *_scrollView;
    float _interButtonPadding;
    unsigned int _buttonStretchThreshold;
    unsigned int _buttonShrinkThreshold;
    int _maxButtons;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) int maxButtons; // @synthesize maxButtons=_maxButtons;
@property(nonatomic) unsigned int buttonShrinkThreshold; // @synthesize buttonShrinkThreshold=_buttonShrinkThreshold;
@property(nonatomic) unsigned int buttonStretchThreshold; // @synthesize buttonStretchThreshold=_buttonStretchThreshold;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) float interButtonPadding; // @synthesize interButtonPadding=_interButtonPadding;
- (void)layoutSubviews;
- (void)_setButtons:(id)arg1;
- (void)_didRemoveButton:(id)arg1;
- (void)_didAddButton:(id)arg1;
- (void)resortButtons;
- (void)_resortButtons;
- (void)removeButton:(id)arg1;
- (void)addButton:(id)arg1;
- (id)buttons;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

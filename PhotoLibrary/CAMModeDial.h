/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIControl.h"

@class CAGradientLayer, NSMutableArray, UIImageView, UIView;

@interface CAMModeDial : UIControl
{
    long long _orientation;
    id <CAMModeDialDataSource> _dataSource;
    unsigned long long _selectedIndex;
    NSMutableArray *__items;
    UIView *__dialContainerView;
    UIView *__itemsContainerView;
    UIImageView *__dotImageView;
    CAGradientLayer *__dialGradientLayer;
}

@property(readonly, nonatomic) CAGradientLayer *_dialGradientLayer; // @synthesize _dialGradientLayer=__dialGradientLayer;
@property(readonly, nonatomic) UIImageView *_dotImageView; // @synthesize _dotImageView=__dotImageView;
@property(readonly, nonatomic) UIView *_itemsContainerView; // @synthesize _itemsContainerView=__itemsContainerView;
@property(readonly, nonatomic) UIView *_dialContainerView; // @synthesize _dialContainerView=__dialContainerView;
@property(readonly, nonatomic) NSMutableArray *_items; // @synthesize _items=__items;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) id <CAMModeDialDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (id)_dotImage;
- (id)_fontForOrientation:(long long)arg1;
- (id)_verticalDialMeshTransform;
- (id)_horizontalDialMeshTransform;
- (void)_updateContainerViewPositionFromSelectedIndex;
- (struct CGPoint)_containerPositionFromSelectedIndex;
- (struct CGRect)_frameForOrientation:(long long)arg1;
- (void)reloadData;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_layoutForVerticalOrientation;
- (void)_layoutForHorizontalOrientation;
- (void)dealloc;
- (id)initWithOrientation:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMModeDialInitialization;

@end


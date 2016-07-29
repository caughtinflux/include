//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSLayoutConstraint, UIView;

@interface SBSearchTableViewCell : UITableViewCell
{
    NSLayoutConstraint *_clippingConstraint;
    BOOL _addedConstantsConstraints;
    NSArray *_variableConstraints;
    BOOL _aboveSelectedCell;
    UIView *_background;
    UIView *_clippingContainer;
    UIView *_separatorView;
    float _leftSeparatorMargin;
}

+ (void)configureViewForDisplay:(id)arg1 viewType:(int)arg2;
+ (id)attributedString:(id)arg1 withLineBreakMode:(int)arg2 defaultParagraphStyle:(id)arg3;
+ (id)attributedStringForImage:(id)arg1 baselineOffset:(float)arg2;
+ (id)selectedTextColor;
+ (id)textColor;
+ (id)maskedSelectedBackgroundColor;
+ (id)unmaskedSelectedBackgroundColor;
+ (id)backgroundColor;
+ (id)lineColor;
+ (id)cellIdentifierForSection:(id)arg1 result:(id)arg2;
+ (id)tableViewCellClasses;
+ (void)registerClass:(Class)arg1;
+ (BOOL)supportsSection:(id)arg1 result:(id)arg2;
+ (BOOL)shouldDisplayImagesForDomain:(unsigned int)arg1;
+ (void)initialize;
@property float leftSeparatorMargin; // @synthesize leftSeparatorMargin=_leftSeparatorMargin;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UIView *clippingContainer; // @synthesize clippingContainer=_clippingContainer;
@property(readonly, nonatomic) UIView *background; // @synthesize background=_background;
@property(nonatomic, getter=isAboveSelectedCell) BOOL aboveSelectedCell; // @synthesize aboveSelectedCell=_aboveSelectedCell;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateSelectedState;
- (void)prepareForReuse;
- (void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3;
@property(readonly, nonatomic) NSArray *constantConstraints;
@property(readonly, nonatomic) NSArray *variableConstraints;
- (void)updateConstraints;
- (struct CGSize)_systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
@property(readonly, nonatomic) float verticalImageMargin;
@property(readonly, nonatomic) float rightMargin;
@property(readonly, nonatomic) float leftMargin;
- (void)clipToTopHeaderWithHeight:(float)arg1 inTableView:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateBottomLine;
- (BOOL)aboveSelectedCell;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

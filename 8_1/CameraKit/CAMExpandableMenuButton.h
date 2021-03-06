//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"
#import "CAMExpandableMenuButtonDelegate-Protocol.h"
@class NSIndexSet, NSMutableArray, NSMutableIndexSet, UIView;

@interface CAMExpandableMenuButton : UIControl
{
    BOOL _expanded;
    NSInteger _selectedIndex;
    NSInteger _expansionOrientation;
    NSInteger _orientation;
    id <CAMExpandableMenuButtonDelegate> _expandableMenuDelegate;
    NSMutableArray *__menuItems;
    UIView *__headerView;
    NSIndexSet *__hiddenIndexesWhileCollapsed;
    NSMutableIndexSet *__highlightedIndexesWhileCollapsed;
    UIEdgeInsets _tappableEdgeInsets;
}

+ (NSTimeInterval)expansionDuration;
- (NSInteger)numberOfMenuItems;
@property(readonly, nonatomic) UIView *_headerView; // @synthesize _headerView=__headerView;
@property(readonly, copy, nonatomic) NSMutableIndexSet *_highlightedIndexesWhileCollapsed; // @synthesize _highlightedIndexesWhileCollapsed=__highlightedIndexesWhileCollapsed;
@property(readonly, nonatomic) NSMutableArray *_menuItems; // @synthesize _menuItems=__menuItems;
@property(nonatomic, assign)  id <CAMExpandableMenuButtonDelegate> expandableMenuDelegate; // @synthesize expandableMenuDelegate=_expandableMenuDelegate;
- (BOOL)shouldIgnoreMenuInteraction;
- (void)completeExpansionToProposedFrame:(CGRect)arg1;
- (void)collapseMenuAnimated:(BOOL)arg1;
- (void)expandMenuAnimated:(BOOL)arg1;
- (void)_convertAllSubviewsToProposedFrame:(CGRect)arg1;
- (void)_applyMenuItemTextAlignmentForCurrentOrientation;
- (void)_applyMenuItemAlphaForCurrentExpansionState;
- (void)_applyMenuItemColorsForCurrentState;
- (void)_updateFromSelectedIndexChange;
@property(readonly, copy, nonatomic) NSIndexSet *_hiddenIndexesWhileCollapsed; // @synthesize _hiddenIndexesWhileCollapsed=__hiddenIndexesWhileCollapsed;
- (CGSize)_layoutForVerticalExpansionOrientation:(BOOL)arg1 expanded:(BOOL)arg2;
- (CGSize)_layoutForHorizontalExpansionOrientation:(BOOL)arg1 expanded:(BOOL)arg2;
@property(nonatomic) NSInteger expansionOrientation; // @synthesize expansionOrientation=_expansionOrientation;
- (CGSize)_layoutForVerticalCollapsedPortraitButton:(BOOL)arg1;
- (CGSize)_layoutForVerticalCollapsedLandscapeButton:(BOOL)arg1;
- (CGSize)_layoutForVerticalExpandedPortraitButton:(BOOL)arg1;
- (CGSize)_layoutForVerticalExpandedLandscapeButton:(BOOL)arg1;
- (CGSize)_layoutForHorizontalCollapsedLandscapeButton:(BOOL)arg1;
- (CGSize)_layoutForHorizontalExpandedPortraitButton:(BOOL)arg1;
- (CGSize)_layoutForHorizontalExpandedLandscapeButton:(BOOL)arg1;
- (CGSize)_layoutForHorizontalCollapsedPortraitButton:(BOOL)arg1;
- (id)_selectedLabel;
- (BOOL)_wantsSelectedItemToBeVisible;
- (CGSize)_layoutMenuButton:(BOOL)arg1 expanded:(BOOL)arg2;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_updateFromOrientationChangeAnimated:(BOOL)arg1;
- (void)_updateFromExpansionChangeAnimated:(BOOL)arg1;
- (id)hiddenIndexesWhileCollapsed;
- (id)titleForMenuItemAtIndex:(NSInteger)arg1;
- (id)initWithExpansionOrientation:(NSInteger)arg1;
- (void)setHighlighted:(BOOL)arg1 forIndex:(NSInteger)arg2;
@property(nonatomic) UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
- (void)updateToContentSize:(id)arg1;
- (void)finishExpansionAnimated:(BOOL)arg1;
- (void)startExpansionWithProposedFrame:(CGRect)arg1;
- (CGRect)alignmentRectForFrame:(CGRect)arg1 expanded:(BOOL)arg2;
- (void)finishCollapsingAnimated:(BOOL)arg1;
- (void)startCollapsingWithProposedFrame:(CGRect)arg1;
- (CGRect)frameForAlignmentRect:(CGRect)arg1 expanded:(BOOL)arg2;
- (CGSize)intrinsicContentSizeForExpansion:(BOOL)arg1;
@property(nonatomic) NSInteger orientation; // @synthesize orientation=_orientation;
- (id)headerView;
@property(nonatomic) NSInteger selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
- (CGSize)intrinsicContentSize;
- (UIEdgeInsets)alignmentRectInsets;
- (void)setOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)init;
- (void)reloadData;

@end


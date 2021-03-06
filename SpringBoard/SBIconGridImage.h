/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIImage.h"

@interface SBIconGridImage : UIImage
{
    unsigned int _numberOfCells;
}

+ (struct CGSize)sizeForNumberOfRows:(unsigned int)arg1;
+ (struct CGRect)rectAtIndex:(unsigned int)arg1 maxCount:(unsigned int)arg2;
+ (struct CGSize)cellSpacing;
+ (struct CGSize)cellSize;
+ (unsigned int)numberOfRowsForNumberOfCells:(unsigned int)arg1;
+ (unsigned int)numberOfColumns;
+ (id)gridImageForNumberOfCells:(unsigned int)arg1 withCellImageProviderBlock:(id)arg2;
+ (id)_gridImageForNumberOfCells:(unsigned int)arg1 withPreviousGridImage:(id)arg2 cellImageProviderBlock:(id)arg3;
@property(readonly, nonatomic) unsigned int numberOfRows;
@property(readonly, nonatomic) unsigned int numberOfColumns;
@property(readonly, nonatomic) unsigned int numberOfCells;
- (id)gridImageByPatchingWithCellImageProviderBlock:(id)arg1;

@end


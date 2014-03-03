/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (SBIconIndex)

+ (instancetype)indexPathWithIconIndex:(NSUInteger)iconIdx listIndex:(NSUInteger)listIdx;
+ (instancetype)emptyPath;

- (BOOL)isPrefixedByPath:(NSIndexPath *)path;
- (id)indexPathWithPrefixPath:(NSIndexPath *)indexPath;

- (id)subpathFromPosition:(NSUInteger)arg1;
- (id)_subpathWithRange:(NSRange)range;

- (NSUInteger)sbListIndex;
- (NSUInteger)sbIconIndex;

@end

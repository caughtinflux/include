//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAMFormattingManager : NSObject
{
    BOOL _wantsCustomKerning;
    BOOL _supportsVerticalText;
}

+ (id)sharedManager;
@property(readonly, nonatomic) BOOL supportsVerticalText; // @synthesize supportsVerticalText=_supportsVerticalText;
- (void)_commonCAMFormattingManagerInitialization;
@property(readonly, nonatomic) BOOL wantsCustomKerning; // @synthesize wantsCustomKerning=_wantsCustomKerning;
- (id)init;

@end

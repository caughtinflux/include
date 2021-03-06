/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:03 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUValueFilter.h>

@interface PUChangeDirectionValueFilter : PUValueFilter {

	double _threshold;
	double _minimumChangeValue;

}

@property (assign,nonatomic) double minimumChangeValue;              //@synthesize minimumChangeValue=_minimumChangeValue - In the implementation block
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 ;
-(double)minimumChangeValue;
-(void)setMinimumChangeValue:(double)arg1 ;
@end


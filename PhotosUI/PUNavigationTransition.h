/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:06 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUViewControllerTransition.h>

@class UINavigationController;

@interface PUNavigationTransition : PUViewControllerTransition {

	UINavigationController* _navigationController;
	int __operation;
	double _pushDuration;
	double _popDuration;

}

@property (nonatomic,readonly) double pushDuration;                                             //@synthesize pushDuration=_pushDuration - In the implementation block
@property (nonatomic,readonly) double popDuration;                                              //@synthesize popDuration=_popDuration - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,setter=_setOperation:,nonatomic) int _operation;                              //@synthesize _operation=__operation - In the implementation block
+(BOOL)shouldCrossFadeBottomBarsForNavigationController:(id)arg1 ;
+(id)animationControllerForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 inNavigationController:(id)arg4 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(id)navigationController;
-(id)initWithPushDuration:(double)arg1 popDuration:(double)arg2 ;
-(double)pushDuration;
-(double)popDuration;
-(void)completeInteractiveOperation:(int)arg1 finished:(BOOL)arg2 ;
-(int)_operation;
-(void)_setOperation:(int)arg1 ;
-(id)initWithDuration:(double)arg1 ;
-(void)setNavigationController:(id)arg1 ;
-(void)transitionWillAnimateOperation:(int)arg1 interactive:(BOOL)arg2 ;
-(void)transitionWillStartOperation:(int)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)transitionDidStartOperation:(int)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void).cxx_destruct;
@end


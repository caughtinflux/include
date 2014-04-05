#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2

#import <UIKit/UIGestureRecognizer.h>
@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSwipeGesture : UIGestureRecognizer {
@private
	double _maximumDuration;
	CGFloat _verticalScale;
	CGFloat _horizontalScale;
	CGFloat _minimumHorizontalMovement;
	CGFloat _maximumHorizontalMovement;
	CGFloat _minimumVerticalMovement;
	CGFloat _maximumVerticalMovement;
	double _startTime;
	int _numberOfFingers;
	NSMutableArray* _activeTouches;
	unsigned _timerOn : 1;
}
@property(assign, nonatomic) int numberOfFingers;
@property(assign, nonatomic) CGFloat minimumVerticalMovement;
// inherited: -(id)initWithTarget:(id)target action:(SEL)action;
-(CGFloat)minimumVerticalMovementForTimeInterval:(double)timeInterval;
-(CGFloat)minimumHorizontalMovementForTimeInterval:(double)timeInterval;
-(CGFloat)maximumVerticalMovementForTimeInterval:(double)timeInterval;
-(CGFloat)maximumHorizontalMovementForTimeInterval:(double)timeInterval;
-(void)clearTimer;
// inherited: -(void)dealloc;
// inherited: -(void)reset;
-(void)startTimer:(double)timer;
-(void)tooSlow:(id)slow;
-(void)tooManyFingers;
-(id)infoForTouch:(id)touch;
-(BOOL)mergeTouches:(id)touches;
// inherited: -(void)touchesBegan:(id)began withEvent:(id)event;
-(int)determineStateForTouch:(id)touch atTimeInterval:(double)timeInterval;
-(int)overallState;
// inherited: -(void)touchesMoved:(id)moved withEvent:(id)event;
// inherited: -(void)touchesEnded:(id)ended withEvent:(id)event;
// inherited: -(void)touchesCancelled:(id)cancelled withEvent:(id)event;
// inherited: -(void)setState:(int)state;
@end

#endif

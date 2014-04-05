#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSelectionExtraView : UIView {
@private
	CGFloat m_pointerOffset;
}
@property(assign, nonatomic) CGFloat pointerOffset;
// inherited: -(id)initWithFrame:(CGRect)frame;
//-(void)setFrame:(CGRect)frame;
//-(void)drawRect:(CGRect)rect;
@end

#endif

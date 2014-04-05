#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface UIDropShadowView : UIView {
@private
	CGFloat _shadowRadius;
	CGFloat _shadowOpacity;
	CGFloat _cornerRadius;
}
@property(assign) CGFloat shadowRadius;
@property(assign) CGFloat shadowOpacity;
@property(assign) CGFloat cornerRadius;
-(id)initWithView:(id)view;
-(void)animateShadow;
//-(void)setFrame:(CGRect)frame;
//-(void)setBounds:(CGRect)bounds;
@end

#endif

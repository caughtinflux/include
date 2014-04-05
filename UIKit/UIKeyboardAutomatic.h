#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2

#import "UIKeyboard.h"

__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard {
}
// inherited: -(id)initWithFrame:(CGRect)frame;
// inherited: -(void)dealloc;
// inherited: -(void)minimize;
// inherited: -(void)maximize;
// inherited: -(UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(CGFloat)implHeightDelta;
// inherited: -(void)prepareForImplBoundsHeightChange:(CGFloat)implBoundsHeightChange suppressNotification:(BOOL)notification;
// inherited: -(void)implBoundsHeightChangeDone:(CGFloat)done suppressNotification:(BOOL)notification;
-(void)didResume:(id)resume;
-(BOOL)_isAutomaticKeyboard;
@end

#endif

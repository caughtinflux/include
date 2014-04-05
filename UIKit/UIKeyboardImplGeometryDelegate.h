
@protocol UIKeyboardImplGeometryDelegate
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;
-(void)prepareForImplBoundsHeightChange:(CGFloat)implBoundsHeightChange suppressNotification:(BOOL)notification;
-(void)implBoundsHeightChangeDone:(CGFloat)done suppressNotification:(BOOL)notification;
-(BOOL)canDismiss;
-(BOOL)isActive;
@end

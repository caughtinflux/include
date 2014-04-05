#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2

#import <UIKit/UIView.h>
@class UIClipCornerView, UIImage;

@interface UIRoundedCornerView : UIView {
	UIClipCornerView* _clipCornerViews[4];
	CGFloat _cornerRadius;
	CGFloat _cornerSize;
	CGFloat _edgeInset;
	UIImage* _imageBackground;
}
-(id)initWithCornerRadius:(CGFloat)cornerRadius size:(CGFloat)size inset:(CGFloat)inset;
-(void)setImageBackground:(id)background;
-(void)setUseSnapshot:(BOOL)snapshot;
-(CGPoint)_originForCornerIndex:(int)cornerIndex withBoundsSize:(CGSize)boundsSize;
-(void)_layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(void)didMoveToSuperview;
// inherited: -(void)dealloc;
@end

#endif

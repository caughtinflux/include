/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIImage.h>
#import <Foundation/NSObject.h>
#import <IOSurface/IOSurface.h>
#import <Availability2.h>


@interface UIImage ()
+(void)initialize;
-(void)dealloc;
-(void)drawAtPoint:(CGPoint)point;
-(void)drawInRect:(CGRect)rect;
-(void)drawAsPatternInRect:(CGRect)rect;
-(id)_automationID;
@end

@interface UIImage (ApplicationIconPrivate)
-(id)_applicationIconImagePrecomposed:(BOOL)precomposed;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
+(int)_iconVariantForUIApplicationIconFormat:(int)uiapplicationIconFormat;
+(id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier roleIdentifier:(id)identifier format:(int)format;
+(id)_iconForResourceProxy:(id)resourceProxy variant:(int)variant;
-(id)_applicationIconImageForFormat:(int)format precomposed:(BOOL)precomposed;
#else
-(id)_applicationIconWithSize:(CGSize)size destinationFrame:(CGRect)frame shadowImage:(id)image overlayImage:(id)image4 outlineImage:(id)image5 maskImage:(id)image6;
-(id)_smallApplicationIconImagePrecomposed:(BOOL)precomposed;
#endif
@end

@interface UIImage (UIImageInternal)
+(void)_flushSharedImageCache;
+(void)_flushCacheOnMemoryWarning:(id)warning;
-(void)_setCached:(BOOL)cached;
-(BOOL)_isCached;
-(void)_setNamed:(BOOL)named;
-(BOOL)_isNamed;
-(id)_flatImageWithWhite:(CGFloat)white alpha:(CGFloat)alpha;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(id)_bezeledImageWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
#else
-(id)_bezeledImageWithShadowRed:(CGFloat)shadowRed green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha fillRed:(CGFloat)red green:(CGFloat)green6 blue:(CGFloat)blue7 alpha:(CGFloat)alpha8 drawShadow:(BOOL)shadow;
-(id)_doubleBezeledImageWithExteriorShadowRed:(CGFloat)exteriorShadowRed green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha interiorShadowRed:(CGFloat)red green:(CGFloat)green6 blue:(CGFloat)blue7 alpha:(CGFloat)alpha8 fillRed:(CGFloat)red9 green:(CGFloat)green10 blue:(CGFloat)blue11 alpha:(CGFloat)alpha12;
#endif
-(id)_imageScaledToSize:(CGSize)size interpolationQuality:(CGInterpolationQuality)quality;
-(id)_imageScaledToProportion:(CGFloat)proportion interpolationQuality:(CGInterpolationQuality)quality;
@end

@interface UIImage (UIImageDeprecated2)
+(id)imageNamed:(NSString *)named inBundle:(NSBundle *)bundle;
+(id)imageAtPath:(NSString *)path;
+(void)removeImageNameFromCache:(NSString *)imageName;
-(id)initWithData:(NSData *)data cache:(BOOL)cache;
-(id)initWithImageRef:(CGImageRef)imageRef;
-(CGImageRef)imageRef;
-(void)compositeToRect:(CGRect)rect fromRect:(CGRect)rect2 operation:(int)operation fraction:(CGFloat)fraction;
-(void)compositeToPoint:(CGPoint)point fromRect:(CGRect)rect operation:(int)operation fraction:(CGFloat)fraction;
-(void)compositeToPoint:(CGPoint)point operation:(int)operation fraction:(CGFloat)fraction;
-(void)compositeToPoint:(CGPoint)point operation:(int)operation;
-(void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect;
-(void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect fraction:(CGFloat)fraction;
-(void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(CGFloat)fraction;
-(void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect;
-(void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect fraction:(CGFloat)fraction;
-(void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(CGFloat)fraction;
-(void)draw1PartImageInRect:(CGRect)rect;
-(void)draw1PartImageInRect:(CGRect)rect fraction:(CGFloat)fraction;
-(void)draw1PartImageInRect:(CGRect)rect fraction:(CGFloat)fraction operation:(int)operation;
-(CGColorRef)_patternColor;
-(id)patternColor;
@end

@interface UIImage (UIImagePrivate)
+(UIImage*)applicationImageNamed:(NSString*)name;
+(UIImage*)kitImageNamed:(NSString*)name;
+(UIImage*)defaultDesktopImage;
+(void)setDesktopImageData:(id)data;
+(id)imageFromAlbumArtData:(id)albumArtData height:(int)height width:(int)width cache:(BOOL)cache;
-(id)initWithContentsOfFile:(id)file cache:(BOOL)cache;
-(id)initWithCGImage:(CGImageRef)cgimage imageOrientation:(int)orientation;
-(id)initWithIOSurface:(IOSurfaceRef)iosurface;
-(IOSurfaceRef)ioSurface;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
+(BOOL)getDefaultDesktopImage:(id*)image modificationDate:(id*)date forVariant:(int)variant;
+(id)_defaultBackgroundGradient;
+(void)setDesktopImageData:(id)data forVariant:(int)variant;
-(id)_initWithIOSurface:(IOSurfaceRef)iosurface imageOrientation:(int)orientation;
#endif
@end


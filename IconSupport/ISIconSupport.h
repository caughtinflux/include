#import <Foundation/Foundation.h>

@interface ISIconSupport : NSObject {
    NSMutableSet *extensions;
}

+ (id)sharedInstance;
- (NSString *)extensionString;
- (BOOL)addExtension:(NSString *)extension;
- (BOOL)isBeingUsedByExtensions;
- (void)repairAndReloadIconState;
- (void)repairAndReloadIconState:(NSDictionary *)iconState;
@end


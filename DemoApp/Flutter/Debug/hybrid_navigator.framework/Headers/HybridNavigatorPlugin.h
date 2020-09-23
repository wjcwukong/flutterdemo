#import <Flutter/Flutter.h>
#import "FlutterPageViewController.h"
#import "NativeEventDispatcher.h"

@protocol HybridNavigatorCustomMethodHandler <NSObject>

@required
- (void)handleCustomMethod:(NSString*)methodName params:(NSDictionary *)params callback:(FlutterResult)callback;

@end

@interface HybridNavigatorPlugin : NSObject<FlutterPlugin>

+ (void)addCustomMethodHandler:(id<HybridNavigatorCustomMethodHandler>)customMethodHandler;

@end


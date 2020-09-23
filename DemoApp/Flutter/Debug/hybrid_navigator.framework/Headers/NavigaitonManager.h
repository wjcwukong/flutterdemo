//
//  NavigaitonManager.h
//  cupertino_navigator
//
//  Created by mambaxie on 2019/5/27.
//

#import <Foundation/Foundation.h>
#import "NavigaitonManager.h"
#import <UIKit/UIKit.h>

@protocol NavigaitonManagerProtocol <NSObject>

@required
- (UINavigationController *)currentNavigationController;

- (UIViewController *)currentViewController;

/// 根据className 创建Native or flutter view controller 
- (UIViewController *)viewControllerWithClassName:(NSString *)className params:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_BEGIN

@interface NavigaitonManager : NSObject <NavigaitonManagerProtocol>

+ (instancetype)shareManager;

/// flutter 所有注册页面
- (NSArray *)flutterPageClassNames;

- (UIWindow *)frontFullScreenWindow;


@end

NS_ASSUME_NONNULL_END

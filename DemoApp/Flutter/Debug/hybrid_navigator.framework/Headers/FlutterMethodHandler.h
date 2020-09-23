//
//  FlutterMethodHandler.h
//  Hybrid
//
//  Created by mambaxie on 2019/5/28.
//  Copyright © 2019年 mambaxie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Flutter/Flutter.h>
#import "HybridNavigatorPlugin.h"

NS_ASSUME_NONNULL_BEGIN

@interface FlutterMethodHandler : NSObject

+ (instancetype)sharedHandler;

- (void)invokeMethod:(NSDictionary *)arguments callback:(FlutterResult)callback;

/// flutter 所以注册页面你的导航栏配置
@property (nonatomic, strong, readonly) NSDictionary *navigationBarSettingsDic;

/// flutter 所有注册页面
@property (nonatomic, strong, readonly) NSArray *flutterPageClassNames;


- (void)addCustomMethodHandler:(id<HybridNavigatorCustomMethodHandler>)handler;

@end

NS_ASSUME_NONNULL_END

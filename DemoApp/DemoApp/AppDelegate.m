//
//  AppDelegate.m
//  DemoApp
//
//  Created by jessejcwang on 2020/7/14.
//  Copyright © 2020 jessejcwang. All rights reserved.
//

#import "AppDelegate.h"
//#import <WGMFlutter/WGMPluginRegistrant.h>
#import <FlutterPluginRegistrant/GeneratedPluginRegistrant.h>
#import "NextViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
//    self.flutterEngine = [[FlutterEngine alloc] initWithName:@"my flutter engine"];
//    // Runs the default Dart entrypoint with a default Flutter route.
//    [self.flutterEngine run];
//    [GeneratedPluginRegistrant registerWithRegistry:self.flutterEngine];
    
    // 注册插件
    [GeneratedPluginRegistrant registerWithRegistry:self];
    
//    _flutterViewController = [[FlutterViewController alloc] initWithEngine:self.flutterEngine nibName:nil bundle:nil];
//    [WGMPluginRegistrant registerWithRegistry:self.flutterEngine];
    
//    FlutterMethodChannel* channel = [FlutterMethodChannel
//        methodChannelWithName:@"hb_content"
//              binaryMessenger:[_flutterViewController binaryMessenger]];
//    [channel setMethodCallHandler:^(FlutterMethodCall * _Nonnull call, FlutterResult  _Nonnull result) {
//        [self jumpToNextVC];
//        result(@(YES));
//    }];
    
    return [super application:application didFinishLaunchingWithOptions:launchOptions];
}


#pragma mark - UISceneSession lifecycle


- (UISceneConfiguration *)application:(UIApplication *)application configurationForConnectingSceneSession:(UISceneSession *)connectingSceneSession options:(UISceneConnectionOptions *)options {
    // Called when a new scene session is being created.
    // Use this method to select a configuration to create the new scene with.
    return [[UISceneConfiguration alloc] initWithName:@"Default Configuration" sessionRole:connectingSceneSession.role];
}


- (void)application:(UIApplication *)application didDiscardSceneSessions:(NSSet<UISceneSession *> *)sceneSessions {
    // Called when the user discards a scene session.
    // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
    // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
}

- (void)jumpToNextVC {
    UIStoryboard *storyboard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    NextViewController *controller = [storyboard instantiateViewControllerWithIdentifier:@"NextViewController"];
//    UINavigationController *navc = (UINavigationController *)[storyboard instantiateViewControllerWithIdentifier:@"RootViewController"];
    [self.flutterEngine.viewController.navigationController pushViewController:controller animated:YES];
//    [navc pushViewController:controller animated:YES];
}

@end

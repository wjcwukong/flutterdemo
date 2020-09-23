//
//  AppDelegate.h
//  DemoApp
//
//  Created by jessejcwang on 2020/7/14.
//  Copyright © 2020 jessejcwang. All rights reserved.
//

#import <UIKit/UIKit.h>
@import Flutter;

@interface AppDelegate : FlutterAppDelegate

@property (nonatomic, strong) FlutterEngine *flutterEngine;

@property (nonatomic, strong) FlutterViewController *flutterViewController;

- (void)jumpToNextVC;

@end


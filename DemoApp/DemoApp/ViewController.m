//
//  ViewController.m
//  DemoApp
//
//  Created by jessejcwang on 2020/7/14.
//  Copyright © 2020 jessejcwang. All rights reserved.
//

#import "ViewController.h"
#import "AppDelegate.h"
#import "NextViewController.h"
#import <hybrid_navigator/FlutterPageViewController.h>
#import <hybrid_navigator/FlutterViewController+HybridNavigator.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.title = @"Native ViewController";
    self.view.backgroundColor = [UIColor whiteColor];
    
//    FlutterEngine *flutterEngine =
//    ((AppDelegate *)UIApplication.sharedApplication.delegate).flutterEngine;
//    FlutterMethodChannel* channel = [FlutterMethodChannel
//        methodChannelWithName:@"dev.flutter.example/jumpNative"
//              binaryMessenger:[flutterEngine binaryMessenger]];
//    [channel setMethodCallHandler:^(FlutterMethodCall * _Nonnull call, FlutterResult  _Nonnull result) {
//        if ([@"jumpToNextVC" isEqualToString:call.method]) {
//            [(AppDelegate *)UIApplication.sharedApplication.delegate jumpToNextVC];
//        }
//
//        result(@(YES));
//    }];
    
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.navigationController setNavigationBarHidden:NO];
}

- (IBAction)goFlutter:(id)sender {
    UIViewController *flutterContainer = [FlutterPageViewController pageViewControllerWithClassName:@"Home"
                                                                                             params:@{@"参数": @"这是原生传来的参数"}];
//    flutterContainer.view.backgroundColor = [UIColor colorWithWhite:0 alpha:0.5];
//    [(UIView *)[flutterContainer valueForKey:@"flutterView"] setBackgroundColor:[UIColor clearColor]];
//
//    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:flutterContainer];
//    nav.modalPresentationStyle = UIModalPresentationOverFullScreen;
//    [nav setNavigationBarHidden:YES];
//    [self presentViewController:nav animated:YES completion:nil];
    
    [self.navigationController pushViewController:flutterContainer animated:YES];
    return;
    
    
    FlutterEngine *flutterEngine =
        ((AppDelegate *)UIApplication.sharedApplication.delegate).flutterEngine;
    FlutterViewController *flutterViewController =
        [[FlutterViewController alloc] initWithEngine:flutterEngine nibName:nil bundle:nil];
    
//    FlutterViewController *flutterViewController = ((AppDelegate *)UIApplication.sharedApplication.delegate).flutterViewController;
    [self.navigationController pushViewController:flutterViewController animated:YES];
}


@end

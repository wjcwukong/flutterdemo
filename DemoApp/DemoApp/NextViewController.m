//
//  NextViewController.m
//  DemoApp
//
//  Created by jessejcwang on 2020/8/23.
//  Copyright © 2020 jessejcwang. All rights reserved.
//

#import "NextViewController.h"
#import "AppDelegate.h"
#import <hybrid_navigator/FlutterPageViewController.h>
#import <hybrid_navigator/FlutterViewController+HybridNavigator.h>
#import <hybrid_navigator/HybridNavigatorPlugin.h>

@interface NextViewController ()

@end

@implementation NextViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor grayColor];
    self.title = @"Second Native ViewController";
    [self.navigationController setNavigationBarHidden:NO];
    
    UIButton *button = [[UIButton alloc] initWithFrame:CGRectMake(0, (self.view.bounds.size.height - 40)/2, self.view.bounds.size.width, 40)];
    [button setTitle:@"Go To Another Flutter Page" forState:UIControlStateNormal];
    [button addTarget:self action:@selector(goFlutter:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:button];
    
    // Do any additional setup after loading the view.
}

- (IBAction)goFlutter:(id)sender {
    UIViewController *flutterContainer = [FlutterPageViewController pageViewControllerWithClassName:@"Another"
                                                                                             params:@{@"参数": @"这是原生传来的参数"}];
    [self.navigationController pushViewController:flutterContainer animated:YES];
    return;
    
//    FlutterEngine *flutterEngine =
//        ((AppDelegate *)UIApplication.sharedApplication.delegate).flutterEngine;
//    FlutterViewController *flutterViewController =
//        [[FlutterViewController alloc] initWithEngine:flutterEngine nibName:nil bundle:nil];
      
    FlutterViewController *flutterViewController =
        [[FlutterViewController alloc] initWithProject:nil nibName:nil bundle:nil];
    [flutterViewController setInitialRoute:@"/xx"];
    [self.navigationController pushViewController:flutterViewController animated:YES];
}


@end

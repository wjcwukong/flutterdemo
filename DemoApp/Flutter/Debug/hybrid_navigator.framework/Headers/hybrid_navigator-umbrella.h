#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "FlutterChannelRegister.h"
#import "FlutterMethodHandler.h"
#import "FlutterPageViewController.h"
#import "FlutterSnapshotManager.h"
#import "FlutterViewController+HybridNavigator.h"
#import "HybridNavigatorPlugin.h"
#import "NativeEventDispatcher.h"
#import "NavigaitonManager.h"
#import "UINavigationController+HybridNavigator.h"

FOUNDATION_EXPORT double hybrid_navigatorVersionNumber;
FOUNDATION_EXPORT const unsigned char hybrid_navigatorVersionString[];


//
//  FlutterNativeEventDispatcher.h
//  Hybrid
//
//  Created by mambaxie on 2019/5/29.
//  Copyright © 2019年 mambaxie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Flutter/Flutter.h>

NS_ASSUME_NONNULL_BEGIN

@interface NativeEventDispatcher : NSObject

+ (instancetype)sharedDispatcher;

- (void)registerEventWithName:(NSString *)name binaryMessenger:(id<FlutterBinaryMessenger>)messenger;

- (void)eventDispatchWithCallName:(NSString *)name params:(nullable NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END

//
//  FlutterPageViewController.h
//  Hybrid
//
//  Created by mambaxie on 2019/5/28.
//  Copyright © 2019年 mambaxie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Flutter/Flutter.h>

@interface FlutterBarItemSettings : NSObject

/// item title
@property (nonatomic, copy) NSString *title;

/// icon name
@property (nonatomic, copy) NSString *iconName;

/// 唯一标识（0 开始 依次递增）
@property (nonatomic, copy, readonly) NSString *uniqueId;

+ (instancetype)settingWithDictionary:(NSDictionary *)dic;

@end

/// 导航栏设置
@interface FlutterNavigationBarSettings : NSObject

/// 标题
@property (nonatomic, copy) NSString *title;

/// 背景颜色argb(eg. 0xFFFFFFFF)
@property (nonatomic, assign) long long backgroundColorHex;

/// 主题颜色argb(eg. 0xFFFFFFFF)
@property (nonatomic, assign) long long tintColorHex;

/// 按钮配置
@property (nonatomic, strong) NSArray <FlutterBarItemSettings *> *leftBarItemsSettings;
@property (nonatomic, strong) NSArray <FlutterBarItemSettings *> *rightBarItemsSettings;

+ (instancetype)settingsWithDictionary:(NSDictionary *)dic;

@end

@interface FlutterPageSettings : NSObject

/// 页面名称 用于辅助调试
@property (nonatomic, copy) NSString *pageClassName;

/// 唯一表示 0 开始 依次递增
@property (nonatomic, copy, readonly) NSString *uniqueId;

/// 参数
@property (nonatomic, copy) NSDictionary *params;

/// 导航栏设置
@property (nonatomic, strong) FlutterNavigationBarSettings *navigationBarSettings;

/// 转为字典作为参数传参
- (NSDictionary *)toDictionary;
/// 根据字典生成对象
+ (instancetype)settingsWithDictionary:(NSDictionary *)dic;

@end


NS_ASSUME_NONNULL_BEGIN

extern NSNotificationName FlutterPageMessageNotification;

static NSString *FlutterPageMessagePageUniqueIdUserInfoKey = @"FlutterPageMessagePageUniqueIdUserInfoKey";
static NSString *FlutterPageMessageMsgNameUserInfoKey = @"FlutterPageMessageMsgNameUserInfoKey";
static NSString *FlutterPageMessageParamsUserInfoKey = @"FlutterPageMessageParamsUserInfoKey";
static NSString *FlutterPageMessageCallbackUserInfoKey = @"FlutterPageMessageCallbackUserInfoKey";

@interface FlutterPageViewController : UIViewController

+ (instancetype)pageViewControllerWithClassName:(NSString *)className;

+ (instancetype)pageViewControllerWithClassName:(NSString *)className params:(nullable NSDictionary *)params;

+ (instancetype)pageViewControllerWithFlutterView:(UIView *)view settings:(FlutterPageSettings *)settings;

@property (nonatomic, strong, readonly) FlutterPageSettings *pageSettings;

@property (nonatomic, assign) BOOL needRefreshFlutterView; // 需要强制刷新

/// 显示截图
- (void)showSnapshot;

@end

NS_ASSUME_NONNULL_END

@interface UIView (Snapshop)

- (UIImage *_Nullable)toImage;

// 截取指定区域
- (UIImage*_Nonnull)imageFromViewInRect:(CGRect)rect;

@end

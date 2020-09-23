//
//  FlutterPageSnapshotManager.h
//  Hybrid
//
//  Created by mambaxie on 2019/6/11.
//  Copyright © 2019年 mambaxie. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FlutterSnapshotManager : NSObject

+ (instancetype)sharedManager;

/// 在内存中 截图最多存在几张，超过限制时，以FIFO方式放入磁盘缓存 Default is 3
@property (nonatomic, assign) NSInteger maxCacheCountInMemoty;
/// 截图缓存文件夹
@property (strong, nonatomic, nonnull) NSString *diskCacheDirectory;

/// 读取截图
- (UIImage *)snapshotImageForPageUniquewId:(NSString *)uniqueId;

/// 添加截图
- (void)addSnapshotImageWithImage:(UIImage *)image pageUniqueId:(NSString *)uniqueId;

/// 移除截图
- (void)removeSnapshotImageForPageUniquewId:(NSString *)uniqueId;


@end

NS_ASSUME_NONNULL_END

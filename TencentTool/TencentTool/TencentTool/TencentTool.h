//
//  TencentTool.h
//  TencentTool
//
//  Created by 曹老师 on 2019/2/28.
//  Copyright © 2019 曹奕程. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define cWindow [UIApplication sharedApplication].keyWindow

@interface TencentTool : NSObject

- (void)showHappy;

// 根据url生成二维码方法
+ (UIImage *)create2DBarcodeByURL:(NSString *)urlStr withSize:(CGFloat)size;

// 颜色转换为背景图片
+ (UIImage *)imageWithColor:(UIColor *)color;



@end

NS_ASSUME_NONNULL_END

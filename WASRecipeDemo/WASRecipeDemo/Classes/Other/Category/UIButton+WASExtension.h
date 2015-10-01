//
//  UIButton+WSExtension.h
//  下厨房demo
//
//  Created by xmg1 on 15/9/3.
//  Copyright (c) 2015年 sanking. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (WASExtension)

// 创建一个带图片的button
+ (instancetype)buttonWithImage:(NSString *)image highImage:(NSString *)highImage target:(id)target action:(SEL)action;

- (instancetype)setImage:(NSString *)image highImage:(NSString *)highImage;

@end

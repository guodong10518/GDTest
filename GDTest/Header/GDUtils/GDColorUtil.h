//
//  GDColorUtil.h
//  BSDLOA
//
//  Created by wangguodong on 15/5/19.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GDColorUtil : NSObject

/**
 16进制转RGB
 @param     hexColor    16进制字符串
 @return    UIColor
 */
+ (UIColor *)getColorWithHexStr:(NSString *)hexColor;
@end

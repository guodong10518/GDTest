//
//  GDImageUtil.h
//  BSDLOA
//
//  Created by wangguodong on 15/6/10.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GDImageUtil : NSObject
/**
 对图片sourceImage按照尺寸size进行压缩
 @param     sourceImage     源图片
 @param     size            目标尺寸
 @return    UIImage
 */
+ (UIImage *)imageCompressForSize:(UIImage *)sourceImage targetSize:(CGSize)size;

/**
 通过颜色color来生成一个指定尺寸size的纯色图片
 @param     color   颜色
 @param     size    目标尺寸
 @return    UIImage
 */
+ (UIImage *)imageFromColor:(UIColor *)color size:(CGSize)size;

/**
 静态方法，返回bundle（GDMobileSDKResource）下directory（为空）的图片
 @param     imageName       图片名称
 @return    UIImage
 */
+ (UIImage *)bundleImageWithName:(NSString *)imageName;

/**
 静态方法，返回bundle下的图片
 @param     bundleName      bundle名称
 @param     directory       图片在bundle中的路径
 @param     imageName       图片名称
 @param     imageType       图片类型
 @return    UIImage
 */
+ (UIImage *)imageInBundle:(NSString *)bundleName
                 directory:(NSString *)directory
                 imageName:(NSString *)imageName
                 imageType:(NSString *)imageType;
@end

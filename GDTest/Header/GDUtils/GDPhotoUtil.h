//
//  GDPhotoUtil.h
//  DaZhuanJia
//
//  Created by wangguodong on 15/8/20.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^GDPhotoCompleteBlock)(NSData *imageData);

@interface GDPhotoUtil : NSObject

/**
 类方法，单例化
 @return    GDPhotoUtil实例
 */
+ (instancetype)sharedInstance;

/**
 类方法，当前是否获取到相机的使用权限
 @return    BOOL
 */
+ (BOOL)isCameraValid;

/**
 返回folder下面fileName的本地路径
 @param     folder      文件夹名称
 @param     fileName    文件名称
 @return    NSString    文件的本地路径
 */
+ (NSString *)getPhotoLocalPathWithFolder:(NSString *)folder fileName:(NSString *)fileName;

/**
 从相机或者照片中获取图片
 @param     editEnabled         是否允许编辑
 @param     targetSize          目标尺寸
 @param     compressionQuality  压缩率
 @param     completeBlock       获取图片成功后的回调block
 @return    void    
 */
- (void)takePhotoWithEditEnabled:(BOOL)editEnabled
                      targetSize:(CGSize)targetSize
              compressionQuality:(CGFloat)compressionQuality
                       completed:(GDPhotoCompleteBlock)completeBlock;


@end

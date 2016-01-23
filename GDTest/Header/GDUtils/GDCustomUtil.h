//
//  GDCustomUtil.h
//  BSDLOA
//
//  Created by wangguodong on 15/5/19.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, GDCompressMode) {
    GDCompressModeNone = 0,     //无压缩模式
    GDCompressModeWidthFit,     //给定宽度，等比例压缩
    GDCompressModeHeightFit,    //给定高度，等比例压缩
    GDCompressModeFill          //给定高度和宽度，按尺寸压缩
};

@interface GDCustomUtil : NSObject
//判断是否安装urlSchemes的app
+ (BOOL)gdCheckIfAppInstalled:(NSString *)urlSchemes;
//获取UUID
+ (NSString *)getUUID;
//获取DeviceId
+ (NSString *)getDeviceId;

+ (NSString *)resoureUrlStrWithPath:(NSString *)pathStr
                            baseUrl:(NSString *)baseUrl;

+ (NSString *)resoureUrlStrWithPath:(NSString *)pathStr
                            baseUrl:(NSString *)baseUrl
                       compressMode:(GDCompressMode)compressMode
                         targetSize:(CGSize)targetSize;

+ (NSString *)resoureUrlStrWithPath:(NSString *)pathStr
                             params:(NSDictionary *)params
                            baseUrl:(NSString *)baseUrl;
//从view到其所有的父视图，全部退出编辑
+ (void)endEditedFromView:(UIView *)subView;

//拨打电话
+ (void)callWithNum:(NSString *)phoneNum;
@end

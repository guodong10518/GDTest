//
//  GDLocationUtil.h
//  StarCharge
//
//  Created by wangguodong on 15/12/15.
//  Copyright © 2015年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface GDLocationUtil : NSObject

/**
 类方法，实现GPS坐标转为GCJ02(火星)坐标
 @param     GPSLocation     GPS坐标
 @return    CLLocation      GCJ02坐标
 */
+ (CLLocation*)locationGCJ02FromGPSLocation:(CLLocation *)GPSLocation;

/**
 类方法，实现GCJ02(火星)坐标转为BD09(百度)坐标
 @param     GCJ02Location   GCJ02坐标
 @return    CLLocation      BD09坐标
 */
+ (CLLocation*)locationBD09FromGCJ02Location:(CLLocation *)GCJ02Location;

/**
 类方法，实现BD09(百度)坐标转为GCJ02(火星)坐标
 @param     BD09Location    BD09坐标
 @return    CLLocation      GCJ02坐标
 */
+ (CLLocation*)locationGCJ02FromBD09Location:(CLLocation *)BD09Location;

/**
 类方法，实现GCJ02(火星)坐标的高德地图导航，安装高德地图的话，启用高德地图，否则使用系统自带地图
 @param     destinationLat  目的地纬度(GCJ02坐标)
 @param     destinationLng  目的地经度(GCJ02坐标)
 @param     destinationName 目的地名称
 @return    void
 */
+ (void)navigationWithDestinationLat:(double)destinationLat
                      destinationLng:(double)destinationLng
                     destinationName:(NSString *)destinationName;
@end

//
//  GDApplicationUtil.h
//  StarCharge
//
//  Created by wangguodong on 15/12/23.
//  Copyright © 2015年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GDApplicationUtil : NSObject
/**
 返回当前App的版本号
 @return    NSString    当前版本号
 */
+ (NSString *)nowAppVersion;

/**
 保存与key关联的App版本号
 @param     versionStr  要保存的版本号
 @param     key         关联的key，比如引导页、用户信息等
 @return    void
 */
+ (void)saveAppVersion:(NSString *)versionStr forKey:(NSString *)key;

/**
 返回上次保存的与key关联的App版本号
 @param     key         关联的key，比如引导页、用户信息等
 @return    NSString    上次版本号
 */
+ (NSString *)lastAppVersionForKey:(NSString *)key;

@end

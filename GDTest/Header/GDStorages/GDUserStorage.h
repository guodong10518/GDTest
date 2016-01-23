//
//  UserStorage.h
//  BSDLOA
//
//  Created by wangguodong on 15/5/19.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GDUserStorage : NSObject

/**
 类方法，判断用户是否登录
 @return    BOOL
 */
+ (BOOL)hasLogined;

/**
 单例化
 @return    GDUserStorage实例
 */
+ (instancetype)sharedInstance;

/**
 返回用户信息
 @return    用户信息
 */
- (id)userInfo;

/**
 保存用户信息
 @param     userInfo    用户信息
 @return    void
 */
- (void)saveUserInfo:(id)userInfo;

/**
 清空用户信息
 @return    void
 */
- (void)clearUserInfo;
@end

//
//  AppHandler.h
//  DaZhuanJia
//
//  Created by wangguodong on 15/9/3.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import "GDBasicService.h"

#define URL_UploadFile @"uploadFile.do"

@interface GDAppService : GDBasicService
//检测appstore上的版本更新
+ (void)checkAppstoreVersionWithAppid:(NSString *)appId
                              success:(GDServiceSuccessBlock)success
                               failed:(GDServiceFailedBlock)failed;

//上传文件
+ (void)uploadFileWithDatas:(NSArray *)fileDatas
                    success:(GDServiceSuccessBlock)success
                     failed:(GDServiceFailedBlock)failed;

@end

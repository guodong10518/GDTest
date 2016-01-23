//
//  BSDHttpRequestManager.h
//  BSDLOA
//
//  Created by wangguodong on 15/4/27.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^GDRequestSuccessBlock)(id dataObj);
typedef void (^GDRequestFailureBlock)(id dataObj);

@interface GDHttpRequestManager : NSObject {
    @protected
    BOOL _apiSSL;
    BOOL _fileSSL;
    id _apiEngine;
    id _fileEngine;
    NSDictionary *_errorCodeInfo;
}

/**
 类方法，配置url，建议在- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions方法设置
 @param     apiUrl          获取数据的apiUrl，http://或者https://开头
 @param     fileUrl         上传图片的fileUrl，http://或者https://开头
 @param     errorCodeInfo   需要捕获的错误码，key为错误码字符串，value为需要发送的消息名称，如@{@"402":@"userVerifyFailed"}
 @return    void
 */
+ (void)startWithApiUrl:(NSString *)apiUrl
                fileUrl:(NSString *)fileUrl
          errorCodeInfo:(NSDictionary *)errorCodeInfo;

/**
 类方法，返回单例化对象
 @return    GDHttpRequestManager实例
 */
+ (GDHttpRequestManager *)manager;

/**
 普通API调用，默认出现异常时提示用户
 @param     path            路径
 @param     params          参数字典
 @param     method          http方法，e.g. GET/POST
 @param     aClass          期望返回的json数据映射出来的类型，e.g. NSDictionary，为nil时代表没有期望
 @param     successBlock    接口调用成功后的回调block
 @param     failureBlock    接口调用失败后的回调block
 @return    void
 */
- (void)requestWithPath:(NSString*)path
                 params:(NSDictionary*)params
             httpMethod:(NSString*)method
          expectedClass:(Class)aClass
         successHandler:(GDRequestSuccessBlock)successBlock
         failureHandler:(GDRequestFailureBlock)failureBlock;

/**
 普通API调用
 @param     path            路径
 @param     params          参数字典
 @param     method          http方法，e.g. GET/POST
 @param     aClass          期望返回的json数据映射出来的类型，e.g. NSDictionary，为nil时代表没有期望
 @param     showError       出现异常时是否提示用户
 @param     successBlock    接口调用成功后的回调block
 @param     failureBlock    接口调用失败后的回调block
 @return    void
 */
- (void)requestWithPath:(NSString*)path
                 params:(NSDictionary*)params
             httpMethod:(NSString*)method
          expectedClass:(Class)aClass
              showError:(BOOL)showError
         successHandler:(GDRequestSuccessBlock)successBlock
         failureHandler:(GDRequestFailureBlock)failureBlock;

/**
 上传文件调用，默认出现异常时提示用户
 @param     path            路径
 @param     params          参数字典
 @param     filePaths       文件本地路径数组
 @param     method          http方法，e.g. GET/POST
 @param     aClass          期望返回的json数据映射出来的类型，e.g. NSDictionary，为nil时代表没有期望
 @param     successBlock    接口调用成功后的回调block
 @param     failureBlock    接口调用失败后的回调block
 @return    void
 */
- (void)requestWithPath:(NSString*)path
                 params:(NSDictionary*)params
              filePaths:(NSArray*)filePaths
             httpMethod:(NSString*)method
          expectedClass:(Class)aClass
         successHandler:(GDRequestSuccessBlock)successBlock
         failureHandler:(GDRequestFailureBlock)failureBlock;

/**
 上传文件调用
 @param     path            路径
 @param     params          参数字典
 @param     filePaths       文件本地路径数组
 @param     method          http方法，e.g. GET/POST
 @param     aClass          期望返回的json数据映射出来的类型，e.g. NSDictionary，为nil时代表没有期望
 @param     showError       出现异常时是否提示用户
 @param     successBlock    接口调用成功后的回调block
 @param     failureBlock    接口调用失败后的回调block
 @return    void
 */
- (void)requestWithPath:(NSString*)path
                 params:(NSDictionary*)params
              filePaths:(NSArray*)filePaths
             httpMethod:(NSString*)method
          expectedClass:(Class)aClass
              showError:(BOOL)showError
         successHandler:(GDRequestSuccessBlock)successBlock
         failureHandler:(GDRequestFailureBlock)failureBlock;

@end

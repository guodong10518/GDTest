//
//  BasicH5ViewController.h
//  DaZhuanJia
//
//  Created by wangguodong on 15/8/18.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import "GDBasicViewController.h"
#import "GDH5PageModel.h"

@interface GDBasicH5ViewController : GDBasicViewController
@property (nonatomic, strong) NSString *urlStr;         //web url
@property (nonatomic, strong) NSString *filePath;       //本地文件路径
@property (nonatomic, strong) UIWebView *contentWeb;    //显示内容的webview
@property (nonatomic, assign) BOOL hideProgress;        //是否隐藏加载进度条
@property (nonatomic, assign) BOOL autoLoadDisabled;    //是否禁止自动加载url
@property (nonatomic, assign) BOOL needRefreshTitle;    //刷新title，使用js获取html的title
@property (nonatomic, assign) BOOL refreshEnabled;      //是否允许下拉刷新
@property (nonatomic, assign) BOOL pageFitEnabled;      //是否允许内容缩放
@property (nonatomic, strong) GDH5PageModel *h5PageInfo;//配置model

/**
 类方法，快速生成H5页面
 @param     pathStr     uriStr，比如mobile.do
 @param     params      参数字典，url中以key1=value1&key2=value2形式拼接
 @param     baseUrl     基url
 @param     titleStr    导航栏标题
 @return    GDBasicH5ViewController实例
 */
+ (GDBasicH5ViewController *)h5ViewControllerWithPath:(NSString *)pathStr
                                               params:(NSDictionary *)params
                                              baseUrl:(NSString *)baseUrl
                                             titleStr:(NSString *)titleStr;

/**
 初始化H5页面
 @param     pathStr     uriStr，比如mobile.do
 @param     params      参数字典，url中以key1=value1&key2=value2形式拼接
 @param     baseUrl     基url
 @param     titleStr    导航栏标题
 @return    GDBasicH5ViewController实例
 */
- (instancetype)initWithPath:(NSString *)pathStr
                      params:(NSDictionary *)params
                     baseUrl:(NSString *)baseUrl
                    titleStr:(NSString *)titleStr;

/**
 加载页面，如果是本地文件，调用loadLocalFile:, 否则调用loadPageWithURLStr
 @return    void
 */
- (void)loadPage;

/**
 加载网络页面
 @param     urlStr  web url
 @return    void
 */
- (void)loadPageWithURLStr:(NSString *)urlStr;

/**
 加载本地文件
 @param     filePath    本地文件路径
 @return    void
 */
- (void)loadLocalFile:(NSString *)filePath;


//****************** JS 2 OC *****************//
/**
 加载时出现loading
 @return    void
 */
- (void)frameShowLoading;

/**
 加载完成后消失loading
 @return    void
 */
- (void)frameDismissLoading;

/**
 js调用本地方法的分发方法
 @param     method      方法名
 @param     params      参数字典
 @param     callback    回调方法
 @return    void
 */
- (void)distributePrivateMethodWithName:(NSString *)method
                                 params:(NSDictionary *)params
                               callback:(NSString *)callback;
@end

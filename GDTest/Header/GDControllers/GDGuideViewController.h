//
//  GDGuideViewController.h
//  DaZhuanJia
//
//  Created by wangguodong on 15/8/5.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^GDGuideEnterBlock)();

typedef enum {
    kGDGuideShowTypeOnce = 0,   //第一次安装并启动时展示
    kGDGuideShowTypeAlways,     //每次启动时都展示
    kGDGuideShowTypeNone        //一直不展示
} kGDGuideShowType;

@interface GDGuideViewController : UIViewController
/**
 类方法，设置引导页显示策略
 @param     showType    引导页显示策略，目前支持第一次打开时显示（默认）、一直显示、永不显示
 @return    void
 */
+ (void)setGuideShowType:(kGDGuideShowType)showType;

/**
 类方法，根据设置的显示策略，返回是否能够显示引导页
 @return    BOOL        YES--能，NO--否
 */
+ (BOOL)canShowGuide;

/**
 类方法，返回GDGuideViewController实例
 @param     images          图片数组
 @param     pageControl     PageControl，为nil且showPageControl为true时使用默认
 @param     showPageControl 是否显示PageControl
 @param     exitBtn         退出按钮，会在最后一页的引导页中添加此按钮
 @param     exitBlock       退出时执行的block
 @return    GDGuideViewController实例
 */
+ (instancetype)guideVCWithImages:(NSArray *)images
                      pageControl:(UIPageControl *)pageControl
                  showPageControl:(BOOL)showPageControl
                          exitBtn:(UIButton *)exitBtn
                        exitBlock:(GDGuideEnterBlock)exitBlock;

/**
 类方法，返回GDGuideViewController实例
 @parma     containerVC     容器VC，引导页的父VC
 @param     images          图片数组
 @param     pageControl     PageControl，为nil且showPageControl为true时使用默认
 @param     showPageControl 是否显示PageControl
 @param     exitBtn         退出按钮，会在最后一页的引导页中添加此按钮
 @param     exitBlock       退出时执行的block
 @return    GDGuideViewController实例
 */
+ (instancetype)guideVCInContainerVC:(UIViewController *)containerVC
                              images:(NSArray *)images
                         pageControl:(UIPageControl *)pageControl
                     showPageControl:(BOOL)showPageControl
                             exitBtn:(UIButton *)exitBtn
                           exitBlock:(GDGuideEnterBlock)exitBlock;

@end

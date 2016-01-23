//
//  BasicViewController.h
//  BSDLOA
//
//  Created by wangguodong on 15/4/17.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GDBasicViewController : UIViewController
//是否隐藏导航栏上的返回按钮
@property (nonatomic) BOOL hideBackBtn;
//导航栏标题
@property (strong, nonatomic) NSString *titleStr;

/**
 类方法，用于设置返回按钮
 @param     backBtn 返回按钮
 @return    void
 */
+ (void)setBackButton:(UIButton *)backBtn;

//catch自己的方法
- (void)gdViewDidLoad;
- (void)gdViewWillAppear;
- (void)gdViewDidAppear;
- (void)gdViewWillDisappear;
- (void)gdViewDidDisappear;
- (void)gdViewWillLayoutSubviews;
- (void)gdDidReceiveMemoryWarning;
- (void)gdDealloc;

//自定义返回按钮的方法
- (void)gdPopViewController;
//pop至上一层vc时自动调用的方法
- (void)gdWillPopBack;
@end

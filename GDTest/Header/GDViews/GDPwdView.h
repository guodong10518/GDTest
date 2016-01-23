//
//  GDPwdView.h
//  TestBlock
//
//  Created by wangguodong on 15/12/29.
//  Copyright © 2015年 隔壁老王. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GDPwdView;
@protocol GDPwdDelegate <NSObject>
@required
- (void)gdPwdDidFinishEdit:(GDPwdView *)pwdView;

@end

@interface GDPwdView : UIView

/**
 类方法，初始化一个'GDPwdView'对象
 @param frame       视图的frame
 @param pwdLength   密码长度
 @param delegate    视图的delegate
 @return GDPwdView 初始化的'GDPwdView'对象
 */
+ (GDPwdView *)pwdViewWithFrame:(CGRect)frame
                      pwdLength:(int)pwdLength
                       delegate:(id<GDPwdDelegate>)delegate;
/**
 实例方法，清除数据
 @return void
 */
- (void)clearPwd;

@property (nonatomic, assign) id<GDPwdDelegate> delegate;   //delegate
@property (nonatomic, assign) BOOL isSecureEntry;           //是否加密输入
@property (nonatomic, strong) NSString *secureSymbol;       //加密输入时的符号
@property (nonatomic, assign) BOOL isAutoActive;            //是否自动激活（弹出输入键盘）
@property (nonatomic, strong) UIColor *viewBgColor;         //整个视图的背景颜色
@property (nonatomic, assign) float viewBgAlpha;            //整个视图的背景alpha值
@property (nonatomic, strong) UIImage *gridBgImage;         //格子背景图片
@property (nonatomic, assign) CGSize gridSize;              //格子尺寸
@property (nonatomic, strong) UIFont *gridFont;             //格子上的字体
@property (nonatomic, strong) UIColor *gridTextColor;       //格子上的颜色
@property (nonatomic, strong) NSString *pwdStr;             //密码字符串
@end
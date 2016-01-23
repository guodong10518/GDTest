//
//  XCTabBarView.h
//  Appk_ProductShow
//
//  Created by wuxian on 13-6-26.
//  Copyright (c) 2013年 wuxian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GDTabModel.h"

@protocol GDTabBarDelegate <NSObject>
- (BOOL)didSelectTabAtIndex:(int)index;
@end

@interface GDTabBarView : UIView

/**
 类方法，返回GDTabBarView实例
 @param     frame       frame
 @param     bgImage     背景图片
 @param     bgColor     背景颜色
 @param     tabArray    tab数组
 @param     delegate    GDTabBarDelegate
 @return    GDTabBarView实例
 */
+ (instancetype)tabBarViewWithFrame:(CGRect)frame
                            bgImage:(UIImage *)bgImage
                            bgColor:(UIColor *)bgColor
                           tabArray:(NSArray<GDTabModel *> *)tabArray
                           delegate:(id<GDTabBarDelegate>)delegate;

/**
 选中索引为index的tab
 @param     index   tab的index
 @return    BOOL    成功为YES，失败为NO
 */
- (BOOL)selectTabAtIndex:(int)index;
@end

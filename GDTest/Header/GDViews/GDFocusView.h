//
//  XCFocusView.h
//  JCTopic
//
//  Created by wangguodong on 14-8-9.
//  Copyright (c) 2014年 jc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GDFocusPageModel.h"

typedef void (^GDFocusSelectBlock)(int focusIndex);

@interface GDFocusView : UIView

/**
 类方法，生成一个focus view
 @param     frame               frame
 @param     focusDataArray      焦点图数据数组
 @param     hasTitle            是否有title
 @param     animateInterval     自动轮播时间间隔
 @param     pageControl         pageControl
 @param     placeHolderImage    占位image
 @param     selectFocusBlock    GDFocusSelectBlock，选中focus的回调block
 @return    GDFocusView
 */
+ (instancetype)focusViewWithFrame:(CGRect)frame
                    focusDataArray:(NSArray<GDFocusPageModel *> *)focusDataArray
                  placeHolderImage:(UIImage *)placeHolderImage
                  selectFocusBlock:(GDFocusSelectBlock)selectFocusBlock;

+ (instancetype)focusViewWithFrame:(CGRect)frame
                    focusDataArray:(NSArray<GDFocusPageModel *> *)focusDataArray
                          hasTitle:(BOOL)hasTitle
                   animateInterval:(float)animateInterval
                       pageControl:(UIPageControl *)pageControl
                  placeHolderImage:(UIImage *)placeHolderImage
                  selectFocusBlock:(GDFocusSelectBlock)selectFocusBlock;
@end

//
//  GDRatingBar.h
//  StarCharge
//
//  Created by wangguodong on 15/12/19.
//  Copyright © 2015年 隔壁老王. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol GDRatingBarDelegate;

@interface GDRatingBar : UIView
@property (nonatomic, assign) id<GDRatingBarDelegate> delegate; //delegate
@property (nonatomic, assign) NSInteger starNumber;             //当前显示的星星数量
@property (nonatomic, strong) UIColor *bgColor;                 //背景视图的颜色
@property (nonatomic, assign) BOOL editEnabled;                 //是否允许可选择

/**
 初始化GDRatingBar
 @description   也可以直接调用initWithFrame:方法，默认totalStarCnt为5，starMin为1
 @param         frame               控件frame，宽度应为相邻两个星星的中心点X间隔*(totalStarCnt+2)，因为这里前后各空出一个星星的空间
 @param         totalStarCnt        星星的总数
 @param         starMin             星星的最小数目
 @param         normalImage         星星的常态图片(未选中)
 @param         hightlightedImage   星星的高亮图片(选中)
 @return        GDRatingBar对象
 */
- (instancetype)initWithFrame:(CGRect)frame
                 totalStarCnt:(NSInteger)totalStarCnt
                      starMin:(NSInteger)starMin
                  normalImage:(UIImage *)normalImage
            hightlightedImage:(UIImage *)hightlightedImage;
@end

@protocol GDRatingBarDelegate <NSObject>
//星星的数量变化
- (void)didStarNumberChanged:(GDRatingBar *)ratingBar;
@end
//
//  GDTabModel.h
//  StarCharge
//
//  Created by wangguodong on 16/1/15.
//  Copyright © 2016年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GDTabModel : NSObject
@property (nonatomic, strong) NSString *title;          //标题
@property (nonatomic, strong) UIColor *textNormalColor; //文本未选中颜色
@property (nonatomic, strong) UIColor *textHighColor;   //文本选中颜色
@property (nonatomic, strong) UIImage *normalIconImage; //icon未选中图片
@property (nonatomic, strong) UIImage *highIconImage;   //icon选中图片
@property (nonatomic, strong) UIImage *normalBGImg;     //背景未选中图片
@property (nonatomic, strong) UIImage *highBGImg;       //背景选中图片
@end

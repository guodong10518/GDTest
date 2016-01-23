//
//  LOACustomView.h
//  BSDLOA
//
//  Created by wangguodong on 15/4/17.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GDTagModel.h"
#import "GDMacroDefine.h"
#import "GDStringUtil.h"
#import "GDHUDUtil.h"
#import "GDImageUtil.h"
#import "GDViewAddtions.h"

@protocol GDTagViewDelegate;

@interface GDBasicTagView : UIView

@property (nonatomic) BOOL editEnabled;                         //是否允许编辑
@property (nonatomic, assign) id<GDTagViewDelegate> delegate;   //delegate
@property (nonatomic, strong) GDTagModel *tagModel;             //对应的tagModel

/**
 初始化TagView
 @param     frame       view的frame
 @param     tagModel    数据
 @param     editEnabled 是否可编辑
 @param     delegate    view的delegate
 @return    GDBasicTagView
 */
- (instancetype)initWithFrame:(CGRect)frame
                     tagModel:(GDTagModel *)tagModel
                  editEnabled:(BOOL)editEnabled
                     delegate:(id<GDTagViewDelegate>)delegate;
/**
 布局UI，子类重写该方法，进行自定义UI的布局
 @return    layoutUI
 */
- (void)layoutUI;

//标题label，basicView给出默认值
@property (nonatomic, weak) UILabel *nameLabel;
//右侧箭头，basicView给出默认值
@property (nonatomic, weak) UIImageView *arrowImg;
//顶部线条，basicView给出默认值
@property (nonatomic, weak) UIImageView *toplineImg;
//底部线条，basicView给出默认值
@property (nonatomic, weak) UIImageView *bottomlineImg;
//背景按钮，basicView给出默认值
@property (nonatomic, weak) UIButton *bgButton;
//背景按钮的响应方法
- (void)bgButtonAct:(id)sender;

//根据value更新UI
- (void)updateUIWithValue;
//保存view对应的当前value
- (void)saveValue:(id)value;

@end

@protocol GDTagViewDelegate <NSObject>
@required
- (void)didValueChanged:(id)value forKey:(NSString *)key;
- (void)didClearValueForKey:(NSString *)key;
@optional
- (void)getValueForTagView:(GDBasicTagView *)tagView;
- (void)showTagPhotoDetails:(NSArray *)imgDataArray atIndex:(int)index;
@end

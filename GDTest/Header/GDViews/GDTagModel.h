//
//  TagInfoModel.h
//  BSDLOA
//
//  Created by wangguodong on 15/4/28.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import "JSONModel.h"
#import "GDOptionModel.h"

typedef enum {
    GDTagTypeTextField,     //文字文本输入
    GDTagTypeNumberText,    //数字文本输入
    GDTagTypeDataPicker,    //数据选择器
    GDTagTypeDatePicker,    //日期选择器
    GDTagTypeAddress,       
    GDTagTypeHeadImg,
    GDTagTypeButton,
    GDTagTypeTextView,
    GDTagTypePhotos,
    GDTagTypeSwitch,
    GDTagTypeSelect
}GDTagType;

@protocol GDTagModel
@end

@interface GDTagModel : JSONModel
@property (nonatomic, strong) NSString *name;           //tag的显示名称
@property (nonatomic, strong) NSString *key;            //tag的key
@property (nonatomic, strong) NSString *value;          //tag的值，如果有options，存的应该是code
@property (nonatomic, strong) NSString *displayValue;   //tag的显示值
@property (nonatomic, strong) NSString *validate;       //正则表达式（没有此属性不做做检查）
@property (nonatomic, assign) BOOL autoValidate;        //是否自动验证正则表达式
@property (nonatomic, assign) GDTagType inputType;      //交互类型
@property (nonatomic, assign) NSInteger inputSubType;   //交互子类型
@property (nonatomic, assign) BOOL editDisabled;                //是否可让用户手填
@property (nonatomic, assign) int optionLimit;                  //说明:多选项的个数限制,没有此属性不做限制
@property (nonatomic, strong) NSArray<OptionModel> *options;    //选项数组
@property (nonatomic, strong) NSString *placeholder;            //输入提示
@property (nonatomic, assign) BOOL nonEmpty;                    //是否限制非空
@property (nonatomic, strong) NSString *defaultValue;           //默认值，用于验证是否修改了默认值
@property (nonatomic, strong) NSString *dataFormat;             //数据格式，如“2016-01-18”
/**
 用value在options中进行匹配显示，更新displayValue
 @return    void
 */
- (void)updateDisplayValue;
@end

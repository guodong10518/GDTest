//
//  OptionModel.h
//  BSDLOA
//
//  Created by wangguodong on 15/4/28.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import "JSONModel.h"

@protocol OptionModel
@end

@interface GDOptionModel : JSONModel
@property (nonatomic, strong) NSString *code;   //选项代码
@property (nonatomic, strong) NSString *name;   //选项值
@end

//
//  GDTagGroupModel.h
//  GDMobileSDK
//
//  Created by wangguodong on 16/1/14.
//  Copyright © 2016年 隔壁老王. All rights reserved.
//

#import "JSONModel.h"
#import "GDTagModel.h"

@interface GDTagGroupModel : JSONModel
@property (nonatomic, strong) NSString *name;               //名称
@property (nonatomic, strong) NSArray<GDTagModel> *tagList; //tag数组
@end

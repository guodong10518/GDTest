//
//  h5PageModel.h
//  IBMBeacon
//
//  Created by wangguodong on 15/9/24.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import "JSONModel.h"

@interface GDH5PageModel : JSONModel
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *url;
@property (strong, nonatomic) NSDictionary *menuLeft;
@property (strong, nonatomic) NSArray *menuRight;
@end

//
//  GDFocusPageModel.h
//  GDMobileSDK
//
//  Created by wangguodong on 16/1/13.
//  Copyright © 2016年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GDFocusPageModel : NSObject
@property (nonatomic, strong) NSString *imageUrl;   //image的url，来源于web时是全路径，来源本地是图片名称
@property (nonatomic, strong) NSString *title;      //image的标题
@property (nonatomic, assign) BOOL showTitle;       //是否显示标题
@property (nonatomic, assign) BOOL isLocalSrc;      //是否来源于本地资源
@end

//
//  BasicHandler.h
//  LOASpider
//
//  Created by wangguodong on 15/5/13.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>

//Service处理完成后调用的Block
typedef void (^GDServiceCompleteBlock)();

//Service处理成功时调用的Block
typedef void (^GDServiceSuccessBlock)(id obj);

//Service处理失败时调用的Block
typedef void (^GDServiceFailedBlock)(id obj);


@interface GDBasicService : NSObject

@end

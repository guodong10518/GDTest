//
//  UIControl+GDBlock.h
//  GDMobileSDK
//
//  Created by wangguodong on 16/1/8.
//  Copyright © 2016年 隔壁老王. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ControlActionBlock)(id sender);

@interface UIControl (GDBlock)

- (void)addHandlerControlEvents:(UIControlEvents)controlEvents withActionBlock:(ControlActionBlock)actionBlock;
- (void)removeHandlerControlEvents:(UIControlEvents)controlEvents;
@end

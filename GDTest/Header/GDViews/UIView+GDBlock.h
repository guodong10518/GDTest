//
//  UIView+GDBlock.h
//  GDMobileSDK
//
//  Created by wangguodong on 16/1/8.
//  Copyright © 2016年 隔壁老王. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (GDBlock)<UIAlertViewDelegate>
- (void)showAlertWithCompletionBlock:(void(^)(NSInteger buttonIndex))completionBlock;
@end

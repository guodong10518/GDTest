//
//  GDPhotosView.h
//  DaZhuanJia
//
//  Created by wangguodong on 15/11/11.
//  Copyright © 2015年 隔壁老王. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol GDPhotosViewDelegate <NSObject>
- (void)photosDidChange:(NSArray *)imgDataArray;
- (void)showPhotoDetails:(NSArray *)imgDataArray atIndex:(int)index;
@end

@interface GDPhotosView : UIView
@property (nonatomic) BOOL deleteEnabled;
@property (nonatomic, assign) id<GDPhotosViewDelegate> delegate;
@end

//
//  BasicTableViewController.h
//  DaZhuanJia
//
//  Created by wangguodong on 15/8/18.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import "GDBasicViewController.h"

@interface GDBasicTableViewController : GDBasicViewController
//tableview，在子类中需要在调用[super gdViewDidLoad]之前，赋值
@property (nonatomic, strong) UITableView *tableView;
//data数组
@property (nonatomic, strong) NSMutableArray *dataArray;
//每页的数据，默认为10
@property (nonatomic, assign) int pageSize;
//分页的页码，从1开始
@property (nonatomic, assign) int pageNo;
//是否禁用下拉刷新，默认允许
@property (nonatomic, assign) BOOL refreshDisabled;
//是否禁用上拉加载更多，默认允许
@property (nonatomic, assign) BOOL moreDisabled;
//是否禁用在初次进入页面时自动加载数据，默认允许
@property (nonatomic, assign) BOOL autoLoadDataDisabled;

/**
 添加下拉header
 @return    void
 */
- (void)addLegendHeader;
/**
 添加上拉footer
 @return    void
 */
- (void)addLegendFooter;

/**
 刷新数据
 @return    void
 */
- (void)loadNewData;

/**
 获取数据，根据当前的pageNo和pageSize
 @return    void
 */
- (void)getDataList;

/**
 成功获取数据后，添加至数据源，并更新UI
 @return    void
 */
- (void)getDataSuccess:(NSArray *)dataArray;

/**
 失败获取数据后，更新UI
 @return    void
 */
- (void)getDataFailed;
@end

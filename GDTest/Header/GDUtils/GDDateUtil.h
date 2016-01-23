//
//  GDDateUtil.h
//  BSDLOA
//
//  Created by wangguodong on 15/6/9.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GDDateUtil : NSObject

/**
 根据年、月、日来生成NSDate
 @param     year    年
 @param     month   月
 @param     day     日
 @return    NSDate
 */
+ (NSDate *)dateWithYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;

/**
 按照格式dateFormat返回date的字符串
 @param     date        日期
 @param     dateFormat  字符串格式
 @return    NSString
 */
+ (NSString *)dateStrForDate:(NSDate *)date dateFormat:(NSString *)dateFormat;

/**
 按照格式dateFormat返回当前日期的字符串
 @param     dateFormat  字符串格式
 @return    NSString
 */
+ (NSString *)currentDateWithFormat:(NSString *)formatStr;

/**
 按照格式dateFormat返回当前时间戳timeStamp(秒数)的字符串
 @param     timeStamp   时间戳(秒数)
 @param     dateFormat  字符串格式
 @return    NSString
 */
+ (NSString *)dateStrForSec:(long long)timeStamp dateFormat:(NSString *)dateFormat;

/**
 按照格式dateFormat返回上个月的第一天和最后一天的字符串数组
 @param     dateFormat  字符串格式
 @return    NSArray，第一个元素是第一天，第二个元素是最后一天
 */
+ (NSArray *)previousMonthFirstDayAndLastDayWithFormat:(NSString *)dateFormat;

/**
 返回手机当前时间的秒数
 @return    long long
 */
+ (long long)phoneNowTimeSec;

/**
 返回手机当前时间的毫秒数
 @return    long long
 */
+ (long long)phoneNowTimeMsec;

/**
 返回date的月日，如“01.12”
 @param     timeStr     日期字符串，如“2016.01.12”
 @return    NSString
 */
+ (NSString *)monthDayWithTime:(NSString *)timeStr;

/**
 返回date的时分，如“2015.01.12 14:16”
 @param     timeStr     日期字符串，如“2015.01.12 14:16:15”
 @return    NSString
 */
+ (NSString *)hourMinuteWithTime:(NSString *)timeStr;


@end

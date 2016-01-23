//
//  GDStringUtil.h
//  BSDLOA
//
//  Created by wangguodong on 15/5/19.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GDStringUtil : NSObject
/**
 int转大写英文字母，e.g. 0-->A
 @param     num         数字
 @return    NSString    大写英文字母
 */
+ (NSString *)capitalLetterFromInt:(int)num;

/**
 int转小写英文字母，e.g. 0-->a
 @param     num         数字
 @return    NSString    小写英文字母
 */
+ (NSString *)lowerLetterFromInt:(int)num;

/**
 米转成千米
 @param     meter   米
 @param     unitStr 单位，e.g. km
 @return    NSString    转换后的string
 */
+ (NSString *)getKmStrWithMeter:(int)meter unitStr:(NSString *)unitStr;

/**
 拼接不同颜色的string
 @param     strArray            字符串数组
 @param     colorArray          颜色数组
 @return    NSAttributedString  拼接后的字符串
 */
+ (NSAttributedString *)attributedStringWithStrArray:(NSArray *)strArray
                                          colorArray:(NSArray *)colorArray;


/**
 str的正则表达式验证
 @param     str     验证的字符串
 @param     regex   正则表达式
 @return    BOOL    是否满足
 */
+ (BOOL)isVaildsStr:(NSString *)str forRegex:(NSString *)regex;

/**
 encodeURIComponen编码，e.g.@"key=value"-->@"key%3Dvalue"
 @param     input       输入的字符串
 @return    NSString    unicode编码后的字符串
 */
+ (NSString *)encodeURIComponentWithString:(NSString *)input;

/**
 encodeURIComponen解码，e.g.key=value<--key%3Dvalue
 @param     input       输入的字符串
 @return    NSString    unicode解码后的字符串
 */
+ (NSString *)decodeURIComponentWithString:(NSString *)input;

/**
 ASCII-->Native，e.g. \u006b\u0065\u0079\u0025\u0033\u0044\u0076\u0061\u006c\u0075\u0065-->key%3Dvalue
 @param     asciiString  ASCII字符串
 @return    NSString     native字符串
 */
+ (NSString *)asciiToNativeWithString:(NSString *)asciiString;

/**
 native-->GBK
 @param     string      native字符串
 @return    NSString    GBK字符串
 */
+ (NSString *)nativeToGBKWithString:(NSString *)string;

/**
 md5加密
 @param     input       原字符串
 @return    NSString    md5加密后字符串
 */
+ (NSString *)md5HexDigest:(NSString*)input;

/**
 过滤掉superString中出现的filterStr
 @param     filterStr   应该过滤的字符串
 @param     superString 从该字符串中过滤
 @return    NSString    过滤后的字符串
 */
+ (NSString *)filterString:(NSString *)filterStr fromString:(NSString *)superString;

/**
 截取字符串
 @param     wholeStr        源字符串
 @param     annotationStr   标记字符串
 @param     mask            NSStringCompareOptions，查找的选项
 @param     beginStr        起始字符串
 @param     endStr          终止字符串
 @return    NSString        截取到的字符串
 */
+ (NSString *)subStrFromWholeStr:(NSString *)wholeStr
               withAnnotationStr:(NSString *)annotationStr
                         options:(NSStringCompareOptions)mask
                        beginStr:(NSString *)beginStr
                          endStr:(NSString *)endStr;

@end

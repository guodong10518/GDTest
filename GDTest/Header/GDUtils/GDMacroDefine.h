//
//  GDMacroDefine.h
//  BSDLOA
//
//  Created by wangguodong on 15/5/19.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#ifndef BSDLOA_GDMacroDefine_h
#define BSDLOA_GDMacroDefine_h

#ifdef DEBUG
#   define GDDLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define GDDLog(...)
#endif
// ALog always displays output regardless of the DEBUG setting
#define GDALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

#define NLSystemVersionGreaterOrEqualThan(version) ([[[UIDevice currentDevice] systemVersion] floatValue] >= version)

#define IsNilOrNull(_ref)   (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) || ([(_ref) isKindOfClass:[NSNull class]]) )

#define isValidStr(_ref) ((IsNilOrNull(_ref)==NO) && ([(_ref) isKindOfClass:[NSString class]]) && ([_ref length]>0))

#define clearNilStr(str) (isValidStr(str)?str:@"")

#define clearNiltoZeroStr(str) (isValidStr(str)?str:@"0")

#define clearNilReturnNull(str) (isValidStr(str)?str:[NSNull null])

#define USER_DEFAULT [NSUserDefaults standardUserDefaults]

#define RGB(r, g, b)    [UIColor colorWithRed:(r)/255.f green:(g)/255.f blue:(b)/255.f alpha:1.f]

#define ScreenWidth [UIScreen mainScreen].bounds.size.width

#define ScreenHeight [UIScreen mainScreen].bounds.size.height

#define isPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)


#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#endif

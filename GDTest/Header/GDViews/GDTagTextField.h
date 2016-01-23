//
//  LOATextField.h
//  BSDLOA
//
//  Created by wangguodong on 15/4/17.
//  Copyright (c) 2015年 隔壁老王. All rights reserved.
//

#import "GDBasicTagView.h"

@interface GDTagTextField : GDBasicTagView<UITextFieldDelegate>
//valueTextfield，basicView给出默认值
@property (nonatomic, weak) UITextField *valueTextfield;
@end

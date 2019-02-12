//
//  RACTestUITextField.h
//  ReactiveObjC
//
//  Created by Ovidiu Adorian on 12/02/2019.
//  Copyright © 2019 GitHub. All rights reserved.
//

#import <UIKit/UIKit.h>

// Enables use of -sendActionsForControlEvents: in unit tests.
@interface RACTestUITextField : UITextField

+ (instancetype)textField;

@end

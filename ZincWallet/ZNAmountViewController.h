//
//  ZNAmountViewController.h
//  ZincWallet
//
//  Created by Aaron Voisine on 6/4/13.
//  Copyright (c) 2013 zinc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZNPaymentRequest;

@interface ZNAmountViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, strong) ZNPaymentRequest *request;

@end
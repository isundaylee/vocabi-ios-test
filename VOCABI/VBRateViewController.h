//
//  VBRateViewController.h
//  VOCABI
//
//  Created by Jiahao Li on 10/22/12.
//  Copyright (c) 2012 Jiahao Li. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VBRateViewControllerDelegate.h"
#import "VBWordRateStore.h"

@class VBRateViewController;

typedef void(^DismissBlock)(VBRateViewController *);

@class VBWord;

@interface VBRateViewController : UITableViewController

@property (nonatomic) VBWord *word;
@property (nonatomic) id<VBRateViewControllerDelegate> delegate;

@end

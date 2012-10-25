//
//  VBRateViewControllerDelegate.h
//  VOCABI
//
//  Created by Jiahao Li on 10/22/12.
//  Copyright (c) 2012 Jiahao Li. All rights reserved.
//

#import <Foundation/Foundation.h>

@class VBRateViewController; 

@protocol VBRateViewControllerDelegate <NSObject>

- (void)rateViewControllerDidRateWord:(VBRateViewController *)rateViewController;

@end

//
//  VWViewController.h
//  Prereq for Overdue Assignment
//
//  Created by Valerino on 7/2/14.
//  Copyright (c) 2014 VW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VWViewController : UIViewController <UITextViewDelegate>

@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;

- (IBAction)processDateButtonPressed:(UIButton *)sender;

@end

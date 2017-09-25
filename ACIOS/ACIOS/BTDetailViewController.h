//
//  DetailViewController.h
//  ACIOS
//
//  Created by Charles Zillmann on 9/23/17.
//  Copyright © 2017 Charles Zillmann. All rights reserved.
// 

#import <UIKit/UIKit.h>
#import "ACIOS+CoreDataModel.h"

@interface BTDetailViewController : UIViewController

@property (strong, nonatomic) BuildTask *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


//
//  BT.h
//  ACIOS
//
//  Created by Charles Zillmann on 9/23/17.
//  Copyright © 2017 Charles Zillmann. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "ACIOS+CoreDataModel.h"

@class BTDetailViewController;

@interface BTMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) BTDetailViewController *btdetailViewController;

@property (strong, nonatomic) NSFetchedResultsController<BuildTask *> *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end


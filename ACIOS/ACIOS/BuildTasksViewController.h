//
//  DesignTasksViewController.h
//  ACIOS
//
//  Created by Charles Zillmann on 9/25/17.
//  Copyright © 2017 Charles Zillmann. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "ACIOS+CoreDataModel.h"

@class BuildTasksViewController;

@interface BuildTasksViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController<BuildTasks *> *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end


//#import <UIKit/UIKit.h>
//#import <CoreData/CoreData.h>
//#import "ACIOS+CoreDataModel.h"
//
//@class DetailViewController;
//
//@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>
//
//@property (strong, nonatomic) DetailViewController *detailViewController;
//
//@property (strong, nonatomic) NSFetchedResultsController<Deployment *> *fetchedResultsController;
//@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
//
//
//@end


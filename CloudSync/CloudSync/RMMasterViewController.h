//
//  RMMasterViewController.h
//  CloudSync
//
//  Created by 泉伟 马 on 12-2-16.
//  Copyright (c) 2012年 Home. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RMDetailViewController;

#import <CoreData/CoreData.h>

@interface RMMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) RMDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

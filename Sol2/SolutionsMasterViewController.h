//
//  SolutionsMasterViewController.h
//  Sol2
//
//  Created by Susan Perkins on 12-11-25.
//  Copyright (c) 2012 Susan Perkins. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SolutionsDetailViewController;

@interface SolutionsMasterViewController : UITableViewController

@property (strong, nonatomic) SolutionsDetailViewController *detailViewController;

@end

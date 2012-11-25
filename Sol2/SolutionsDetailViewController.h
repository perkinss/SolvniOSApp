//
//  SolutionsDetailViewController.h
//  Sol2
//
//  Created by Susan Perkins on 12-11-25.
//  Copyright (c) 2012 Susan Perkins. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SolutionsDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

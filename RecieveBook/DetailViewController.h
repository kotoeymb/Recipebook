//
//  DetailViewController.h
//  RecieveBook
//
//  Created by Revo Tech on 5/23/16.
//  Copyright © 2016 Revo Tech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController


@property (strong, nonatomic) IBOutlet UILabel *recipeLabel;

@property (nonatomic, strong) NSString *recipeName;

@end

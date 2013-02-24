//
//  PlayerCell.h
//  Ratings
//
//  Created by Nicholas Mercer on 2/23/13.
//  Copyright (c) 2013 Nicholas Mercer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *nameLabel;
@property (nonatomic, strong) IBOutlet UILabel *gameLabel;
@property (nonatomic, strong) IBOutlet UIImageView
*ratingImageView;

@end

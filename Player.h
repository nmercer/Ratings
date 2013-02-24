//
//  Player.h
//  Ratings
//
//  Created by Nicholas Mercer on 2/23/13.
//  Copyright (c) 2013 Nicholas Mercer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end

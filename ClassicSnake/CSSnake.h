//
//  CSSnake.h
//  ClassicSnake
//
//  Created by Александр on 20.05.15.
//  Copyright (c) 2015 Satori. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSSegment.h"

@interface CSSnake : NSObject


@property (nonatomic) NSArray *segments;
@property (nonatomic) CSSegment *head;
@property (nonatomic) CSSegment *tail;

-(void)move;
-(void)turnLeft;
-(void)turnRight;
-(void)eat;

@end

//
//  CSStage.h
//  ClassicSnake
//
//  Created by Александр on 20.05.15.
//  Copyright (c) 2015 Satori. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSApple.h"
#import "CSSnake.h"

@interface CSStage : NSObject

@property (nonatomic) CSSnake *snake;
@property (nonatomic) CSApple *apple;
@property (nonatomic) int score;
@property (nonatomic) NSTimer *timer;

-(void)switchPause;
-(void)newGame;
-(void)endGame;



@end

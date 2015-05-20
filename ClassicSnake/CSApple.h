//
//  CSApple.h
//  ClassicSnake
//
//  Created by Александр on 20.05.15.
//  Copyright (c) 2015 Satori. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSApple : NSObject

@property (nonatomic) int x,y;

-(void)spawnAtRandomLocation;

@end

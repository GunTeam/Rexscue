//
//  GameScene.h
//  Rexscue
//
//  Created by Laura Breiman on 1/24/15.
//  Copyright 2015 Apportable. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Meteor.h"
#import "dinosaur.h"
#import "TRex.h"
#import "Stegosaurus.h"
#import "Triceratops.h"
#import "Allosaurus.h"
#import "Pterodactyl.h"
#import "MainScene.h"

@interface GameScene : CCNode {
    CGFloat screenWidth,screenHeight;
    CCPhysicsNode *_physicsNode;
    CCNodeColor *_ground,*_rightWall,*_leftWall;
    int NUM_DINOS;
    CCLabelTTF *_scoreLabel;
}

-(void) addPointsToScore: (int) points;

@property int score;

@end

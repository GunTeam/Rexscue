//
//  GameOver.m
//  Rexscue
//
//  Created by Laura Breiman on 1/27/15.
//  Copyright 2015 Apportable. All rights reserved.
//

#import "GameOver.h"


@implementation GameOver

-(void) didLoadFromCCB{
    NSInteger highScore = [[NSUserDefaults standardUserDefaults]integerForKey:@"HighScore"];
    NSInteger lastScore = [[NSUserDefaults standardUserDefaults]integerForKey:@"LastScore"];
    
    [_bestScoreLabel setString:[NSString stringWithFormat:@"Best: %li", (long)highScore]];
    [_yourScoreLabel setString:[NSString stringWithFormat:@"Your Score: %li", (long)lastScore]];
    
    [[NSUserDefaults standardUserDefaults]setBool:true forKey:@"ReturningUser"];
    
    if([[NSUserDefaults standardUserDefaults]boolForKey:@"MusicOn"]){
        musicPlayer = [OALAudioTrack track];
        [musicPlayer preloadFile:@"gameOverSong.mp3"];
        musicPlayer.numberOfLoops = -1;
        [musicPlayer play];
    }
}


-(void) replayGame{
    [[CCDirector sharedDirector] replaceScene:[CCBReader loadAsScene:@"GameScene"]];
}

-(void) mainScreen{
    [[CCDirector sharedDirector] replaceScene:[CCBReader loadAsScene:@"MainScene"]];
}

@end
//
//  Upgrades.h
//  Rexscue
//
//  Created by Anna Neuman on 1/28/15.
//  Copyright 2015 Apportable. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "dinosaur.h"

@interface Upgrades : CCNode {
    dinosaur *_triceratops, *_pterodactyl, *_allosaurus, *_trex, *_stegosaurus;
    NSArray *ourdinos;
    CCParticleSystem *_selector, *_TrexSelector, *_PterodactylSelector, *_TriceratopsSelector, *_AllosaurusSelector, *_StegosaurusSelector;
    CCButton *_mittenButton, *_hatButton, *_needleButton, *_trexButton, *_alloButton, *_stegoButton,*_tricButton, *_pteroButton;
    OALAudioTrack *musicPlayer;
    long numNeedles;
    int mittenPrice, hatPrice, needleUpgradePrice;
    CCLabelTTF *_numNeedleLabel, *_playMorePrompt, *_upgradePrompt, *_needleDescription, *_mittenPriceLabel, *_hatPriceLabel;
    Boolean mittenSelected, hatSelected;
    
    NSDictionary* dinotypeToSelector;
    
}

@end

//
//  CrystalBall.m
//  CrystalBall
//
//  Created by Andrian Gungon on 2/18/14.
//  Copyright (c) 2014 Andrian Gungon. All rights reserved.
//

#import "CrystalBall.h"

@implementation CrystalBall

-(NSArray *) predictions{
    if(_predictions == nil){
        _predictions = @[@"It is Certain", @"It is Decidedly so", @"All signs say YES", @"The stars are not aligned",
                         @"My reply is no",
                         @"It is doubtful",
                         @"Better now to tell you now",
                         @"Concentrate and ask again",
                         @"Unable to answer now",
                         @"Maybe, yes"
                         ];
    }
    
    return _predictions;
}

-(NSString*) randomPrediction{
    
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end

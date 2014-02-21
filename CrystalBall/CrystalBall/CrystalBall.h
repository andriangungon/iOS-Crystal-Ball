//
//  CrystalBall.h
//  CrystalBall
//
//  Created by Andrian Gungon on 2/18/14.
//  Copyright (c) 2014 Andrian Gungon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CrystalBall : NSObject {
    NSArray *_predictions;
}

@property(nonatomic, strong, readonly) NSArray *predictions;
-(NSString*) randomPrediction;

@end

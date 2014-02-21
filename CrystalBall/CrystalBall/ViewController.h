//
//  ViewController.h
//  CrystalBall
//
//  Created by Andrian Gungon on 2/17/14.
//  Copyright (c) 2014 Andrian Gungon. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CrystalBall;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *predictionlLabel;
@property(strong, nonatomic) CrystalBall *crystalBall;
//- (IBAction)buttonPressed;

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (void) makePrediction;
@end

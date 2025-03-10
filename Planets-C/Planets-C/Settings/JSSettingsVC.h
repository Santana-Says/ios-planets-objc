//
//  JSSettingsVC.h
//  Planets-C
//
//  Created by Jeffrey Santana on 10/7/19.
//  Copyright © 2019 Lambda. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JSSettingsVC : UIViewController

@property (weak, nonatomic) IBOutlet UISwitch *plutoSwitch;

@property NSUserDefaults *defaults;
@property (assign, nonatomic) BOOL isPlutoAPlanet;

- (IBAction)doneBtnTapped:(id)sender;

@end

NS_ASSUME_NONNULL_END

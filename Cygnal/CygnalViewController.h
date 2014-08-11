//
//  CygnalViewController.h
//  Cygnal
//
//  Created by Etai Klein on 8/10/14.
//  Copyright (c) 2014 Etai Klein. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CygnalViewController : UIViewController<UIAlertViewDelegate>{
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    // Add the next three lines
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
}

- (IBAction)buttonPressed;

@end

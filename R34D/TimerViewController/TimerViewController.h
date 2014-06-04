//
//  TimerViewController.h
//  R34D
//
//  Created by Brandon Dorris on 6/3/14.
//  Copyright (c) 2014 nodnarb. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    TimerStateStopped,
    TimerStateRunning
} TimerState;

@interface TimerViewController : UIViewController {
    IBOutlet UILabel* stopwatchLabel;
    IBOutlet UIButton* timerToggle;
    TimerState timerState;
}

@property (strong, nonatomic) NSTimer *stopWatchTimer;
@property (strong, nonatomic) NSDate *startDate;
@end

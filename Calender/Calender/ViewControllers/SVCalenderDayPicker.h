//
//  SVCalenderDayPicker.h
//  Calender
//
//  Created by Vijay on 01/10/17.
//  Copyright © 2017 Svakriti. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SVCalenderDayPicker : UIViewController

//If first date and last dates are not mentioned then range would be currentDate -1year --- currentDate +1 year.Default calender will be current calender
- (instancetype)initWithFirstDate:(NSDate *)firstDate lastDate:(NSDate *)lastDate  calender:(NSCalendar *)calender;

@end

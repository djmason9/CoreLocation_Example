//
//  AppDelegate.h
//  CoreLocationDemo
//
//  Created by Darren Mason on 7/3/14.
//  Copyright (c) 2014 bitcows. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate,CLLocationManagerDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) CLLocationManager *locationManager;

@end
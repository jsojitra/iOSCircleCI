//
//  AppDelegate.h
//  iOSCircleCI
//
//  Created by bosleo8 on 14/12/16.
//  Copyright © 2016 Jayesh Sojitra. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


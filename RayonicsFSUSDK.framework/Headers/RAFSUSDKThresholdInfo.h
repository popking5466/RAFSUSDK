//
//  RAFSUSDKThresholdInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 24/01/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RAFSUSDKThresholdInfo : NSObject


@property (nonatomic, assign) NSInteger minTemperature;
@property (nonatomic, assign) NSInteger maxTemperature;
@property (nonatomic, assign) NSInteger battery;
@property (nonatomic, assign) NSInteger lockDelayMinute;
@property (nonatomic, assign) NSInteger reportCycleHour;

@property (nonatomic, assign) BOOL skewDetection;
@property (nonatomic, assign) BOOL floodDetection;
@property (nonatomic, assign) BOOL shakeDetection;
@property (nonatomic, assign) BOOL cameraDetection;
@property (nonatomic, assign) BOOL forcedUnlockDetection;
@property (nonatomic, assign) BOOL arming;


@end

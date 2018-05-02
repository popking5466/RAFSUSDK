//
//  RAFSUSDKWarningIntervalInfo.h
//  
//
//  Created by Piccolo on 15/03/2018.
//

#import <Foundation/Foundation.h>

@interface RAFSUSDKWarningIntervalInfo : NSObject

@property (nonatomic, assign) NSInteger temperatureInterval;
@property (nonatomic, assign) NSInteger batteryInterval;
@property (nonatomic, assign) NSInteger horizontalInterval;
@property (nonatomic, assign) NSInteger floodInterval;
@property (nonatomic, assign) NSInteger shakeInterval;
@property (nonatomic, assign) NSInteger illegalUnlockInterval;
@property (nonatomic, assign) NSInteger unlockTimeoutInterval;

@end

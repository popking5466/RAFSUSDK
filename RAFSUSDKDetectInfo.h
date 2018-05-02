//
//  RAFSUSDKDetectInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 2017/8/10.
//  Copyright © 2017年 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RAFSUSDKPublicTypeEnum.h"
#import "RAFSUSDKLockInfo.h"

@interface RAFSUSDKDetectInfo : NSObject

@property (nonatomic, strong) NSString *fsuTime;
@property (nonatomic, assign) CGFloat fsuTemp;
@property (nonatomic, assign) NSInteger fsuBattery;
@property (nonatomic, strong) NSArray<RAFSUSDKLockInfo *> *locksArray;
@property (nonatomic, assign) BOOL fsuShaking;
@property (nonatomic, assign) BOOL fsuFlooded;
@property (nonatomic, assign) NSInteger horizontalSensing;
@property (nonatomic, assign) NSInteger historyEventCount;

@end

//
//  RAFSUSDKHeartBeatInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 28/02/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RAFSUSDKPublicTypeEnum.h"
#import "RAFSUSDKLockInfo.h"

@interface RAFSUSDKHeartBeatInfo : NSObject

@property (nonatomic, assign) NSInteger deviceStatus;
@property (nonatomic, strong) NSDate *time;
@property (nonatomic, strong) NSString *systemCode;
@property (nonatomic, assign) CGFloat temperature;
@property (nonatomic, assign) NSRAFSUSDKPowerSupplyType powerSupplyType;
@property (nonatomic, assign) NSInteger battery;
@property (nonatomic, assign) NSRAFSUSDKTriphaseInfoType triphaseInfoType;
@property (nonatomic, assign) BOOL shake;
@property (nonatomic, assign) NSRAFSUSDKLockStatusType contactStatusI;
@property (nonatomic, assign) NSRAFSUSDKLockStatusType contactStatusII;


/*
<
00 设备状态 (1) 0
5a 96 6b 8e 时间 (4) 1-->4
36 36 36 36 系统码 (4) 5-->8
00 00 db 41 AI_1
ff ff ff ff AI_2
ff ff ff ff AI_3
ff ff ff ff AI_4
ff ff ff ff AI_5
ff ff ff ff AI_6
ff ff ff ff AI_7
ff ff ff ff AI_8
ff ff ff ff AI_9 (36) 9-->44

00 00 00 00
00 00 00 00
00 00 00 00
00 00 00 00
00 00 00 00

00 00 00 00
00 00 00 00
00 00 00 00
00 00 00 00
00 00 00 00

00 00 00 00
00 00 00 00 电表信息 (48) 45-->92

01 供电模式 93
64 电池电量 94
04 三相缺相信息 95
01 震动 96
01 门磁1 97
01 门磁2 98
ff ff
ff ff ff ff
ff ff ff ff DI (16) 93-->108

ff ff ff ff
ff ff ff ff>
*/


@end

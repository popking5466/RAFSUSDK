//
//  RAFSUSDKOnlineOpenInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 2017/8/10.
//  Copyright © 2017年 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RAFSUSDKPublicTypeEnum.h"

@interface RAFSUSDKOnlineOpenInfo : NSObject


@property (nonatomic, strong) NSDate *beginTime;
@property (nonatomic, strong) NSDate *endTime;
@property (nonatomic, assign) NSInteger lockID;
@property (nonatomic, assign) NSInteger userID;

- (instancetype)initWithUserID:(NSInteger)userID lockID:(NSInteger)lockID beginTime:(NSDate *)beginTime endTime:(NSDate *)endTime;

@end

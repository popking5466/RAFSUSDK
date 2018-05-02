//
//  RAFSUSDKActiveReportInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 2017/8/9.
//  Copyright © 2017年 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RAFSUSDKDetectInfo.h"

@interface RAFSUSDKActiveReportInfo : NSObject
@property (assign, nonatomic) BOOL feedBackState;
@property (strong, nonatomic) RAFSUSDKDetectInfo *fsuDetectInfo;

@end

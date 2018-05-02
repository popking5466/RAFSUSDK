//
//  RAFSUSDKWirelessInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 2017/8/14.
//  Copyright © 2017年 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RAFSUSDKPublicTypeEnum.h"

@interface RAFSUSDKWirelessInfo : NSObject

@property (nonatomic, assign) NSRAFSUSDKWirelessType wirelessMode;
@property (nonatomic, strong) NSString *account;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *apnInner;
@property (nonatomic, strong) NSString *phoneNum;
@property (nonatomic, assign) NSInteger signalIntensity;



@end

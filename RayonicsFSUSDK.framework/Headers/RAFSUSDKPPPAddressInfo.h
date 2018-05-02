//
//  RAFSUSDKPPPAddressInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 2017/8/14.
//  Copyright © 2017年 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RAFSUSDKPublicTypeEnum.h"

@interface RAFSUSDKPPPAddressInfo : NSObject

@property (nonatomic, strong) NSString *ipAddress;
@property (nonatomic, strong) NSString *ipMask;
@property (nonatomic, strong) NSString *gateway;
@property (nonatomic, strong) NSString *netWorkSegment;
@property (nonatomic, strong) NSString *broadcastNetworkSegment;
@property (nonatomic, strong) NSString *macAddress;
@property (nonatomic, assign) NSRAFSUSDKPPPStatusType status;

@end

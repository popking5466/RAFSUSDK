//
//  RAFSUSDKEthernetParameterInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 28/02/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RAFSUSDKEthernetParameterInfo : NSObject

/*-- ip地址 --*/
@property (nonatomic, strong) NSString *ipAddress;
/*-- ip掩码 --*/
@property (nonatomic, strong) NSString *ipMask;
/*-- 网关 --*/
@property (nonatomic, strong) NSString *gateway;
/*-- 网段 --*/
@property (nonatomic, strong) NSString *netWorkSegment;
/*-- 广播网段 --*/
@property (nonatomic, strong) NSString *broadcastNetWorkSegment;
/*-- Mac 地址 --*/
@property (nonatomic, strong) NSString *macAddress;

@end

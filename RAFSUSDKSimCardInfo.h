//
//  RAFSUSDKSimCardInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 22/01/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RAFSUSDKSimCardInfo : NSObject

@property (nonatomic, strong) NSString *IMEI;
@property (nonatomic, strong) NSString *IMSI;
@property (nonatomic, strong) NSString *SINR;
@property (nonatomic, strong) NSString *RSRQ;
@property (nonatomic, strong) NSString *signalPower;
@property (nonatomic, strong) NSString *baseStationIP;
@property (nonatomic, strong) NSString *baseStationID;

@end

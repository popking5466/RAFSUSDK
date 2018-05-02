//
//  RAFSUSDKServiceInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 2017/8/14.
//  Copyright © 2017年 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RAFSUSDKPublicTypeEnum.h"

@interface RAFSUSDKServiceInfo : NSObject<NSCopying>

@property (nonatomic, assign) NSRAFSUSDKTransportType transMode;
@property (nonatomic, copy) NSString *ipAddress;
@property (nonatomic, assign) NSUInteger port;

//- (id)copyWithZone:(NSZone *)zone;

@end

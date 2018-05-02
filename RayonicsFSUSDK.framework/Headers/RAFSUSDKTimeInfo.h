//
//  RAFSUSDKTimeInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 01/03/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RAFSUSDKTimeInfo : NSObject

@property (nonatomic, strong) NSDate *deviceTime;
@property (nonatomic, strong) NSDate *sentTime;

- (instancetype)initWithDeviceTimeInterval:(NSInteger)deviceTimeInterval sentTimeInterval:(NSInteger)sentTimeInterval;

@end

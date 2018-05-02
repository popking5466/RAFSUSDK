//
//  RAFSUSDKMotorActionInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 01/03/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RAFSUSDKPublicTypeEnum.h"

@interface RAFSUSDKMotorActionInfo : NSObject

@property (nonatomic, assign) NSInteger serial;
@property (nonatomic, assign) NSRAFSUSDKMotorActionType actionType;
@property (nonatomic, assign) BOOL resetMotorOperationalParameter;
@property (nonatomic, assign) NSInteger delayTimeInterval;//单位:秒
@property (nonatomic, assign) NSInteger motorRotationTimeInterval;//单位:10毫秒
@property (nonatomic, assign) NSInteger openingTimeInterval;//单位:秒

- (instancetype)initWithSerial:(NSInteger)serial
                    actionType:(NSRAFSUSDKMotorActionType)actionType
resetMotorOperationalParameter:(BOOL)resetMotorOperationalParameter
             delayTimeInterval:(NSInteger)delayTimeInterval
             motorRotationTimeInterval:(NSInteger)motorRotationTimeInterval
                   openingTimeInterval:(NSInteger)openingTimeInterval;

@end

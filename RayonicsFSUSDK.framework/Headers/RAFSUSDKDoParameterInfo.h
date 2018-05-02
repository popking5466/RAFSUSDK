//
//  RAFSUSDKDoParameterInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 02/03/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RAFSUSDKPublicTypeEnum.h"

@interface RAFSUSDKDoParameterInfo : NSObject

@property (nonatomic, assign) NSInteger serial;
@property (nonatomic, assign) NSRAFSUSDKDoParameterType type;
@property (nonatomic, assign) NSInteger timeInterval;

- (instancetype)initWithSerial:(NSInteger)serial type:(NSRAFSUSDKDoParameterType)type timeInterval:(NSInteger)timeInterval;

@end

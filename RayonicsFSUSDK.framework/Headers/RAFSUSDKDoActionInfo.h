//
//  RAFSUSDKDoActionInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 02/03/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RAFSUSDKPublicTypeEnum.h"

@interface RAFSUSDKDoActionInfo : NSObject

@property (nonatomic, assign) NSInteger serial;
@property (nonatomic, assign) NSRAFSUSDKDoActionType type;

- (instancetype)initWithSerial:(NSInteger)serial type:(NSRAFSUSDKDoActionType)type;

@end

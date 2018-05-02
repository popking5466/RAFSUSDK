//
//  RAFSUSDKLockInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 29/01/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RAFSUSDKPublicTypeEnum.h"

@interface RAFSUSDKLockInfo : NSObject

@property (nonatomic, assign) NSRAFSUSDKLockStatusType contactStatus;
@property (nonatomic, assign) NSRAFSUSDKLockStatusType cylinderStatus;
@property (nonatomic, assign) NSInteger serialNumber;//1, 2, 3...

- (instancetype)initWithSerialNumber:(NSInteger)serialNumber contactStatus:(NSRAFSUSDKLockStatusType)contactStatus cylinderStatus:(NSRAFSUSDKLockStatusType)cylinderStatus;

@end

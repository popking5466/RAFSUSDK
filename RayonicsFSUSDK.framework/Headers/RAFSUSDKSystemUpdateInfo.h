//
//  RAFSUSDKSystemUpdateInfo.h
//  BleFSUSDK
//
//  Created by Piccolo on 02/03/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RAFSUSDKSystemUpdateInfo : NSObject

@property (nonatomic, strong) NSString *ipAddress;
@property (nonatomic, strong) NSString *fileName;

- (instancetype)initWithIpAddress:(NSString *)ipAddress fileName:(NSString *)fileName;

@end

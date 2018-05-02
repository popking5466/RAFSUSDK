//
//  RAFSUSDKPublicCommon.h
//  BlueToothSDK
//
//  Created by Piccolo on 2017/6/23.
//  Copyright © 2017年 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RAFSUSDKPublicTypeEnum.h"

@interface RAFSUSDKPublicCommon : NSObject

+ (NSString *)convertDateToString:(NSDate *)date withFormatter:(NSString *)formatterStr;
+ (NSDate *)convertStringToDate:(NSString *)dateStr withFormatter:(NSString *)formatterStr;

+ (NSString *)deviceVersion;
+ (NSString *)identityVersion;

+ (NSRAFSUSDKBleType)fsuTypeFromPeripheralName:(NSString *)name;

@end

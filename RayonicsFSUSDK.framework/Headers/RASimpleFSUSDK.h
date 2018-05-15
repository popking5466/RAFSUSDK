//
//  RASimpleFSUSDK.h
//  test1
//
//  Created by Piccolo on 2017/4/19.
//  Copyright © 2017年 Piccolo. All rights reserved.
//

#import "RAFSUSDKPublicDefine.h"

#import "RAFSUSDKOnlineOpenInfo.h"
#import "RAFSUSDKActiveReportInfo.h"
#import "RAFSUSDKThresholdInfo.h"
#import "RAFSUSDKWarningIntervalInfo.h"


@protocol RASimpleFSUSDKDelegate <RAFSUSDKDefineDelegate>

@optional

- (void)simpleFsuRequestInitSdkResultInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestDestroyResultInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestConnectResultInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestDisconnectResultInfo:(RAFSUSDKResultInfo *)info;

- (void)simpleFsuRequestSetOnlineOpenResultInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestSetFsuTimeResultInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestActiveReport:(RAFSUSDKActiveReportInfo *)fsuActiveReportInfo;
- (void)simpleFsuRequestReadFSUEvent:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestCleanFSUEvent:(RAFSUSDKResultInfo *)info;

- (void)simpleFsuRequestSetFSUDeviceID:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestReadFSUDeviceID:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestGetFSUServiceInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestSetFSUServiceInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestGetFSUWirelessInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestSetFSUWirelessInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestGetPPPAddressInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestReadSimCardInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestReadThresholdInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestSetThresholdInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestSetArmingInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestReadFSUMacAndVerson:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestSetFSUWarningIntervalInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestReadFSUWarningIntervalInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestReadFSUUnvarnishedTransmissionInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestInitFSU:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestRestartFSU:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestActiveReadFSUDetectInfo:(RAFSUSDKResultInfo *)info;
- (void)simpleFsuRequestSetFSUName:(RAFSUSDKResultInfo *)info;

/*内测使用*/
- (void)simpleFsuRequestStr:(NSString *)debugStr;

@end


@interface RASimpleFSUSDK : NSObject

@property (nonatomic,weak) id<RASimpleFSUSDKDelegate> delegate;

/**
 *获取单例对象的方法
 */

+ (instancetype)sharedManager;
+ (void)setDelegate:(id)delegate;

+ (void)initSDK;
+ (CBPeripheralState)currentBleState;
+ (void)connectBlueTooth:(CBPeripheral *)per withSyscode:(NSArray *)syscode withRegcode:(NSArray *)regcode;
+ (void)disConnectBle;
+ (void)initBlueToothManager;
+ (void)initBlueToothManagerWithManager:(CBCentralManager *)manager;

+ (void)setFSUTime;
+ (void)setOnlineOpen:(RAFSUSDKOnlineOpenInfo *)onlineOpenInfo;
+ (void)readFSUEvent;
+ (void)cleanFSUEvent;
+ (void)setFSUDeviceID:(NSString *)deviceID;
+ (void)readFSUDeviceID;
+ (void)readFSUSimCardInfo;
+ (void)readFSUThresholdInfo;
+ (void)setFSUThresholdInfo:(RAFSUSDKThresholdInfo *)thresholdInfo;
+ (void)setFSUArming:(BOOL)arming;
+ (void)readFSUMacAndVersionInfo;

+ (void)setFSUWarningIntervalInfo:(RAFSUSDKWarningIntervalInfo *)warningIntervalInfo;
+ (void)getFSUWarningIntervalInfo;

+ (void)setFSUServiceInfo:(RAFSUSDKServiceInfo *)serviceInfo;
+ (void)getFSUServiceInfo;
+ (void)setFSUWirelessInfo:(RAFSUSDKWirelessInfo *)wirelessInfo;
+ (void)getFSUWirelessInfo;
+ (void)getFSUPPPAddressInfo;

+ (void)sendFSUUnvarnishedTransmissionInfo:(NSString *)infoString;

+ (void)initFSU;
+ (void)restartFSU;
+ (void)readFSUDetectInfo;
+ (void)setFSUName:(NSString *)nameString;

/*内测使用(release版本无效)*/
+ (void)reportStr:(NSString *)str;


@end

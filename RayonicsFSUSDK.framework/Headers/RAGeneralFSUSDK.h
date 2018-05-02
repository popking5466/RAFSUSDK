//
//  RAGeneralFSUSDK.h
//  BleFSUSDK
//
//  Created by Piccolo on 26/02/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import "RAFSUSDKPublicDefine.h"

@protocol RAGeneralFSUSDKDelegate <RAFSUSDKDefineDelegate>

@optional
- (void)generalFsuRequestInitSdkResultInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestDestroyResultInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestConnectResultInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestDisconnectResultInfo:(RAFSUSDKResultInfo *)info;

- (void)generalFsuRequestReadFSUDeviceID:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestGetFSUServiceInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestSetFSUServiceInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestGetFSUWirelessInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestSetFSUWirelessInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestGetPPPAddressInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestSetfsuEthernetParameterInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestGetfsuEthernetParameterInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestGetfsuHeartBeatInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestSetTimeInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestGetTimeInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestSetMotorActionInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestGetMotorActionInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestSetDoParameterInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestGetDoParameterInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestSetDoActionInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestSetSystemUpdateInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestSetRestartInfo:(RAFSUSDKResultInfo *)info;
- (void)generalFsuRequestSetResetInfo:(RAFSUSDKResultInfo *)info;

/*内测使用*/
- (void)generalFsuRequestStr:(NSString *)debugStr;

@end

@interface RAGeneralFSUSDK : NSObject

@property (nonatomic,weak) id<RAGeneralFSUSDKDelegate> delegate;

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

+ (void)readFSUDeviceID;
+ (void)setFSUServiceInfo:(RAFSUSDKServiceInfo *)serviceInfo;
+ (void)getFSUServiceInfo;
+ (void)setFSUWirelessInfo:(RAFSUSDKWirelessInfo *)wirelessInfo;
+ (void)getFSUWirelessInfo;
+ (void)getFSUPPPAddressInfo;
+ (void)setFSUEthernetParameterInfo:(RAFSUSDKEthernetParameterInfo *)ethernetParameterInfo;
+ (void)getFSUEthernetParameterInfo;
+ (void)getFSUHeartbeatPackageInfo;
+ (void)setFSUTime:(NSDate *)date;
+ (void)getFSUTime;
+ (void)setFSUMotorActionInfo:(NSArray<RAFSUSDKMotorActionInfo *>*)motorArray;
+ (void)getFSUMotorActionInfo;
+ (void)setFSUDoParameterInfo:(NSArray<RAFSUSDKDoParameterInfo *>*)doParameterInfoArray;
+ (void)getFSUDoParameterInfo;
+ (void)setFSUDoActionInfo:(NSArray<RAFSUSDKDoActionInfo *>*)doActionInfoArray;
+ (void)setFSUSystemUpdateInfo:(RAFSUSDKSystemUpdateInfo *)systemUpdateInfo;
+ (void)setFSURestartFromType:(NSRAFSUSDKRestartType)restartType;
+ (void)setFSUResetFromType:(NSRAFSUSDKResetType)resetType;

/*内测使用(release版本无效)*/
+ (void)reportStr:(NSString *)str;

@end

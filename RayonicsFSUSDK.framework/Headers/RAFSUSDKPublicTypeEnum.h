//
//  RAFSUSDKPublicTypeEnum.h
//  BleFSUSDK
//
//  Created by Piccolo on 2017/8/14.
//  Copyright © 2017年 Piccolo. All rights reserved.
//

#ifndef FSUPublicTypeEnum_h
#define FSUPublicTypeEnum_h


#endif /* FSUPublicTypeEnum_h */

typedef NS_ENUM(NSUInteger, NSRAFSUSDKBleType){
    NSRAFSUSDKBleTypeUnknow = 0x00,
    NSRAFSUSDKBleTypeSimple = 0x01,
    NSRAFSUSDKBleTypeGeneral = 0x02,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKTransportType){
    
    NSRAFSUSDKTransportTypeUdpMode = 0x01,
    NSRAFSUSDKTransportTypeTcpServer = 0x02,
    NSRAFSUSDKTransportTypeTcpClient = 0x03,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKWirelessType){
    
    NSRAFSUSDKWirelessTypeOff = 0x00,
    NSRAFSUSDKWirelessTypeOn = 0x01,
};

typedef NS_ENUM(int, NSRAFSUSDKReadWriteType){
    
    NSRAFSUSDKReadWriteTypeRead = 0x03,
    NSRAFSUSDKReadWriteTypeWrite = 0x10,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKPPPStatusType){
    
    NSRAFSUSDKPPPStatusTypeNoNeedDial = 0x00,
    NSRAFSUSDKPPPStatusTypePowerOn = 0x01,
    NSRAFSUSDKPPPStatusTypeReset = 0x02,
    NSRAFSUSDKPPPStatusTypeRateProof = 0x03,
    NSRAFSUSDKPPPStatusTypeDial = 0x04,
    NSRAFSUSDKPPPStatusTypeDialSuccessed = 0x05,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKPowerSupplyType){
    
    NSRAFSUSDKPowerSupplyType220VPower = 0x01,
    NSRAFSUSDKPowerSupplyType12VPower = 0x02,
    NSRAFSUSDKPowerSupplyTypeOutterPower = 0x03,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKTriphaseInfoType){
    
    NSRAFSUSDKTriphaseInfoTypeNormal = 0x00,
    NSRAFSUSDKTriphaseInfoTypePhaseAbnormalA = 0x01,
    NSRAFSUSDKTriphaseInfoTypePhaseAbnormalB = 0x02,
    NSRAFSUSDKTriphaseInfoTypePhaseAbnormalC = 0x03,
    NSRAFSUSDKTriphaseInfoTypePhaseAbnormalAB = 0x04,
    NSRAFSUSDKTriphaseInfoTypePhaseAbnormalAC = 0x05,
    NSRAFSUSDKTriphaseInfoTypePhaseAbnormalBC = 0x06,
    NSRAFSUSDKTriphaseInfoTypePhaseAbnormalABC = 0x07,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKMotorActionType){
    
    NSRAFSUSDKMotorActionTypeLock = 0x00,
    NSRAFSUSDKMotorActionTypeUnlock = 0x01,
    NSRAFSUSDKMotorActionTypeNone = 0x02,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKDoParameterType){
    
    NSRAFSUSDKDoParameterTypeConstantOpen = 0x01,
    NSRAFSUSDKDoParameterTypeConstantClose = 0x02,
    NSRAFSUSDKDoParameterTypePulse = 0x03,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKDoActionType){
    
    NSRAFSUSDKDoActionTypeAttracted = 0x01,//开门
    NSRAFSUSDKDoActionTypeRepellent = 0x02,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKRestartType){
    
    NSRAFSUSDKRestartTypeSystem = 0x01,
    NSRAFSUSDKRestartTypeWatchDog = 0x02,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKResetType){
    
    NSRAFSUSDKResetTypeExceptNetworkParameter = 0x00,
    NSRAFSUSDKResetTypeAllParameter = 0x01,
    NSRAFSUSDKResetTypeCardInfo = 0x02,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKLockStatusType){
    
    NSRAFSUSDKLockStatusTypeNull = 0xff,
    NSRAFSUSDKLockStatusTypeLocked = 0x00,
    NSRAFSUSDKLockStatusTypeUnlocked = 0x01,
};

typedef NS_ENUM(NSUInteger, NSRAFSUSDKTesterType){
    
    NSRAFSUSDKTesterTypePrivate = 0x01,//SDK Test private (自己调试用)
    NSRAFSUSDKTesterTypePublic = 0x02,//SDK Test public (客户调试用)
    NSRAFSUSDKTesterTypeNone = 0x03,//SDK Release (SDK集成项目用)
};

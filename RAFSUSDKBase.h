//
//  RAFSUSDKBase.h
//  BleFSUSDK
//
//  Created by Piccolo on 26/02/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import "RAFSUSDKPublicDefine.h"

@protocol RAFSUSDKBaseDelegate <NSObject>

- (void)scanedFSUPeripheral:(CBPeripheral *)peripheral peripheralName:(NSString *)peripheralName RSSI:(NSNumber *)RSSI;
- (void)currentFSURssi:(NSNumber *)rssi;

@end

@interface RAFSUSDKBase : NSObject

@property (nonatomic,weak) id<RAFSUSDKBaseDelegate> delegate;
@property (nonatomic, assign, readonly) BOOL showDebugLog;
@property (nonatomic, assign, readonly) NSRAFSUSDKTesterType testerType;

+ (instancetype)sharedManager;
+ (void)initBlueToothManager;
+ (void)initBlueToothManagerWithManager:(CBCentralManager *)manager;
+ (void)setDelegate:(id)delegate;
+ (void)startScan;
+ (void)stopScan;
+ (void)showDebugLog:(BOOL)showDebugLog;

@end

//
//  RAFSUSDKDefineDelegate.h
//  BleFSUSDK
//
//  Created by Piccolo on 26/02/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@protocol RAFSUSDKDefineDelegate <NSObject>

@optional
    
- (void)scanedFSUPeripheral:(CBPeripheral *)peripheral peripheralName:(NSString *)peripheralName RSSI:(NSNumber *)RSSI;
- (void)currentFSURssi:(NSNumber *)rssi;
    
@end

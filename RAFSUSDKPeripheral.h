//
//  RAFSUSDKPeripheral.h
//  BleFSUSDK
//
//  Created by Piccolo on 08/02/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#import <CoreBluetooth/CoreBluetooth.h>

@interface RAFSUSDKPeripheral : NSObject

@property (nonatomic, strong) CBPeripheral *peripheral;
@property (nonatomic, strong) NSNumber *RSSI;
@property (nonatomic, strong) NSString *peripheralName;
- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral peripheralName:(NSString *)peripheralName RSSI:(NSNumber *)RSSI;
@end

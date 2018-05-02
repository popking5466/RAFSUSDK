//
//  RAFSUSDKPublicDefine.h
//  BleFSUSDK
//
//  Created by Piccolo on 24/02/2018.
//  Copyright © 2018 Piccolo. All rights reserved.
//

#ifndef RAFSUSDKPublicDefine_h
#define RAFSUSDKPublicDefine_h

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "RAFSUSDKBaseDelegate.h"
#import "RAFSUSDKResultInfo.h"

#import "RAFSUSDKServiceInfo.h"
#import "RAFSUSDKWirelessInfo.h"
#import "RAFSUSDKPPPAddressInfo.h"
#import "RAFSUSDKEthernetParameterInfo.h"
#import "RAFSUSDKMotorActionInfo.h"
#import "RAFSUSDKDoParameterInfo.h"
#import "RAFSUSDKDoActionInfo.h"
#import "RAFSUSDKSystemUpdateInfo.h"

#define DEFINE_SYSCODE @[@0x36, @0x36, @0x36, @0x36]
//test@2018-02-08 16:25:46
//#define DEFINE_SYSCODE @[@0xff, @0xff, @0xff, @0xff]
#define DEFINE_REGCODE @[@0x31, @0x31, @0x31, @0x31]
static NSString * const kSimpleFSUGJTopName = @"RAYONICS_GJ";
static NSString * const kSimpleFSUKPITopName = @"KPI";
static NSString * const kGeneralFSUTopName = @"RAYONICS_DH";

/*透传字符串*/
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoAT = @"AT";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATCMEE = @"AT+CMEE=1";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATCGMI = @"AT+CGMI";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATCGMM = @"AT+CGMM";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATCGMR = @"AT+CGMR";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATNBAND = @"AT+NBAND?";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATNCONFIG = @"AT+NCONFIG?";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATCGSN = @"AT+CGSN=1";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATCIMI = @"AT+CIMI";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATCGATTI = @"AT+CGATT=1";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATCGATTII = @"AT+CGATT?";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATCSQ = @"AT+CSQ";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATCOPS = @"AT+COPS?";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATCEREG = @"AT+CEREG?";
static NSString * const kSimpleFSUUnvarnishedTransmissionInfoATNUESTATS = @"AT+NUESTATS";


#endif /* RAFSUSDKPublicDefine_h */

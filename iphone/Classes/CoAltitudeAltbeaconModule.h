/**
 * AltBeacon
 *
 * Created by Marco Ferreira
 * Copyright (c) 2014 Altitude Co. All rights reserved.
 */

#import "TiModule.h"
#import "AltBeacon.h"
//#import "TiProxy.h"
//#import <UIKit/UIKit.h>

@interface CoAltitudeAltbeaconModule : TiModule <AltBeaconDelegate>
//@interface CoAltitudeAltbeaconModule : TiModule
//{
//}

// variables
@property (assign, nonatomic) BOOL didStartAltBOne;
@property (strong, nonatomic) AltBeacon* beaconOne;

// confif stuff
@property (nonatomic, strong) NSString *serviceTypeStr; // my local peer ID
@property (nonatomic, strong) NSString *myID; // my local peer ID
@property (nonatomic, strong) NSMutableArray *foundPeers; // hold the currently found peers

@end

//
//  NMGHardwareInfo.h
//  Namogoo
//
//  Created by Sergiy Kostrykin on 28/11/2022.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NMGHardwareInfo : NSObject


// MARK: - CPU
+ (NSString *)getCurrentAppCpuUsage;

+ (NSString *)getTotalCpuUsage;

+ (int)getNumberOfCores;

// MARK: - Network
+ (BOOL)isWiFiEnabled;

+ (NSDictionary *)wifiDetails;

+ (BOOL)isWiFiConnected;

+ (NSString *)BSSID;

+ (NSString *)SSID;

+ (NSString *)getInternalIPAddress;

+ (BOOL)isConnectedToVPN;

// MARK: - RAM

// Returns used RAM amount, in GBs
+ (double)getUsedRamAmount;

// Returns free RAM amount, in GBs
+ (double)getFreeRamAmount;

// Returns total RAM amount, in GBs
+ (double)getTotalRamAmount;

@end

NS_ASSUME_NONNULL_END

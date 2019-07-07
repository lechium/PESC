//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APConfigManager : NSObject
{
}

+ (id)maxTransactionLengthOfNewReceipt:(id)arg1;	// IMP=0x00000001005cccac
+ (void)updateMaxTransactionLengthOfNewReceipt:(id)arg1 offerId:(id)arg2;	// IMP=0x00000001005ccaac
+ (_Bool)useMatchData:(id)arg1;	// IMP=0x00000001005cc9d4
+ (void)updateUseMatchData:(id)arg1 offerId:(id)arg2;	// IMP=0x00000001005cc70c
+ (_Bool)useQdiaoOnly:(id)arg1;	// IMP=0x00000001005cc634
+ (void)updateUseQdiaoOnly:(id)arg1 offerId:(id)arg2;	// IMP=0x00000001005cc36c
+ (id)WXMpInfo:(id)arg1;	// IMP=0x00000001005cc240
+ (void)updateWXMpInfo:(id)arg1 offerId:(id)arg2;	// IMP=0x00000001005cbf64
+ (id)resultUrl:(id)arg1;	// IMP=0x00000001005cbe70
+ (void)updateResultUrl:(id)arg1 offerId:(id)arg2;	// IMP=0x00000001005cbb94
+ (id)tipsAfterPay:(id)arg1;	// IMP=0x00000001005cba68
+ (void)updateTipsAfterPay:(id)arg1 offerId:(id)arg2;	// IMP=0x00000001005cb78c
+ (id)jumpType;	// IMP=0x00000001005cb700
+ (void)updateJumpType:(id)arg1;	// IMP=0x00000001005cb530
+ (id)appId;	// IMP=0x00000001005cb4c8
+ (void)updateAppId:(id)arg1;	// IMP=0x00000001005cb32c
+ (_Bool)configDelaySwitch;	// IMP=0x00000001005cb2cc
+ (void)updateConfigDelaySwitch:(_Bool)arg1;	// IMP=0x00000001005cb0f0
+ (void)getSwitchOf:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001005cad34
+ (void)updateSwitch:(id)arg1;	// IMP=0x00000001005ca8a0
+ (id)productList;	// IMP=0x00000001005ca7c0
+ (void)updateProductList:(id)arg1;	// IMP=0x00000001005ca590
+ (_Bool)enableNewReceipt;	// IMP=0x00000001005ca504
+ (void)updateEnableNewReceipt:(_Bool)arg1;	// IMP=0x00000001005ca488
+ (id)hbInterval:(id)arg1;	// IMP=0x00000001005ca3e0
+ (void)updateHbInterval:(id)arg1 offerId:(id)arg2;	// IMP=0x00000001005ca084
+ (_Bool)needToUpdateConfig:(id)arg1;	// IMP=0x00000001005c9f64
+ (void)updateConfigInfoSavedTime:(id)arg1;	// IMP=0x00000001005c9be0
+ (long long)preheatTimestamp:(id)arg1;	// IMP=0x00000001005c9b20
+ (void)updatePreheatTimestamp:(long long)arg1 offerId:(id)arg2;	// IMP=0x00000001005c97d0
+ (long long)IAPHeatConfig:(id)arg1;	// IMP=0x00000001005c9710
+ (void)updateIAPPreheatConfig:(long long)arg1 offerId:(id)arg2;	// IMP=0x00000001005c93c0
+ (_Bool)sessionSwitch:(id)arg1;	// IMP=0x00000001005c9300
+ (void)updateSessionSwitch:(_Bool)arg1 offerId:(id)arg2;	// IMP=0x00000001005c8f8c
+ (_Bool)showRiskAlert:(id)arg1;	// IMP=0x00000001005c8ed8
+ (void)updateShowRiskSwitch:(_Bool)arg1 offerId:(id)arg2;	// IMP=0x00000001005c8b54
+ (id)midasUserDefaultsForKey:(id)arg1;	// IMP=0x00000001005c8a94
+ (void)updateMidasUserDefaults:(id)arg1 value:(id)arg2;	// IMP=0x00000001005c8900

@end

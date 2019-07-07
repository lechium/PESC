//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADRewardBasedVideoAdDelegate.h"

@class NSString;

@interface IMSDKExtendAdMobHelper : NSObject <GADRewardBasedVideoAdDelegate>
{
    NSString *_adUnitID;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010093a554
+ (id)sharedInstance;	// IMP=0x000000010093a3a8
@property(retain, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void).cxx_destruct;	// IMP=0x000000010093c364
- (void)rewardBasedVideoAdDidCompletePlaying:(id)arg1;	// IMP=0x000000010093c19c
- (void)rewardBasedVideoAd:(id)arg1 didFailToLoadWithError:(id)arg2;	// IMP=0x000000010093beac
- (void)rewardBasedVideoAdWillLeaveApplication:(id)arg1;	// IMP=0x000000010093bd08
- (void)rewardBasedVideoAd:(id)arg1 didRewardUserWithReward:(id)arg2;	// IMP=0x000000010093b844
- (void)rewardBasedVideoAdDidClose:(id)arg1;	// IMP=0x000000010093b6a0
- (void)rewardBasedVideoAdDidStartPlaying:(id)arg1;	// IMP=0x000000010093b4fc
- (void)rewardBasedVideoAdDidOpen:(id)arg1;	// IMP=0x000000010093b358
- (void)rewardBasedVideoAdDidReceiveAd:(id)arg1;	// IMP=0x000000010093b1b4
- (void)handleShowVideoResult:(struct IMSDKResult)arg1;	// IMP=0x000000010093b0b8
- (void)handleLoadRequestResult:(struct IMSDKResult)arg1;	// IMP=0x000000010093afbc
- (void)loadUserId;	// IMP=0x000000010093ad70
- (void)loadRequestWithUnitId:(id)arg1;	// IMP=0x000000010093a940
- (id)admobDeviceID;	// IMP=0x000000010093a848
- (void)showRewardVideo;	// IMP=0x000000010093a5b8
- (id)mutablecopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010093a5a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010093a57c
- (id)initSingleton;	// IMP=0x000000010093a484

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

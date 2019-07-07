//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdMediationDelegate.h"
#import "GADRewardBasedVideoAdGMSGHandlerDelegate.h"
#import "GADSlotAdEventDelegate.h"
#import "GADSlotAdLoadDelegate.h"
#import "GADSlotAdResponseDelegate.h"
#import "GADSlotDelegate.h"

@class GADBufferedClearcutLogger, GADClearcutLogger, GADInterstitialOwner, GADInterstitialViewController, GADSlot, NSError, NSString;

@interface GADInterstitial : NSObject <GADRewardBasedVideoAdGMSGHandlerDelegate, GADAdMediationDelegate, GADSlotAdEventDelegate, GADSlotAdLoadDelegate, GADSlotDelegate, GADSlotAdResponseDelegate>
{
    NSError *_alreadyUsedError;	// 8 = 0x8
    GADInterstitialOwner *_interstitialOwner;	// 16 = 0x10
    GADClearcutLogger *_logger;	// 24 = 0x18
    GADBufferedClearcutLogger *_bufferedLogger;	// 32 = 0x20
    _Bool _isMediated;	// 40 = 0x28
    _Bool _adUnitExposureBegan;	// 41 = 0x29
    _Bool _hasBeenUsed;	// 42 = 0x2a
    NSString *_adUnitID;	// 48 = 0x30
    id <GADInterstitialDelegate> _delegate;	// 56 = 0x38
    id <GADInAppPurchaseDelegate> _inAppPurchaseDelegate;	// 64 = 0x40
    GADInterstitialViewController *_viewController;	// 72 = 0x48
    GADSlot *_slot;	// 80 = 0x50
}

@property(readonly, nonatomic) GADSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) GADInterstitialViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <GADInAppPurchaseDelegate> inAppPurchaseDelegate; // @synthesize inAppPurchaseDelegate=_inAppPurchaseDelegate;
@property(nonatomic) _Bool hasBeenUsed; // @synthesize hasBeenUsed=_hasBeenUsed;
@property(nonatomic) __weak id <GADInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void).cxx_destruct;	// IMP=0x000000010098d9c4
- (void)setAdUnitID:(id)arg1;	// IMP=0x000000010098d88c
- (id)init;	// IMP=0x000000010098d878
- (id)mediationConnectorForConfiguration:(id)arg1 networkConfiguration:(id)arg2;	// IMP=0x000000010098d7f4
- (void)slot:(id)arg1 willProcessMediatedAdResponse:(id)arg2;	// IMP=0x000000010098d7dc
- (_Bool)slot:(id)arg1 shouldProcessAdResponse:(id)arg2 error:(id *)arg3;	// IMP=0x000000010098d70c
- (_Bool)canPresentFullScreen;	// IMP=0x000000010098d31c
- (_Bool)canFitAdSize:(struct CGSize)arg1 inWindowSize:(struct CGSize)arg2 withThreshold:(double)arg3;	// IMP=0x000000010098d2c4
- (void)presentFromRootViewController:(id)arg1;	// IMP=0x000000010098ce08
- (void)adPresentationDidFail;	// IMP=0x000000010098cb60
@property(readonly, nonatomic) _Bool isReady;
@property(readonly, copy, nonatomic) NSString *adNetworkClassName;
- (void)loadRequest:(id)arg1;	// IMP=0x000000010098c7d0
- (void)loadSlotFromCacheEntry:(id)arg1;	// IMP=0x000000010098c5c0
- (void)createSlot;	// IMP=0x000000010098c2fc
- (void)slotWillLeaveApplication:(id)arg1;	// IMP=0x000000010098c228
- (void)slotDidDismissScreen:(id)arg1;	// IMP=0x000000010098c044
- (void)slotWillDismissScreen:(id)arg1;	// IMP=0x000000010098bf70
- (void)slotWillPresentScreen:(id)arg1;	// IMP=0x000000010098bdc8
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;	// IMP=0x000000010098bc48
- (void)slotFinishedLoadingAdContent:(id)arg1;	// IMP=0x000000010098bb58
- (void)slotDidReceiveAdClick:(id)arg1;	// IMP=0x000000010098baf0
- (_Bool)slot:(id)arg1 shouldLoadRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000010098b9cc
- (_Bool)slotShouldReloadCurrentRequest:(id)arg1;	// IMP=0x000000010098b9c4
- (void)slotDidLoadMRAIDAd:(id)arg1;	// IMP=0x000000010098b984
- (void)setMediated;	// IMP=0x000000010098b904
- (void)cancel;	// IMP=0x000000010098b8ec
- (void)dealloc;	// IMP=0x000000010098b7c8
- (id)initWithAdUnitID:(id)arg1;	// IMP=0x000000010098b6c4
- (void)rootObjectLoggerChanged;	// IMP=0x000000010098b0cc
- (void)interstitialAdIsDismissed;	// IMP=0x000000010098b05c
- (void)interstitialAdIsPresented;	// IMP=0x000000010098afec
- (void)interstitialAdLoadFailedWithError:(id)arg1;	// IMP=0x000000010098aec0
- (void)interstitialAdLoadSucceeded;	// IMP=0x000000010098ae50
- (void)interstitialAdLoadStarted;	// IMP=0x000000010098adf0
- (void)interstitialCreatedSlot:(id)arg1;	// IMP=0x000000010098ac0c
- (void)slot:(id)arg1 didChangeAdMetadata:(id)arg2 withInfo:(id)arg3;	// IMP=0x000000010098b5ec
- (void)rewardBasedVideoAdGMSGHandlerDidReceiveVideoCompleteNotification:(id)arg1;	// IMP=0x000000010098b554
- (void)rewardBasedVideoAdGMSGHandlerDidReceiveStartVideoNotification:(id)arg1;	// IMP=0x000000010098b4bc
- (void)rewardBasedVideoAdGMSGHandler:(id)arg1 didReceiveRewardNotificationWithRewardItem:(id)arg2;	// IMP=0x000000010098b324

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


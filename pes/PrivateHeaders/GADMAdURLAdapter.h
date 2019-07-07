//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADBannerViewDelegate.h"
#import "GADInterstitialAdClickDelegate.h"
#import "GADInterstitialDelegate.h"
#import "GADMAdNetworkAdapter.h"
#import "GADSDKCoreControllerDelegate.h"

@class GADBannerView, GADInterstitial, NSString;

@interface GADMAdURLAdapter : NSObject <GADSDKCoreControllerDelegate, GADBannerViewDelegate, GADInterstitialDelegate, GADInterstitialAdClickDelegate, GADMAdNetworkAdapter>
{
    _Bool _shouldRespondToSDKCore;	// 8 = 0x8
    GADBannerView *_banner;	// 16 = 0x10
    GADInterstitial *_interstitial;	// 24 = 0x18
    id <GADMInternalAdNetworkConnector> _connector;	// 32 = 0x20
    NSString *_requestID;	// 40 = 0x28
}

+ (Class)networkExtrasClass;	// IMP=0x00000001009a124c
+ (id)adapterVersion;	// IMP=0x00000001009a1220
@property(nonatomic) _Bool shouldRespondToSDKCore; // @synthesize shouldRespondToSDKCore=_shouldRespondToSDKCore;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) __weak id <GADMInternalAdNetworkConnector> connector; // @synthesize connector=_connector;
@property(retain, nonatomic) GADInterstitial *interstitial; // @synthesize interstitial=_interstitial;
@property(retain, nonatomic) GADBannerView *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;	// IMP=0x00000001009a29b4
- (void)reportInterstitialLoadFailureWithCode:(long long)arg1 errorMessage:(id)arg2;	// IMP=0x00000001009a27c4
- (void)reportBannerLoadFailureWithCode:(long long)arg1 errorMessage:(id)arg2;	// IMP=0x00000001009a268c
- (void)reportAdLoadFailureWithCode:(long long)arg1 errorMessage:(id)arg2;	// IMP=0x00000001009a25e8
- (void)interstitialDidReceiveAdClick:(id)arg1;	// IMP=0x00000001009a25a0
- (void)interstitialWillLeaveApplication:(id)arg1;	// IMP=0x00000001009a2558
- (void)interstitialDidDismissScreen:(id)arg1;	// IMP=0x00000001009a2510
- (void)interstitialWillDismissScreen:(id)arg1;	// IMP=0x00000001009a24c8
- (void)interstitialWillPresentScreen:(id)arg1;	// IMP=0x00000001009a2480
- (void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2;	// IMP=0x00000001009a2410
- (void)interstitialDidReceiveAd:(id)arg1;	// IMP=0x00000001009a23c8
- (void)adViewWillLeaveApplication:(id)arg1;	// IMP=0x00000001009a2380
- (void)adViewDidDismissScreen:(id)arg1;	// IMP=0x00000001009a2338
- (void)adViewWillDismissScreen:(id)arg1;	// IMP=0x00000001009a22f0
- (void)adViewWillPresentScreen:(id)arg1;	// IMP=0x00000001009a22a8
- (void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;	// IMP=0x00000001009a2238
- (void)adViewDidReceiveAd:(id)arg1;	// IMP=0x00000001009a21bc
- (void)failedJavaScriptFile;	// IMP=0x00000001009a2190
- (void)invalidJavaScriptRequest;	// IMP=0x00000001009a2164
- (void)loadAd:(id)arg1 headers:(id)arg2;	// IMP=0x00000001009a1d5c
- (void)loadAdURLWithParameters:(id)arg1;	// IMP=0x00000001009a1d30
- (long long)requestedAdType;	// IMP=0x00000001009a1cc0
- (id)requestParameters;	// IMP=0x00000001009a1728
- (id)adLoadActionTimeRecorder;	// IMP=0x00000001009a1720
- (void)loadRequest;	// IMP=0x00000001009a16cc
- (void)changeAdSizeTo:(struct GADAdSize)arg1;	// IMP=0x00000001009a1668
- (void)presentInterstitialFromRootViewController:(id)arg1;	// IMP=0x00000001009a15fc
- (_Bool)isBannerAnimationOK:(long long)arg1;	// IMP=0x00000001009a15f4
- (void)stopBeingDelegate;	// IMP=0x00000001009a1594
- (void)getInterstitial;	// IMP=0x00000001009a14cc
- (void)getBannerWithSize:(struct GADAdSize)arg1;	// IMP=0x00000001009a133c
- (id)initWithGADMAdNetworkConnector:(id)arg1;	// IMP=0x00000001009a1278
- (id)init;	// IMP=0x00000001009a1260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

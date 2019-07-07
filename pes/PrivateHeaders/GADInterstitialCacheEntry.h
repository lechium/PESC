//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdMediationDelegate.h"
#import "GADSlotAdLoadDelegate.h"
#import "GADSlotAdResponseDelegate.h"
#import "GADSlotDelegate.h"

@class GADCSITimeRecorder, GADSlot, NSError, NSString;

@interface GADInterstitialCacheEntry : NSObject <GADSlotDelegate, GADAdMediationDelegate, GADSlotAdLoadDelegate, GADSlotAdResponseDelegate>
{
    GADCSITimeRecorder *_timeRecorder;	// 8 = 0x8
    _Bool _loaded;	// 16 = 0x10
    GADSlot *_slot;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

+ (void)sendCSIPingForTimeRecorder:(id)arg1;	// IMP=0x000000010098f9f8
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) GADSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;	// IMP=0x0000000100990588
- (id)mediationConnectorForConfiguration:(id)arg1 networkConfiguration:(id)arg2;	// IMP=0x00000001009904d4
- (void)slot:(id)arg1 willProcessMediatedAdResponse:(id)arg2;	// IMP=0x00000001009904bc
- (_Bool)slot:(id)arg1 shouldProcessAdResponse:(id)arg2 error:(id *)arg3;	// IMP=0x00000001009903ec
- (_Bool)slot:(id)arg1 shouldLoadRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000001009903e4
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;	// IMP=0x0000000100990264
- (void)slotFinishedLoadingAdContent:(id)arg1;	// IMP=0x000000010099017c
- (void)slotDidMoveToPlacement;	// IMP=0x0000000100990088
- (void)dealloc;	// IMP=0x000000010098ff74
- (id)initWithRequest:(id)arg1 adUnitID:(id)arg2;	// IMP=0x000000010098fab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


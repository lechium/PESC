//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@interface GADCSIGMSGHandler : GADGMSGHandler
{
    id <GADCSIGMSGHandlerDelegate> _CSIDelegate;	// 8 = 0x8
}

+ (id)subActionBlockDictionary;	// IMP=0x000000010097bddc
+ (id)actionBlockDictionary;	// IMP=0x000000010097bc78
@property(nonatomic) __weak id <GADCSIGMSGHandlerDelegate> CSIDelegate; // @synthesize CSIDelegate=_CSIDelegate;
- (void).cxx_destruct;	// IMP=0x000000010097c5e8
- (id)CSI;	// IMP=0x000000010097c510
- (void)adView:(id)arg1 didReceiveExtraAction:(id)arg2;	// IMP=0x000000010097c408
- (void)adView:(id)arg1 didReceiveExperimentAction:(id)arg2;	// IMP=0x000000010097c358
- (void)adView:(id)arg1 didReceiveTickAction:(id)arg2;	// IMP=0x000000010097c160
- (void)adView:(id)arg1 didReceiveCSINotification:(id)arg2;	// IMP=0x000000010097c074

@end

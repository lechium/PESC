//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXOMTAEvent.h"

#import "WXOMTAEventProtocol.h"

@class NSString, WXOMTAAppMonitorStat;

@interface WXOMTAMonitorStatEvent : WXOMTAEvent <WXOMTAEventProtocol>
{
    WXOMTAAppMonitorStat *_stat;	// 64 = 0x40
}

@property(retain, nonatomic) WXOMTAAppMonitorStat *stat; // @synthesize stat=_stat;
- (void).cxx_destruct;	// IMP=0x0000000101528ef4
- (id)init;	// IMP=0x0000000101528e68
- (void)encode:(id)arg1;	// IMP=0x00000001015288c4
- (int)getType;	// IMP=0x00000001015288bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


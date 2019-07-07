//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADClearcutCommandExecuting.h"

@class NSString, NSTimer;

@interface GADClearcutTimerCommandExecutor : NSObject <GADClearcutCommandExecuting>
{
    id <GADClearcutCommandExecuting> _executor;	// 8 = 0x8
    double _beaconTimeInterval;	// 16 = 0x10
    NSTimer *_timer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100953218
- (void)sendBeacon;	// IMP=0x00000001009530a4
- (void)asynchronouslyExecuteCommands:(id)arg1;	// IMP=0x000000010095308c
- (_Bool)isLoaded;	// IMP=0x0000000100953074
- (void)dealloc;	// IMP=0x0000000100952fb0
- (id)initWithClearcutCommandExecutor:(id)arg1 timeInterval:(double)arg2;	// IMP=0x0000000100952d68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

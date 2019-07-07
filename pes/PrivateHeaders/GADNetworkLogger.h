//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface GADNetworkLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_logQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001009b6a6c
- (void).cxx_destruct;	// IMP=0x00000001009b7dcc
- (void)logNetworkError:(id)arg1 components:(id)arg2;	// IMP=0x00000001009b7b70
- (void)logResponseBody:(id)arg1 withContent:(_Bool)arg2 components:(id)arg3;	// IMP=0x00000001009b795c
- (void)logResponseHeader:(id)arg1 components:(id)arg2;	// IMP=0x00000001009b7714
- (void)logRequest:(id)arg1 components:(id)arg2 requestOnly:(_Bool)arg3;	// IMP=0x00000001009b7354
- (void)logEvent:(id)arg1 timestamp:(id)arg2 components:(id)arg3 userInfo:(id)arg4;	// IMP=0x00000001009b7074
- (void)logMessage:(id)arg1;	// IMP=0x00000001009b6c68
@property(readonly, getter=isEnabled) _Bool enabled;
- (id)init;	// IMP=0x00000001009b6aec

@end


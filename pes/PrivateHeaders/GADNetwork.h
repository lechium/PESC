//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTelephonyNetworkInfo, NSObject<OS_dispatch_queue>, NSString;

@interface GADNetwork : NSObject
{
    unsigned long long _networkType;	// 8 = 0x8
    unsigned long long _lastKnownNetworkType;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_lockQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_enableCheckingQueue;	// 32 = 0x20
    struct __SCNetworkReachability *_networkReachabilityRef;	// 40 = 0x28
    id <NSObject> _radioAccessTechnologyChangeObserver;	// 48 = 0x30
    CTTelephonyNetworkInfo *_telephonyNetworkInfo;	// 56 = 0x38
    NSString *_radioAccessTechnology;	// 64 = 0x40
    NSString *_lastKnownRadioAccessTechnology;	// 72 = 0x48
    NSString *_userAgentString;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x00000001009bf1d0
- (void).cxx_destruct;	// IMP=0x00000001009c0138
@property(copy) NSString *userAgentString;
- (void)setRadioAccessTechnology:(id)arg1;	// IMP=0x00000001009bfd14
- (void)setNetworkTypeFromFlags:(unsigned int)arg1;	// IMP=0x00000001009bfcf4
- (void)setNetworkType:(unsigned long long)arg1;	// IMP=0x00000001009bfc34
- (id)requestDictionary;	// IMP=0x00000001009bf8a4
- (void)enableRadioAccessTechnologyChecking;	// IMP=0x00000001009bf354
- (void)dealloc;	// IMP=0x00000001009bf2f0
- (id)init;	// IMP=0x00000001009bf268

@end


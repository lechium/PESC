//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GADInjectedSettings : NSObject
{
    NSMutableDictionary *_settings;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_lockQueue;	// 16 = 0x10
    id _foregroundObserver;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001009f50d0
- (void).cxx_destruct;	// IMP=0x00000001009f5e08
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000001009f5c20
- (void)refresh;	// IMP=0x00000001009f5534
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000001009f5418
- (void)dealloc;	// IMP=0x00000001009f537c
- (id)init;	// IMP=0x00000001009f5184

@end


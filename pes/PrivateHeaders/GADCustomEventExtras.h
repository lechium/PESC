//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdNetworkExtras.h"

@class NSMutableDictionary, NSString;

@interface GADCustomEventExtras : NSObject <GADAdNetworkExtras>
{
    NSMutableDictionary *_extras;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100999308
- (id)allExtras;	// IMP=0x00000001009992f8
- (void)removeAllExtras;	// IMP=0x00000001009992e0
- (id)extrasForLabel:(id)arg1;	// IMP=0x00000001009992c8
- (void)setExtras:(id)arg1 forLabel:(id)arg2;	// IMP=0x00000001009991f4
- (id)init;	// IMP=0x0000000100999174

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKAccessTokenCaching.h"

@class FBSDKKeychainStore, NSString;

@interface FBSDKAccessTokenCacheV3_21 : NSObject <FBSDKAccessTokenCaching>
{
    FBSDKKeychainStore *_keychainStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001006c72dc
- (void)cacheAccessToken:(id)arg1;	// IMP=0x00000001006c721c
- (void)clearCache;	// IMP=0x00000001006c71b8
- (id)fetchAccessToken;	// IMP=0x00000001006c700c
- (id)init;	// IMP=0x00000001006c6ef8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


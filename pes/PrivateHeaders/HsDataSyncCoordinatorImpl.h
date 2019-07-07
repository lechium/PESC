//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsDataSyncCoordinator.h"

@class NSString;

@interface HsDataSyncCoordinatorImpl : NSObject <HsDataSyncCoordinator>
{
    id <HsKeyValueStorage> _storage;	// 8 = 0x8
    id <HsDataSyncCompletionListener> _dataSyncCompletionListener;	// 16 = 0x10
}

@property(retain, nonatomic) id <HsDataSyncCompletionListener> dataSyncCompletionListener; // @synthesize dataSyncCompletionListener=_dataSyncCompletionListener;
@property(retain, nonatomic) id <HsKeyValueStorage> storage; // @synthesize storage=_storage;
- (void).cxx_destruct;	// IMP=0x00000001013be410
- (void)switchCompletedForUser:(id)arg1;	// IMP=0x00000001013be190
- (void)switchRequiredForUser:(id)arg1;	// IMP=0x00000001013be094
- (void)firstDeviceSyncComplete;	// IMP=0x00000001013bdf30
- (_Bool)isFirstDeviceSyncComplete;	// IMP=0x00000001013bdeb4
- (_Bool)canSyncSessionPropertiesForUser:(id)arg1;	// IMP=0x00000001013bdea8
- (_Bool)canSyncUserPropertiesForUser:(id)arg1;	// IMP=0x00000001013bde9c
- (_Bool)canSyncPropertiesForUser:(id)arg1;	// IMP=0x00000001013bdd30
- (id)initWithKVStorage:(id)arg1 andDataSyncListener:(id)arg2;	// IMP=0x00000001013bdc88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

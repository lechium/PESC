//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsNetwork.h"

@class NSString;

@interface HsFailedAPICallNetwork : NSObject <HsNetwork>
{
    id <HsNetwork> _network;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000101383278
- (id)makeRequest:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013830ac
- (id)initWithNetwork:(id)arg1;	// IMP=0x000000010138302c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

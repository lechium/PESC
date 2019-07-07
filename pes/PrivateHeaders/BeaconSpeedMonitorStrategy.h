//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeaconEncodeObject.h"

@class NSArray;

@interface BeaconSpeedMonitorStrategy : BeaconEncodeObject
{
    NSArray *ipList;	// 8 = 0x8
    NSArray *domainList;	// 16 = 0x10
    NSArray *hostList;	// 24 = 0x18
}

@property(retain, nonatomic) NSArray *hostList; // @synthesize hostList;
@property(retain, nonatomic) NSArray *domainList; // @synthesize domainList;
@property(retain, nonatomic) NSArray *ipList; // @synthesize ipList;
- (void).cxx_destruct;	// IMP=0x00000001007c5544
- (void)dealloc;	// IMP=0x00000001007c53ec
- (id)initWithWUpSMSModel:(id)arg1;	// IMP=0x00000001007c524c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001007c500c

@end


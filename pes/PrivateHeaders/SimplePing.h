//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface SimplePing : NSObject
{
    _Bool _nextSequenceNumberHasWrapped;	// 8 = 0x8
    unsigned short _identifier;	// 10 = 0xa
    unsigned short _nextSequenceNumber;	// 12 = 0xc
    NSString *_hostName;	// 16 = 0x10
    id <SimplePingDelegate> _delegate;	// 24 = 0x18
    long long _addressStyle;	// 32 = 0x20
    NSData *_hostAddress;	// 40 = 0x28
    struct __CFHost *_host;	// 48 = 0x30
    struct __CFSocket *_socket;	// 56 = 0x38
}

+ (unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)arg1;	// IMP=0x0000000100020a48
@property(retain, nonatomic) struct __CFSocket *socket; // @synthesize socket=_socket;
@property(retain, nonatomic) struct __CFHost *host; // @synthesize host=_host;
@property(nonatomic) _Bool nextSequenceNumberHasWrapped; // @synthesize nextSequenceNumberHasWrapped=_nextSequenceNumberHasWrapped;
@property(nonatomic) unsigned short nextSequenceNumber; // @synthesize nextSequenceNumber=_nextSequenceNumber;
@property(readonly, nonatomic) unsigned short identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSData *hostAddress; // @synthesize hostAddress=_hostAddress;
@property(nonatomic) long long addressStyle; // @synthesize addressStyle=_addressStyle;
@property(nonatomic) __weak id <SimplePingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void).cxx_destruct;	// IMP=0x0000000100021dd4
- (void)stop;	// IMP=0x0000000100021c84
- (void)stopSocket;	// IMP=0x0000000100021c28
- (void)stopHostResolution;	// IMP=0x0000000100021b98
- (void)start;	// IMP=0x00000001000218b0
- (void)hostResolutionDone;	// IMP=0x00000001000215d0
- (void)startWithHostAddress;	// IMP=0x0000000100021124
- (void)readData;	// IMP=0x0000000100020ea8
- (_Bool)validatePingResponsePacket:(id)arg1 sequenceNumber:(unsigned short *)arg2;	// IMP=0x0000000100020dd8
- (_Bool)validatePing6ResponsePacket:(id)arg1 sequenceNumber:(unsigned short *)arg2;	// IMP=0x0000000100020cdc
- (_Bool)validatePing4ResponsePacket:(id)arg1 sequenceNumber:(unsigned short *)arg2;	// IMP=0x0000000100020b6c
- (_Bool)validateSequenceNumber:(unsigned short)arg1;	// IMP=0x0000000100020b08
- (void)sendPingWithData:(id)arg1;	// IMP=0x00000001000204a0
- (id)pingPacketWithType:(unsigned char)arg1 payload:(id)arg2 requiresChecksum:(_Bool)arg3;	// IMP=0x0000000100020280
- (void)didFailWithHostStreamError:(CDStruct_87dc826d)arg1;	// IMP=0x0000000100020114
- (void)didFailWithError:(id)arg1;	// IMP=0x0000000100020014
@property(readonly, nonatomic) unsigned char hostAddressFamily;
- (void)dealloc;	// IMP=0x000000010001fe2c
- (id)initWithHostName:(id)arg1;	// IMP=0x000000010001fd60

@end


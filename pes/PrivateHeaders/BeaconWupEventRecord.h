//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeaconJceObjectV2.h"

@class NSString;

@interface BeaconWupEventRecord : BeaconJceObjectV2
{
    _Bool _jcev2_p_3_r_eventResult;	// 8 = 0x8
    int _jcev2_p_8_r_eventType;	// 12 = 0xc
    NSString *_jcev2_p_0_o_apn;	// 16 = 0x10
    NSString *_jcev2_p_1_o_srcIp;	// 24 = 0x18
    NSString *_jcev2_p_2_o_eventName;	// 32 = 0x20
    long long _jcev2_p_4_r_packageSize;	// 40 = 0x28
    long long _jcev2_p_5_r_cosumeTime;	// 48 = 0x30
    NSString *_jcev2_p_6_o_eventValue;	// 56 = 0x38
    long long _jcev2_p_7_r_eventTime;	// 64 = 0x40
}

+ (id)jceType;	// IMP=0x00000001007ab490
@property(nonatomic, getter=jce_eventType, setter=setJce_eventType:) int jcev2_p_8_r_eventType; // @synthesize jcev2_p_8_r_eventType=_jcev2_p_8_r_eventType;
@property(nonatomic, getter=jce_eventTime, setter=setJce_eventTime:) long long jcev2_p_7_r_eventTime; // @synthesize jcev2_p_7_r_eventTime=_jcev2_p_7_r_eventTime;
@property(retain, nonatomic, getter=jce_eventValue, setter=setJce_eventValue:) NSString *jcev2_p_6_o_eventValue; // @synthesize jcev2_p_6_o_eventValue=_jcev2_p_6_o_eventValue;
@property(nonatomic, getter=jce_cosumeTime, setter=setJce_cosumeTime:) long long jcev2_p_5_r_cosumeTime; // @synthesize jcev2_p_5_r_cosumeTime=_jcev2_p_5_r_cosumeTime;
@property(nonatomic, getter=jce_packageSize, setter=setJce_packageSize:) long long jcev2_p_4_r_packageSize; // @synthesize jcev2_p_4_r_packageSize=_jcev2_p_4_r_packageSize;
@property(nonatomic, getter=jce_eventResult, setter=setJce_eventResult:) _Bool jcev2_p_3_r_eventResult; // @synthesize jcev2_p_3_r_eventResult=_jcev2_p_3_r_eventResult;
@property(retain, nonatomic, getter=jce_eventName, setter=setJce_eventName:) NSString *jcev2_p_2_o_eventName; // @synthesize jcev2_p_2_o_eventName=_jcev2_p_2_o_eventName;
@property(retain, nonatomic, getter=jce_srcIp, setter=setJce_srcIp:) NSString *jcev2_p_1_o_srcIp; // @synthesize jcev2_p_1_o_srcIp=_jcev2_p_1_o_srcIp;
@property(retain, nonatomic, getter=jce_apn, setter=setJce_apn:) NSString *jcev2_p_0_o_apn; // @synthesize jcev2_p_0_o_apn=_jcev2_p_0_o_apn;
- (void).cxx_destruct;	// IMP=0x00000001007ab67c
- (id)init;	// IMP=0x00000001007ab3f0

@end

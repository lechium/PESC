//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XGJceObjectV2.h"

@class NSString;

@interface XGTpnsTokenAccountReq : XGJceObjectV2
{
    unsigned int jcev2_p_0_r_accessId;	// 8 = 0x8
    unsigned int jcev2_p_4_o_accountType;	// 12 = 0xc
    int jcev2_p_5_r_flag;	// 16 = 0x10
    NSString *jcev2_p_1_r_token;	// 24 = 0x18
    long long jcev2_p_2_o_guid;	// 32 = 0x20
    NSString *jcev2_p_3_r_account;	// 40 = 0x28
}

+ (id)jceType;	// IMP=0x00000001014db324
+ (void)initialize;	// IMP=0x00000001014db250
@property(nonatomic, getter=jce_flag, setter=setJce_flag:) int jcev2_p_5_r_flag; // @synthesize jcev2_p_5_r_flag;
@property(nonatomic, getter=jce_accountType, setter=setJce_accountType:) unsigned int jcev2_p_4_o_accountType; // @synthesize jcev2_p_4_o_accountType;
@property(retain, nonatomic, getter=jce_account, setter=setJce_account:) NSString *jcev2_p_3_r_account; // @synthesize jcev2_p_3_r_account;
@property(nonatomic, getter=jce_guid, setter=setJce_guid:) long long jcev2_p_2_o_guid; // @synthesize jcev2_p_2_o_guid;
@property(retain, nonatomic, getter=jce_token, setter=setJce_token:) NSString *jcev2_p_1_r_token; // @synthesize jcev2_p_1_r_token;
@property(nonatomic, getter=jce_accessId, setter=setJce_accessId:) unsigned int jcev2_p_0_r_accessId; // @synthesize jcev2_p_0_r_accessId;
- (void).cxx_destruct;	// IMP=0x00000001014db418
- (id)init;	// IMP=0x00000001014db2ac

@end

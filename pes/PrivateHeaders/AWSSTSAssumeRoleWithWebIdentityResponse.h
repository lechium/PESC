//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSSTSAssumedRoleUser, AWSSTSCredentials, NSNumber, NSString;

@interface AWSSTSAssumeRoleWithWebIdentityResponse : AWSModel
{
    AWSSTSAssumedRoleUser *_assumedRoleUser;	// 8 = 0x8
    NSString *_audience;	// 16 = 0x10
    AWSSTSCredentials *_credentials;	// 24 = 0x18
    NSNumber *_packedPolicySize;	// 32 = 0x20
    NSString *_provider;	// 40 = 0x28
    NSString *_subjectFromWebIdentityToken;	// 48 = 0x30
}

+ (id)credentialsJSONTransformer;	// IMP=0x0000000100bdd1cc
+ (id)assumedRoleUserJSONTransformer;	// IMP=0x0000000100bdd188
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bdd094
@property(retain, nonatomic) NSString *subjectFromWebIdentityToken; // @synthesize subjectFromWebIdentityToken=_subjectFromWebIdentityToken;
@property(retain, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSNumber *packedPolicySize; // @synthesize packedPolicySize=_packedPolicySize;
@property(retain, nonatomic) AWSSTSCredentials *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) NSString *audience; // @synthesize audience=_audience;
@property(retain, nonatomic) AWSSTSAssumedRoleUser *assumedRoleUser; // @synthesize assumedRoleUser=_assumedRoleUser;
- (void).cxx_destruct;	// IMP=0x0000000100bdd2e8

@end


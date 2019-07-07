//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSCognitoCredentialsProviderHelper.h"

@class NSDictionary;

@interface GGAWSDeveloperAuthenticatedIdentityProvider : AWSCognitoCredentialsProviderHelper
{
    NSDictionary *_accountInfo;	// 8 = 0x8
    id _mIdentityId;	// 16 = 0x10
    id _mToken;	// 24 = 0x18
}

+ (id)instance;	// IMP=0x0000000100c2c128
@property(retain, nonatomic) id mToken; // @synthesize mToken=_mToken;
@property(retain, nonatomic) id mIdentityId; // @synthesize mIdentityId=_mIdentityId;
@property(copy, nonatomic) NSDictionary *accountInfo; // @synthesize accountInfo=_accountInfo;
- (void).cxx_destruct;	// IMP=0x0000000100c2ca30
- (id)logins;	// IMP=0x0000000100c2c97c
- (id)token;	// IMP=0x0000000100c2c804
- (id)getProviderName;	// IMP=0x0000000100c2c7a0
- (void)requestAuthenticationData;	// IMP=0x0000000100c2c1e0

@end


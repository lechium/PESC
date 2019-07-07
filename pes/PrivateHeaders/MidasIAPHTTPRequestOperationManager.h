//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class MidasIAPHTTPRequestSerializer<MidasIAPURLRequestSerialization>, MidasIAPHTTPResponseSerializer<MidasIAPURLResponseSerialization>, MidasIAPSecurityPolicy, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOperationQueue, NSURL, NSURLCredential;

@interface MidasIAPHTTPRequestOperationManager : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _shouldUseCredentialStorage;	// 8 = 0x8
    NSURL *_baseURL;	// 16 = 0x10
    MidasIAPHTTPRequestSerializer<MidasIAPURLRequestSerialization> *_requestSerializer;	// 24 = 0x18
    MidasIAPHTTPResponseSerializer<MidasIAPURLResponseSerialization> *_responseSerializer;	// 32 = 0x20
    NSOperationQueue *_operationQueue;	// 40 = 0x28
    NSURLCredential *_credential;	// 48 = 0x30
    MidasIAPSecurityPolicy *_securityPolicy;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_completionQueue;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_completionGroup;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001005669c0
+ (id)manager;	// IMP=0x00000001005660fc
@property(retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) MidasIAPSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(nonatomic) _Bool shouldUseCredentialStorage; // @synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) MidasIAPHTTPResponseSerializer<MidasIAPURLResponseSerialization> *responseSerializer; // @synthesize responseSerializer=_responseSerializer;
@property(retain, nonatomic) MidasIAPHTTPRequestSerializer<MidasIAPURLRequestSerialization> *requestSerializer; // @synthesize requestSerializer=_requestSerializer;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;	// IMP=0x0000000100567040
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100566da0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100566bf8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001005669c8
- (id)description;	// IMP=0x00000001005668c8
- (id)HTTPRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x00000001005666c8
- (id)HTTPRequestOperationWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x00000001005663bc
- (id)initWithBaseURL:(id)arg1;	// IMP=0x0000000100566138
- (id)init;	// IMP=0x0000000100566128

@end

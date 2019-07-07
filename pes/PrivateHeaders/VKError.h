//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

@class NSDictionary, NSError, NSString, VKRequest;

@interface VKError : VKObject
{
    NSError *_httpError;	// 8 = 0x8
    VKError *_apiError;	// 16 = 0x10
    VKRequest *_request;	// 24 = 0x18
    long long _errorCode;	// 32 = 0x20
    NSString *_errorMessage;	// 40 = 0x28
    NSString *_errorReason;	// 48 = 0x30
    NSString *_errorText;	// 56 = 0x38
    NSDictionary *_requestParams;	// 64 = 0x40
    NSString *_captchaSid;	// 72 = 0x48
    NSString *_captchaImg;	// 80 = 0x50
    NSString *_redirectUri;	// 88 = 0x58
    id _json;	// 96 = 0x60
}

+ (id)errorWithQuery:(id)arg1;	// IMP=0x0000000100b5d81c
+ (id)errorWithJson:(id)arg1;	// IMP=0x0000000100b5d558
+ (id)errorWithCode:(long long)arg1;	// IMP=0x0000000100b5d510
@property(retain, nonatomic) id json; // @synthesize json=_json;
@property(retain, nonatomic) NSString *redirectUri; // @synthesize redirectUri=_redirectUri;
@property(retain, nonatomic) NSString *captchaImg; // @synthesize captchaImg=_captchaImg;
@property(retain, nonatomic) NSString *captchaSid; // @synthesize captchaSid=_captchaSid;
@property(retain, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
@property(retain, nonatomic) NSString *errorText; // @synthesize errorText=_errorText;
@property(retain, nonatomic) NSString *errorReason; // @synthesize errorReason=_errorReason;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) VKRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) VKError *apiError; // @synthesize apiError=_apiError;
@property(retain, nonatomic) NSError *httpError; // @synthesize httpError=_httpError;
- (void).cxx_destruct;	// IMP=0x0000000100b5de88
- (id)description;	// IMP=0x0000000100b5da90
- (void)answerCaptcha:(id)arg1;	// IMP=0x0000000100b5d934
- (void)notifyAuthorizationFailed;	// IMP=0x0000000100b6fcc4
- (void)notifyCaptchaRequired;	// IMP=0x0000000100b6fc4c

@end

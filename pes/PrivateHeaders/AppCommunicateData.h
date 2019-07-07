//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSString;

@interface AppCommunicateData : NSObject
{
    unsigned long long _command;	// 8 = 0x8
    NSMutableDictionary *_dictionaryData;	// 16 = 0x10
    NSData *_fileData;	// 24 = 0x18
    _Bool _returnFromApp;	// 32 = 0x20
    int _result;	// 36 = 0x24
    int _scene;	// 40 = 0x28
    NSString *_conversationAccount;	// 48 = 0x30
    NSString *_openID;	// 56 = 0x38
    NSString *_sdkVer;	// 64 = 0x40
    NSString *_lang;	// 72 = 0x48
    NSString *_country;	// 80 = 0x50
}

@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(retain, nonatomic) NSString *sdkVer; // @synthesize sdkVer=_sdkVer;
@property(retain, nonatomic) NSString *openID; // @synthesize openID=_openID;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) _Bool returnFromApp; // @synthesize returnFromApp=_returnFromApp;
@property(retain, nonatomic) NSString *conversationAccount; // @synthesize conversationAccount=_conversationAccount;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
- (_Bool)RespToData:(id)arg1;	// IMP=0x000000010150f33c
- (_Bool)ReqToData:(id)arg1 withMediaInternalMessage:(id)arg2;	// IMP=0x000000010150ef28
- (_Bool)ReqToData:(id)arg1;	// IMP=0x000000010150ef18
- (id)DataToResp;	// IMP=0x000000010150ed14
- (id)DataToReq;	// IMP=0x000000010150eae0
- (_Bool)MakeMediaInternalMessage:(id)arg1;	// IMP=0x000000010150e610
- (id)mediaInternalMessage;	// IMP=0x000000010150dd9c
- (_Bool)MakeMediaMessage:(id)arg1;	// IMP=0x000000010150d7fc
- (_Bool)MakeLinkObject:(id)arg1;	// IMP=0x000000010150cc00
- (id)mediaMessage;	// IMP=0x000000010150c4b8
- (_Bool)MakeTextMessage:(id)arg1;	// IMP=0x000000010150c42c
- (id)textMessage;	// IMP=0x000000010150c398
- (_Bool)MakeAuthResp:(id)arg1;	// IMP=0x000000010150c2e4
- (id)authResp;	// IMP=0x000000010150c200
- (_Bool)MakeAuthRequest:(id)arg1;	// IMP=0x000000010150c008
- (id)authRequest;	// IMP=0x000000010150bec0
- (_Bool)MakeCommand:(unsigned long long)arg1;	// IMP=0x000000010150bea0
- (void)initCommonField:(unsigned long long)arg1;	// IMP=0x000000010150bd3c
- (unsigned long long)command;	// IMP=0x000000010150bcec
- (id)propertList;	// IMP=0x000000010150bcdc
- (id)initWithPropertList:(id)arg1;	// IMP=0x000000010150ba9c
- (void)dealloc;	// IMP=0x000000010150b9c0
- (id)init;	// IMP=0x000000010150b8fc

@end

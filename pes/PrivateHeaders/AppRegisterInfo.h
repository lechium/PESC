//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface AppRegisterInfo : NSObject <NSCoding>
{
    _Bool needUpdateInfo;	// 8 = 0x8
    _Bool needUpdateIcon;	// 9 = 0x9
    _Bool needUpdateWatermark;	// 10 = 0xa
    _Bool appAddedByUser;	// 11 = 0xb
    _Bool appCanShowNew;	// 12 = 0xc
    _Bool isNewApp;	// 13 = 0xd
    unsigned int lastUpdateInfoTime;	// 16 = 0x10
    unsigned int lastUpdateWatermarkTime;	// 20 = 0x14
    unsigned int lastUpdateIconTime;	// 24 = 0x18
    unsigned int appInfoFlag;	// 28 = 0x1c
    unsigned int appUpdateVersion;	// 32 = 0x20
    unsigned int nextUpdateInfoTime;	// 36 = 0x24
    unsigned int rankWeight;	// 40 = 0x28
    unsigned long long appInfoVer;	// 48 = 0x30
    NSString *appName;	// 56 = 0x38
    NSString *appName4ZhTw;	// 64 = 0x40
    NSString *appName4EnUs;	// 72 = 0x48
    NSString *appID;	// 80 = 0x50
    NSString *appIdentifier;	// 88 = 0x58
    NSString *appDescription;	// 96 = 0x60
    NSString *appDescription4ZhTw;	// 104 = 0x68
    NSString *appDescription4EnUs;	// 112 = 0x70
    NSString *appInstallUrl;	// 120 = 0x78
    NSString *appIconUrl;	// 128 = 0x80
    NSString *appWatermarkUrl;	// 136 = 0x88
    NSString *appTypeList;	// 144 = 0x90
    NSString *appDevInfo;	// 152 = 0x98
    NSString *appDownloadUrl;	// 160 = 0xa0
    NSString *appDownloadUrlMD5;	// 168 = 0xa8
}

@property(nonatomic) unsigned int rankWeight; // @synthesize rankWeight;
@property(nonatomic) unsigned int nextUpdateInfoTime; // @synthesize nextUpdateInfoTime;
@property(retain, nonatomic) NSString *appDownloadUrlMD5; // @synthesize appDownloadUrlMD5;
@property(retain, nonatomic) NSString *appDownloadUrl; // @synthesize appDownloadUrl;
@property(nonatomic) _Bool isNewApp; // @synthesize isNewApp;
@property(nonatomic) _Bool appCanShowNew; // @synthesize appCanShowNew;
@property(nonatomic) unsigned int appUpdateVersion; // @synthesize appUpdateVersion;
@property(nonatomic) unsigned int appInfoFlag; // @synthesize appInfoFlag;
@property(retain, nonatomic) NSString *appDevInfo; // @synthesize appDevInfo;
@property(retain, nonatomic) NSString *appTypeList; // @synthesize appTypeList;
@property(nonatomic) unsigned int lastUpdateIconTime; // @synthesize lastUpdateIconTime;
@property(nonatomic) unsigned int lastUpdateWatermarkTime; // @synthesize lastUpdateWatermarkTime;
@property(nonatomic) unsigned int lastUpdateInfoTime; // @synthesize lastUpdateInfoTime;
@property(retain, nonatomic) NSString *appWatermarkUrl; // @synthesize appWatermarkUrl;
@property(retain, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl;
@property(retain, nonatomic) NSString *appInstallUrl; // @synthesize appInstallUrl;
@property(retain, nonatomic) NSString *appDescription4EnUs; // @synthesize appDescription4EnUs;
@property(retain, nonatomic) NSString *appDescription4ZhTw; // @synthesize appDescription4ZhTw;
@property(retain, nonatomic) NSString *appDescription; // @synthesize appDescription;
@property(nonatomic) _Bool appAddedByUser; // @synthesize appAddedByUser;
@property(nonatomic) _Bool needUpdateWatermark; // @synthesize needUpdateWatermark;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(retain, nonatomic) NSString *appName4EnUs; // @synthesize appName4EnUs;
@property(retain, nonatomic) NSString *appName4ZhTw; // @synthesize appName4ZhTw;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
@property(nonatomic) _Bool needUpdateIcon; // @synthesize needUpdateIcon;
@property(nonatomic) _Bool needUpdateInfo; // @synthesize needUpdateInfo;
@property(nonatomic) unsigned long long appInfoVer; // @synthesize appInfoVer;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010150a8bc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010150a4f0
- (id)description;	// IMP=0x000000010150a49c
- (void)dealloc;	// IMP=0x000000010150a324
- (id)init;	// IMP=0x000000010150a198

@end


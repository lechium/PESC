//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_semaphore>, NSString;

@interface TApmApiSingleInstance : NSObject
{
    _Bool _isInitContext;	// 8 = 0x8
    const char *_userID;	// 16 = 0x10
    unsigned long long _currenLevelState;	// 24 = 0x18
    unsigned long long _currentTagState;	// 32 = 0x20
    const char *_sceneName;	// 40 = 0x28
    struct MsgQueue *_distanceMsgQueue;	// 48 = 0x30
    struct MsgQueue *_latencyMsgQueue;	// 56 = 0x38
    struct MsgQueue *_eventMsgQueue;	// 64 = 0x40
    struct MsgQueue *_networkStatMsgQueue;	// 72 = 0x48
    struct MsgQueue *_levelMsgQueue;	// 80 = 0x50
    struct MsgQueue *_frameMsgQueue;	// 88 = 0x58
    struct MsgQueue *_uploadCacheFileMsgQueue;	// 96 = 0x60
    struct MsgQueue *_cacheFileMsgQueue;	// 104 = 0x68
    struct MsgQueue *_appStateMsgQueue;	// 112 = 0x70
    struct MsgQueue *_qualityMsgQueue;	// 120 = 0x78
    _Bool _isWriteUserIDToCache;	// 128 = 0x80
    _Bool _isWriteVersionToCache;	// 129 = 0x81
    _Bool _isWriteLocalToCache;	// 130 = 0x82
    _Bool _isWriteIPCUUID;	// 131 = 0x83
    NSObject<OS_dispatch_semaphore> *_markLevelsemaphore;	// 136 = 0x88
    NSObject<OS_dispatch_semaphore> *_beginUploadSemaphore;	// 144 = 0x90
    id _enterBkgroundObserver;	// 152 = 0x98
    id _enterForegroundObserver;	// 160 = 0xa0
    unsigned long long _appState;	// 168 = 0xa8
    int _currentQuality;	// 176 = 0xb0
    _Bool _isSetQuality;	// 180 = 0xb4
    struct StreamEventAuditMgr *_auditMgrPtr;	// 184 = 0xb8
    struct StreamEventHandler *_sStreamEventHandlerPtr;	// 192 = 0xc0
    struct StreamEventCommitter *_sStreamEventComitterPtr;	// 200 = 0xc8
    long long _tLauchTime;	// 208 = 0xd0
    int _stepId;	// 216 = 0xd8
    struct FrameStateJudger *_sFrameStateJudgerPtr;	// 224 = 0xe0
    struct SDKStack<_tagElement> *_tagStack;	// 232 = 0xe8
    struct _MsgQueueBody _frameQueueBody;	// 240 = 0xf0
    struct MsgQueue<ExcludeInfo> *_sExcludeRequestQueuePtr;	// 296 = 0x128
    _Bool _enableCollectFromCDN;	// 304 = 0x130
    _Bool _enablePostAppState;	// 305 = 0x131
    _Bool _enableStreamEventFrameState;	// 306 = 0x132
    unsigned int _frequency;	// 308 = 0x134
    NSMutableArray *_collectionObjs;	// 312 = 0x138
    NSString *_appid;	// 320 = 0x140
    NSString *_tagName;	// 328 = 0x148
    NSString *_ipcUUID;	// 336 = 0x150
}

+ (id)sharedInstance;	// IMP=0x000000010113c32c
@property(copy, nonatomic) NSString *ipcUUID; // @synthesize ipcUUID=_ipcUUID;
@property(nonatomic) unsigned int frequency; // @synthesize frequency=_frequency;
@property(nonatomic) _Bool enableStreamEventFrameState; // @synthesize enableStreamEventFrameState=_enableStreamEventFrameState;
@property(nonatomic) _Bool enablePostAppState; // @synthesize enablePostAppState=_enablePostAppState;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSMutableArray *collectionObjs; // @synthesize collectionObjs=_collectionObjs;
@property(nonatomic) _Bool enableCollectFromCDN; // @synthesize enableCollectFromCDN=_enableCollectFromCDN;
- (void).cxx_destruct;	// IMP=0x0000000101143e28
- (void)dealloc;	// IMP=0x0000000101143a58
- (void)getCurrentAppInfo;	// IMP=0x0000000101143484
- (int)getOptsUserDefault;	// IMP=0x00000001011433c8
- (_Bool)getCDNFromUserDefault;	// IMP=0x0000000101142f40
- (_Bool)getEnableStreamEventFrameStateFromUserDefault;	// IMP=0x0000000101142c88
- (_Bool)getEnableAppStateFromUserDefault;	// IMP=0x0000000101142b7c
- (unsigned int)getFrequencyFromUserDefault;	// IMP=0x0000000101142ac0
- (void)removeAllResouceAndOjbects;	// IMP=0x000000010114272c
- (void)performCollectionElement:(SEL)arg1;	// IMP=0x00000001011424cc
- (void)markLevelFin;	// IMP=0x0000000101142374
- (void)markLoadlevelCompleted;	// IMP=0x00000001011422b0
- (void)markLoadlevel:(const char *)arg1;	// IMP=0x0000000101141f44
- (void)iterateFromeQueue:(short)arg1;	// IMP=0x0000000101141704
- (void)ipcThread;	// IMP=0x00000001011415d4
- (void)startUploadThread;	// IMP=0x0000000101141330
- (void)startWorkThread;	// IMP=0x0000000101140a5c
- (void)safeFreeScene:(struct _Scene *)arg1;	// IMP=0x0000000101140a20
- (void)pushMessageToGloabelBufferQueueAndSafeFree:(struct _Scene *)arg1 forceWriteToFile:(_Bool)arg2;	// IMP=0x0000000101140968
- (struct _Scene *)createSceneFlag:(BOOL)arg1 sceneIndex:(short)arg2 sceneType:(short)arg3;	// IMP=0x00000001011408c0
- (void)postNetworkStatusFlag:(BOOL)arg1 status:(short)arg2;	// IMP=0x0000000101140838
- (void)endTag;	// IMP=0x0000000101140734
- (void)beginTag:(id)arg1;	// IMP=0x0000000101140558
- (void)postCoordinate:(int)arg1 y:(int)arg2 z:(int)arg3 pitch:(int)arg4 yaw:(int)arg5 roll:(int)arg6;	// IMP=0x0000000101140490
- (void)postStreamEvent:(int)arg1 status:(int)arg2 code:(int)arg3 msg:(const char *)arg4;	// IMP=0x0000000101140260
- (void)postAppState:(unsigned long long)arg1;	// IMP=0x00000001011401ac
- (void)postFrame:(float)arg1;	// IMP=0x0000000101140104
- (void)postLagStatus:(int)arg1;	// IMP=0x0000000101140084
- (void)postNTL:(int)arg1;	// IMP=0x0000000101140004
- (void)postEvent:(unsigned int)arg1 info:(const char *)arg2;	// IMP=0x000000010113ff74
- (_Bool)isCurrentLevelDataValid;	// IMP=0x000000010113ff5c
- (void)setVersionIden:(id)arg1;	// IMP=0x000000010113fe2c
- (void)setAPPID:(id)arg1;	// IMP=0x000000010113fd54
- (void)setLocal:(id)arg1;	// IMP=0x000000010113fc3c
- (void)setUserID:(const char *)arg1;	// IMP=0x000000010113fadc
- (void)setQuality:(int)arg1;	// IMP=0x000000010113fa28
- (void)endExclude;	// IMP=0x000000010113f9a0
- (void)beginExclude;	// IMP=0x000000010113f82c
- (void)createWorkThread;	// IMP=0x000000010113f7e0
- (void)dealLocalCacheFile;	// IMP=0x000000010113f590
- (void)setSDKUserDefaultEmpty;	// IMP=0x000000010113f240
- (void)getRandFromCDNServer;	// IMP=0x000000010113e38c
- (_Bool)faultTolerantForModel:(id)arg1 modelWhite:(id)arg2;	// IMP=0x000000010113e0fc
- (int)getDeviceLevel:(id)arg1 configLevel:(id)arg2;	// IMP=0x000000010113d4b8
- (int)getDeviceLevel:(id)arg1;	// IMP=0x000000010113d188
- (void)postErrorStr:(id)arg1 errorDes:(id)arg2;	// IMP=0x000000010113d094
- (void)postErrorStr:(id)arg1;	// IMP=0x000000010113d074
- (void)enableTrackState;	// IMP=0x000000010113d01c
- (void)invokeBuggly;	// IMP=0x000000010113ce40
- (void)initData;	// IMP=0x000000010113c824
- (void)initContext:(id)arg1;	// IMP=0x000000010113c714
- (id)init;	// IMP=0x000000010113c3ac

@end

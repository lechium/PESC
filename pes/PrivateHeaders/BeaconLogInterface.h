//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BeaconLogInterface : NSObject
{
}

+ (void)setAppLogDirPath:(int)arg1;	// IMP=0x00000001007e0d7c
+ (void)setAppLogFileTotalMaxSize:(int)arg1;	// IMP=0x00000001007e0d14
+ (void)setAppLogMaxDayFlow:(int)arg1;	// IMP=0x00000001007e0cac
+ (void)setAppLogMaxFileSize:(int)arg1;	// IMP=0x00000001007e0c44
+ (void)setAppLogMaxFileNum:(int)arg1;	// IMP=0x00000001007e0bdc
+ (void)setAppLogMaxSaveDay:(int)arg1;	// IMP=0x00000001007e0b74
+ (void)setAppLogUploadUsable:(_Bool)arg1;	// IMP=0x00000001007e0b24
+ (_Bool)onAppLogUploadAction:(id)arg1 isRealTime:(_Bool)arg2 savePath:(id)arg3;	// IMP=0x00000001007e0ac8
+ (_Bool)onAppLogUploadAction:(id)arg1 isRealTime:(_Bool)arg2;	// IMP=0x00000001007e0ab4
+ (_Bool)onAppLogUploadAction:(id)arg1;	// IMP=0x00000001007e0aa0
+ (void)doUploadAppLogRecordsWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00000001007e0a8c
+ (void)doUploadAppLogRecords;	// IMP=0x00000001007e0a78
+ (void)setAppLogUserId:(id)arg1;	// IMP=0x00000001007e0a64

@end


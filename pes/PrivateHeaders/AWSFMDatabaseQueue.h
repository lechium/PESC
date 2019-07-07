//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWSFMDatabase, NSObject<OS_dispatch_queue>, NSString;

@interface AWSFMDatabaseQueue : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    AWSFMDatabase *_db;	// 24 = 0x18
    int _openFlags;	// 32 = 0x20
}

+ (Class)databaseClass;	// IMP=0x0000000100bd7de4
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x0000000100bd7d78
+ (id)databaseQueueWithPath:(id)arg1;	// IMP=0x0000000100bd7d14
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;	// IMP=0x0000000100bd8950
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x0000000100bd85d4
- (void)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100bd85bc
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100bd85a4
- (void)beginTransaction:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100bd839c
- (void)inDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0000000100bd81dc
- (id)database;	// IMP=0x0000000100bd8118
- (void)close;	// IMP=0x0000000100bd804c
- (void)dealloc;	// IMP=0x0000000100bd7ff0
- (id)init;	// IMP=0x0000000100bd7fe0
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100bd7fcc
- (id)initWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x0000000100bd7fbc
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x0000000100bd7df8

@end

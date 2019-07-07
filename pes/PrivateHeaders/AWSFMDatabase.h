//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString;

@interface AWSFMDatabase : NSObject
{
    NSString *_databasePath;	// 8 = 0x8
    _Bool _logsErrors;	// 16 = 0x10
    _Bool _crashOnErrors;	// 17 = 0x11
    _Bool _traceExecution;	// 18 = 0x12
    _Bool _checkedOut;	// 19 = 0x13
    _Bool _shouldCacheStatements;	// 20 = 0x14
    _Bool _isExecutingStatement;	// 21 = 0x15
    _Bool _inTransaction;	// 22 = 0x16
    double _maxBusyRetryTimeInterval;	// 24 = 0x18
    double _startBusyRetryTime;	// 32 = 0x20
    NSMutableDictionary *_cachedStatements;	// 40 = 0x28
    NSMutableSet *_openResultSets;	// 48 = 0x30
    NSMutableSet *_openFunctions;	// 56 = 0x38
    NSDateFormatter *_dateFormat;	// 64 = 0x40
    struct sqlite3 *_db;	// 72 = 0x48
}

+ (id)storeableDateFormat:(id)arg1;	// IMP=0x0000000100b8b17c
+ (_Bool)isSQLiteThreadSafe;	// IMP=0x0000000100b8a5e0
+ (id)sqliteLibVersion;	// IMP=0x0000000100b8a598
+ (int)AWSFMDBVersion;	// IMP=0x0000000100b8a408
+ (id)AWSFMDBUserVersion;	// IMP=0x0000000100b8a3dc
+ (id)databaseWithPath:(id)arg1;	// IMP=0x0000000100b8a18c
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property _Bool traceExecution; // @synthesize traceExecution=_traceExecution;
@property _Bool checkedOut; // @synthesize checkedOut=_checkedOut;
@property _Bool crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property _Bool logsErrors; // @synthesize logsErrors=_logsErrors;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements=_cachedStatements;
- (void).cxx_destruct;	// IMP=0x0000000100b8e0e8
- (void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100b8defc
- (void)setShouldCacheStatements:(_Bool)arg1;	// IMP=0x0000000100b8ddf8
- (_Bool)shouldCacheStatements;	// IMP=0x0000000100b8dde8
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x0000000100b8dc8c
- (_Bool)rollbackToSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100b8dba4
- (_Bool)releaseSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100b8dabc
- (_Bool)startSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100b8d9c8
- (_Bool)inTransaction;	// IMP=0x0000000100b8d9b8
- (_Bool)beginTransaction;	// IMP=0x0000000100b8d974
- (_Bool)beginDeferredTransaction;	// IMP=0x0000000100b8d930
- (_Bool)commit;	// IMP=0x0000000100b8d8f0
- (_Bool)rollback;	// IMP=0x0000000100b8d8b0
- (_Bool)update:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x0000000100b8d878
- (_Bool)executeUpdate:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x0000000100b8d840
- (_Bool)executeStatements:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b8d740
- (_Bool)executeStatements:(id)arg1;	// IMP=0x0000000100b8d730
- (_Bool)executeUpdateWithFormat:(id)arg1;	// IMP=0x0000000100b8d4d8
- (_Bool)executeUpdate:(id)arg1 withVAList:(char *)arg2;	// IMP=0x0000000100b8d4b8
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x0000000100b8d450
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x0000000100b8d3e8
- (_Bool)executeUpdate:(id)arg1;	// IMP=0x0000000100b8d3ac
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(char *)arg5;	// IMP=0x0000000100b8cb34
- (id)executeQuery:(id)arg1 withVAList:(char *)arg2;	// IMP=0x0000000100b8cb18
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x0000000100b8cab0
- (id)executeQueryWithFormat:(id)arg1;	// IMP=0x0000000100b8c9a8
- (id)executeQuery:(id)arg1;	// IMP=0x0000000100b8c970
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(char *)arg4;	// IMP=0x0000000100b8c204
- (id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x0000000100b8c19c
- (void)extractSQL:(id)arg1 argumentsList:(char *)arg2 intoString:(id)arg3 arguments:(id)arg4;	// IMP=0x0000000100b8babc
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;	// IMP=0x0000000100b8b5f0
- (int)changes;	// IMP=0x0000000100b8b590
- (long long)lastInsertRowId;	// IMP=0x0000000100b8b530
- (id)lastError;	// IMP=0x0000000100b8b4d0
- (id)errorWithMessage:(id)arg1;	// IMP=0x0000000100b8b430
- (int)lastErrorCode;	// IMP=0x0000000100b8b420
- (_Bool)hadError;	// IMP=0x0000000100b8b3f8
- (id)lastErrorMessage;	// IMP=0x0000000100b8b3b8
- (_Bool)databaseExists;	// IMP=0x0000000100b8b374
- (void)warnInUse;	// IMP=0x0000000100b8b34c
- (_Bool)goodConnection;	// IMP=0x0000000100b8b2d0
- (id)stringFromDate:(id)arg1;	// IMP=0x0000000100b8b2b8
- (id)dateFromString:(id)arg1;	// IMP=0x0000000100b8b2a0
- (void)setDateFormat:(id)arg1;	// IMP=0x0000000100b8b28c
- (_Bool)hasDateFormatter;	// IMP=0x0000000100b8b274
- (_Bool)setKeyWithData:(id)arg1;	// IMP=0x0000000100b8b174
- (_Bool)setKey:(id)arg1;	// IMP=0x0000000100b8b0a4
- (_Bool)rekeyWithData:(id)arg1;	// IMP=0x0000000100b8b09c
- (_Bool)rekey:(id)arg1;	// IMP=0x0000000100b8afcc
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;	// IMP=0x0000000100b8aedc
- (id)cachedStatementForQuery:(id)arg1;	// IMP=0x0000000100b8ae14
- (void)clearCachedStatements;	// IMP=0x0000000100b8acbc
- (void)resultSetDidClose:(id)arg1;	// IMP=0x0000000100b8ac60
- (void)closeOpenResultSets;	// IMP=0x0000000100b8aac8
- (_Bool)hasOpenResultSets;	// IMP=0x0000000100b8aa98
- (void)setBusyRetryTimeout:(int)arg1;	// IMP=0x0000000100b8aa58
- (int)busyRetryTimeout;	// IMP=0x0000000100b8aa14
- (double)maxBusyRetryTimeInterval;	// IMP=0x0000000100b8aa04
- (void)setMaxBusyRetryTimeInterval:(double)arg1;	// IMP=0x0000000100b8a8e4
- (_Bool)close;	// IMP=0x0000000100b8a80c
- (_Bool)openWithFlags:(int)arg1 vfs:(id)arg2;	// IMP=0x0000000100b8a71c
- (_Bool)openWithFlags:(int)arg1;	// IMP=0x0000000100b8a70c
- (_Bool)open;	// IMP=0x0000000100b8a674
- (const char *)sqlitePath;	// IMP=0x0000000100b8a60c
- (void *)sqliteHandle;	// IMP=0x0000000100b8a5fc
- (id)databasePath;	// IMP=0x0000000100b8a3cc
- (void)dealloc;	// IMP=0x0000000100b8a37c
- (void)finalize;	// IMP=0x0000000100b8a32c
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100b8a200
- (id)init;	// IMP=0x0000000100b8a1f0
- (_Bool)validateSQL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100ba2e20
- (_Bool)columnExists:(id)arg1 columnName:(id)arg2;	// IMP=0x0000000100ba2dc4
- (void)setUserVersion:(unsigned int)arg1;	// IMP=0x0000000100ba2d2c
- (unsigned int)userVersion;	// IMP=0x0000000100ba2ca8
- (void)setApplicationID:(unsigned int)arg1;	// IMP=0x0000000100ba2c10
- (unsigned int)applicationID;	// IMP=0x0000000100ba2b8c
- (_Bool)columnExists:(id)arg1 inTableWithName:(id)arg2;	// IMP=0x0000000100ba2a10
- (id)getTableSchema:(id)arg1;	// IMP=0x0000000100ba2994
- (id)getSchema;	// IMP=0x0000000100ba2970
- (_Bool)tableExists:(id)arg1;	// IMP=0x0000000100ba28cc
- (id)dateForQuery:(id)arg1;	// IMP=0x0000000100ba281c
- (id)dataForQuery:(id)arg1;	// IMP=0x0000000100ba276c
- (double)doubleForQuery:(id)arg1;	// IMP=0x0000000100ba26bc
- (_Bool)boolForQuery:(id)arg1;	// IMP=0x0000000100ba2610
- (long long)longForQuery:(id)arg1;	// IMP=0x0000000100ba2568
- (int)intForQuery:(id)arg1;	// IMP=0x0000000100ba24bc
- (id)stringForQuery:(id)arg1;	// IMP=0x0000000100ba240c

@end


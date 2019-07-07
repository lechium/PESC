//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYAbstraceLogger.h"

#import "BLYLoggerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface BLYDFTLogger : BLYAbstraceLogger <BLYLoggerDelegate>
{
    unsigned long long _calendarUnitFlags;	// 16 = 0x10
}

+ (id)defaultLogger;	// IMP=0x0000000100734084
@property(readonly, nonatomic) NSString *loggerName;
- (id)logs;	// IMP=0x000000010073468c
- (void)addLog:(id)arg1;	// IMP=0x0000000100734450
- (void)logMessage:(id)arg1;	// IMP=0x0000000100734200
- (id)init;	// IMP=0x0000000100734148

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end


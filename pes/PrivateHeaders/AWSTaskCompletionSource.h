//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWSTask;

@interface AWSTaskCompletionSource : NSObject
{
    AWSTask *_task;	// 8 = 0x8
}

+ (id)taskCompletionSource;	// IMP=0x0000000100b89584
@property(readonly, nonatomic) AWSTask *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x0000000100b89940
- (_Bool)trySetCancelled;	// IMP=0x0000000100b898e4
- (_Bool)trySetError:(id)arg1;	// IMP=0x0000000100b8986c
- (_Bool)trySetResult:(id)arg1;	// IMP=0x0000000100b897f4
- (void)cancel;	// IMP=0x0000000100b89780
- (void)setError:(id)arg1;	// IMP=0x0000000100b896e0
- (void)setResult:(id)arg1;	// IMP=0x0000000100b89640
- (id)init;	// IMP=0x0000000100b895ac

@end


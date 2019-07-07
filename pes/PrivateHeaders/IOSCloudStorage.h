//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainer, CKDatabase;

@interface IOSCloudStorage : NSObject
{
    CKContainer *CloudContainer;	// 8 = 0x8
    CKDatabase *SharedDatabase;	// 16 = 0x10
    CKDatabase *UserDatabase;	// 24 = 0x18
    id iCloudToken;	// 32 = 0x20
}

+ (id)cloudStorage;	// IMP=0x00000001019c7fd0
@property(retain) id iCloudToken; // @synthesize iCloudToken;
@property(retain) CKDatabase *UserDatabase; // @synthesize UserDatabase;
@property(retain) CKDatabase *SharedDatabase; // @synthesize SharedDatabase;
@property(retain) CKContainer *CloudContainer; // @synthesize CloudContainer;
- (void)iCloudAccountAvailabilityChanged:(id)arg1;	// IMP=0x00000001019c7f64
- (_Bool)query:(_Bool)arg1 fetchHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001019c7d90
- (_Bool)deleteFile:(id)arg1 sharedDB:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001019c7cdc
- (_Bool)writeFile:(id)arg1 contents:(id)arg2 sharedDB:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001019c7bc4
- (_Bool)readFile:(id)arg1 sharedDB:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001019c7b10
- (void)dealloc;	// IMP=0x00000001019c7a78
- (id)init:(_Bool)arg1;	// IMP=0x00000001019c7978

@end


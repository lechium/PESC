//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsPaginationCursor, NSArray;

@interface HsLocalConversationLoaderResult : NSObject
{
    NSArray *_conversations;	// 8 = 0x8
    HsPaginationCursor *_cursor;	// 16 = 0x10
}

@property(retain) HsPaginationCursor *cursor; // @synthesize cursor=_cursor;
@property(retain) NSArray *conversations; // @synthesize conversations=_conversations;
- (void).cxx_destruct;	// IMP=0x000000010142651c
- (id)initWithConversations:(id)arg1 cursor:(id)arg2;	// IMP=0x0000000101426430

@end


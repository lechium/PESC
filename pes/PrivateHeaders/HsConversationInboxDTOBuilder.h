//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDecimalNumber, NSNumber, NSString;

@interface HsConversationInboxDTOBuilder : NSObject
{
    _Bool _persistMessageBox;	// 8 = 0x8
    NSNumber *_userLocalId;	// 16 = 0x10
    NSString *_formName;	// 24 = 0x18
    NSString *_formEmail;	// 32 = 0x20
    NSString *_formDescription;	// 40 = 0x28
    NSString *_descriptionTimeStamp;	// 48 = 0x30
    unsigned long long _descriptionType;	// 56 = 0x38
    NSString *_attachmentName;	// 64 = 0x40
    NSString *_prefillTextForArchivedConversation;	// 72 = 0x48
    NSString *_lastSyncedTimestamp;	// 80 = 0x50
    NSString *_replyDraftText;	// 88 = 0x58
    NSNumber *_hasOlderMessages;	// 96 = 0x60
    NSDecimalNumber *_lastConversationRedactionTime;	// 104 = 0x68
}

@property(copy, nonatomic) NSDecimalNumber *lastConversationRedactionTime; // @synthesize lastConversationRedactionTime=_lastConversationRedactionTime;
@property(copy, nonatomic) NSNumber *hasOlderMessages; // @synthesize hasOlderMessages=_hasOlderMessages;
@property(nonatomic) _Bool persistMessageBox; // @synthesize persistMessageBox=_persistMessageBox;
@property(copy, nonatomic) NSString *replyDraftText; // @synthesize replyDraftText=_replyDraftText;
@property(copy, nonatomic) NSString *lastSyncedTimestamp; // @synthesize lastSyncedTimestamp=_lastSyncedTimestamp;
@property(copy, nonatomic) NSString *prefillTextForArchivedConversation; // @synthesize prefillTextForArchivedConversation=_prefillTextForArchivedConversation;
@property(copy, nonatomic) NSString *attachmentName; // @synthesize attachmentName=_attachmentName;
@property(nonatomic) unsigned long long descriptionType; // @synthesize descriptionType=_descriptionType;
@property(copy, nonatomic) NSString *descriptionTimeStamp; // @synthesize descriptionTimeStamp=_descriptionTimeStamp;
@property(copy, nonatomic) NSString *formDescription; // @synthesize formDescription=_formDescription;
@property(copy, nonatomic) NSString *formEmail; // @synthesize formEmail=_formEmail;
@property(copy, nonatomic) NSString *formName; // @synthesize formName=_formName;
@property(copy, nonatomic) NSNumber *userLocalId; // @synthesize userLocalId=_userLocalId;
- (void).cxx_destruct;	// IMP=0x0000000101440a60
- (id)build;	// IMP=0x00000001014407fc
- (id)initWithUserLocalId:(id)arg1;	// IMP=0x000000010144077c
- (id)initWithRecord:(id)arg1;	// IMP=0x00000001014404d4

@end

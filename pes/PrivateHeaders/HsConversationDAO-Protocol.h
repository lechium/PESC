//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsConversationDM, NSArray, NSDictionary, NSNumber, NSString;

@protocol HsConversationDAO <NSObject>
- (NSString *)getOldestConversationCreatedAtTimeForUser:(NSNumber *)arg1;
- (NSString *)getLatestConversationCreatedAtTimeForUser:(NSNumber *)arg1;
- (void)dropAndRecreateWithPlatform:(id <HsPlatform>)arg1 error:(id *)arg2;
- (id)initWithPlatform:(id <HsPlatform>)arg1 withError:(id *)arg2;
- (NSArray *)messagesForConversationIds:(NSArray *)arg1 withError:(id *)arg2;
- (NSDictionary *)messageCountsForConversationIds:(NSArray *)arg1 forMessageTypes:(NSArray *)arg2 withError:(id *)arg3;
- (_Bool)insertOrUpdateMessageDMs:(NSArray *)arg1 withError:(id *)arg2;
- (NSArray *)messageDMsForConversationLocalId:(NSNumber *)arg1 createdBefore:(NSString *)arg2 withError:(id *)arg3;
- (void)deleteConversationWithSDKId:(NSNumber *)arg1 withError:(id *)arg2;
- (_Bool)insertPreconversationDM:(HsConversationDM *)arg1 withError:(id *)arg2;
- (_Bool)updateConversationDMWithoutMessages:(HsConversationDM *)arg1 withError:(id *)arg2;
- (_Bool)updateConversationDMs:(NSArray *)arg1 conversationUpdateDict:(NSDictionary *)arg2 withError:(id *)arg3;
- (void)updateConversationDM:(HsConversationDM *)arg1 withError:(id *)arg2;
- (_Bool)insertConversationDMs:(NSArray *)arg1 withError:(id *)arg2;
- (NSNumber *)userLocalIdForConversationServerId:(NSString *)arg1 preconversationServerId:(NSString *)arg2 withError:(id *)arg3;
- (HsConversationDM *)preConversationDMForPreconversationServerId:(NSString *)arg1 withError:(id *)arg2;
- (void)deleteConversationsForUser:(NSNumber *)arg1 withError:(id *)arg2;
- (HsConversationDM *)conversationDMForConversationLocalId:(NSNumber *)arg1 withError:(id *)arg2;
- (HsConversationDM *)conversationDMForConversationServerId:(NSString *)arg1 withError:(id *)arg2;
- (NSArray *)conversationDMsWithoutMessagesForUserLocalId:(NSNumber *)arg1 createOnOrBefore:(NSString *)arg2 withError:(id *)arg3;
@end


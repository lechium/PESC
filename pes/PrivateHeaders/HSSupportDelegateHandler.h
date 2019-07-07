//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HSSupportDelegateHandler : NSObject
{
}

+ (id)supportedFileFormats;	// IMP=0x00000001013cdd0c
+ (const char *)unityMessageHandler;	// IMP=0x00000001013cdc44
+ (void)notifyDidCreateDynamicForm:(id)arg1;	// IMP=0x00000001013cdab4
+ (void)notifyDidCheckIfConversationActive:(_Bool)arg1;	// IMP=0x00000001013cd958
+ (void)conversationEnded;	// IMP=0x00000001013cd84c
+ (id)configForFAQViaSearch;	// IMP=0x00000001013cd750
+ (void)handleAuthenticationFailedForUser:(id)arg1 withError:(id)arg2;	// IMP=0x00000001013cd248
+ (_Bool)handleDisplayAttachmentFileAtLocation:(id)arg1 onViewController:(id)arg2;	// IMP=0x00000001013cd118
+ (void)handleUserCompletedCustomerSatisfactionSurvey:(long long)arg1 withFeedback:(id)arg2;	// IMP=0x00000001013ccf80
+ (void)handleUserRepliedToConversationWithMessage:(id)arg1;	// IMP=0x00000001013ccdf0
+ (void)handleNewConversationStartedWithMessage:(id)arg1;	// IMP=0x00000001013ccc60
+ (void)handleDidReceiveInAppNotificationWithMessageCount:(long long)arg1;	// IMP=0x00000001013ccb08
+ (void)handleHelpshiftSessionHasEnded;	// IMP=0x00000001013cc9fc
+ (void)handleHelpshiftSessionHasBegun;	// IMP=0x00000001013cc8f0
+ (void)handleDidReceiveUnreadMessagesCount:(long long)arg1;	// IMP=0x00000001013cc798
+ (void)handleDidReceiveNotificationCount:(long long)arg1;	// IMP=0x00000001013cc640

@end


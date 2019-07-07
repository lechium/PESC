//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsConversationListener.h"
#import "HsObservableArrayDelegate.h"
#import "HsUIMessageListDelegate.h"

@class HSSDKDataDM, HsButtonWidget, HsConversationInboxDM, HsConversationMediator, HsDomain, HsReplyFieldWidget, HsSDKConfigurationDM, HsUIMessageList, HsViewableConversation, HsWidgetGateway, NSString;

@interface HsConversationVM : NSObject <HsObservableArrayDelegate, HsConversationListener, HsUIMessageListDelegate>
{
    HSSDKDataDM *_sdkDataDM;	// 8 = 0x8
    HsWidgetGateway *_widgetGateway;	// 16 = 0x10
    HsButtonWidget *_replyButton;	// 24 = 0x18
    _Bool _isMovingToConversationInfoScreen;	// 32 = 0x20
    HsDomain *_domain;	// 40 = 0x28
    id <HsPlatform> _platform;	// 48 = 0x30
    id <HsConversationRenderer> _renderer;	// 56 = 0x38
    HsConversationInboxDM *_conversationInboxDM;	// 64 = 0x40
    HsUIMessageList *_messageListVM;	// 72 = 0x48
    HsViewableConversation *_viewableConversation;	// 80 = 0x50
    HsConversationMediator *_conversationMediator;	// 88 = 0x58
    HsReplyFieldWidget *_replyFieldWidget;	// 96 = 0x60
    HsSDKConfigurationDM *_sdkConfigDM;	// 104 = 0x68
    HsButtonWidget *_attachmentButton;	// 112 = 0x70
    HsButtonWidget *_replyBoxWidget;	// 120 = 0x78
}

@property(nonatomic) _Bool isMovingToConversationInfoScreen; // @synthesize isMovingToConversationInfoScreen=_isMovingToConversationInfoScreen;
@property(retain) HsButtonWidget *replyBoxWidget; // @synthesize replyBoxWidget=_replyBoxWidget;
@property(retain) HsButtonWidget *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
@property(retain) HsSDKConfigurationDM *sdkConfigDM; // @synthesize sdkConfigDM=_sdkConfigDM;
@property(retain) HsReplyFieldWidget *replyFieldWidget; // @synthesize replyFieldWidget=_replyFieldWidget;
@property(retain) HsConversationMediator *conversationMediator; // @synthesize conversationMediator=_conversationMediator;
@property(retain) HsViewableConversation *viewableConversation; // @synthesize viewableConversation=_viewableConversation;
@property(retain, nonatomic) HsUIMessageList *messageListVM; // @synthesize messageListVM=_messageListVM;
@property(retain) HsConversationInboxDM *conversationInboxDM; // @synthesize conversationInboxDM=_conversationInboxDM;
@property __weak id <HsConversationRenderer> renderer; // @synthesize renderer=_renderer;
@property(retain) id <HsPlatform> platform; // @synthesize platform=_platform;
@property(retain) HsDomain *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;	// IMP=0x000000010137baa0
- (void)handleAdminSuggestedQuestionReadWithServerID:(id)arg1 questionServerID:(id)arg2 questionPublishID:(id)arg3;	// IMP=0x000000010137b928
- (void)handlePreIssueCreationSuccess;	// IMP=0x000000010137b924
- (void)onConversationInboxPollSuccess;	// IMP=0x000000010137b920
- (void)onConversationInboxPollFailure;	// IMP=0x000000010137b91c
- (void)uiMessageListRemoveMessageFromIndex:(long long)arg1 andCount:(long long)arg2;	// IMP=0x000000010137b878
- (void)uiMessageListUpdateMessageFromIndex:(long long)arg1 andCount:(long long)arg2;	// IMP=0x000000010137b7d4
- (void)uiMessageListAddMessageFromIndex:(long long)arg1 andCount:(long long)arg2;	// IMP=0x000000010137b730
- (void)onUIMessageListUpdated;	// IMP=0x000000010137b72c
- (void)uiMessageListPrependMessages:(long long)arg1;	// IMP=0x000000010137b690
- (void)uiMessageListRefreshAll;	// IMP=0x000000010137b608
- (void)uiMessageInitialiseList:(id)arg1;	// IMP=0x000000010137b56c
- (void)hsObservableArrayDidRemoveObjects:(id)arg1;	// IMP=0x000000010137b568
- (void)hsObservableArrayDidUpdateObjects:(id)arg1;	// IMP=0x000000010137b444
- (void)hsObservableArrayDidAddObjects:(id)arg1;	// IMP=0x000000010137b438
- (void)loadMoreConversations;	// IMP=0x000000010137b3f4
- (void)conversationsListDidScrollToMiddle:(_Bool)arg1;	// IMP=0x000000010137b3f0
- (void)conversationsListDidScrollToBottom:(_Bool)arg1;	// IMP=0x000000010137b3ec
- (void)conversationsListDidScrollToTop:(_Bool)arg1;	// IMP=0x000000010137b2d8
- (void)userDidEnterReply:(id)arg1;	// IMP=0x000000010137b26c
- (void)updateDependenciesForMessageDMs:(id)arg1;	// IMP=0x000000010137b134
- (void)conversationViewControllerWillDeallocated;	// IMP=0x000000010137af20
- (void)conversationViewControllerWillDisappear;	// IMP=0x000000010137adc0
- (void)conversationViewControllerDidAppear;	// IMP=0x000000010137aa6c
- (void)resetIncrementMessageCountFlag;	// IMP=0x000000010137a990
- (_Bool)shouldShowReplyBoxOnResolutionRejectedForConversationInboxDM:(id)arg1;	// IMP=0x000000010137a8f8
- (_Bool)shouldShowFooterViewForMessageAtIndex:(unsigned long long)arg1;	// IMP=0x000000010137a85c
- (id)uiMessageDMAtIndex:(long long)arg1;	// IMP=0x000000010137a844
- (long long)numberOfUIMessages;	// IMP=0x000000010137a82c
- (void)didFailToLoadConversationsWithError:(id)arg1 forUser:(id)arg2;	// IMP=0x000000010137a760
- (void)didLoadMoreConversations:(id)arg1 forUser:(id)arg2;	// IMP=0x000000010137a358
- (void)didStartLoadingConversationsForUser:(id)arg1;	// IMP=0x000000010137a28c
- (_Bool)isVisibleOnUI;	// IMP=0x000000010137a254
- (void)showAttachmentForLocalFileName:(id)arg1 displayName:(id)arg2 contentType:(id)arg3 resourceType:(unsigned long long)arg4;	// IMP=0x000000010137a010
- (_Bool)isMessageBoxVisible;	// IMP=0x0000000101379ff8
- (void)resetDefaultMenuItemsVisibility;	// IMP=0x0000000101379f94
- (void)conversationStateChangedTo:(unsigned long long)arg1;	// IMP=0x0000000101379b48
- (void)agentTypingStatusChanged:(_Bool)arg1;	// IMP=0x00000001013799dc
- (void)updateMessage:(id)arg1;	// IMP=0x00000001013799bc
- (void)addAllMessageDMs:(id)arg1;	// IMP=0x0000000101379998
- (void)handleNotification:(id)arg1;	// IMP=0x00000001013797a0
- (void)updateLastUserActivityTime;	// IMP=0x0000000101379700
- (void)stopLiveUpdates;	// IMP=0x00000001013796c0
- (void)startLiveUpdates;	// IMP=0x0000000101379680
- (void)faqAtIndex:(long long)arg1 selectedInMessageDM:(id)arg2;	// IMP=0x00000001013795dc
- (void)pushAnalyticsEvent:(unsigned long long)arg1 data:(id)arg2;	// IMP=0x0000000101379560
- (void)appReviewRequestClickedOnRequestMessageDM:(id)arg1;	// IMP=0x0000000101379164
- (id)currentUserLocalId;	// IMP=0x000000010137914c
- (void)handleURLRedirect:(id)arg1 forConversationId:(id)arg2;	// IMP=0x0000000101378bf0
- (void)attachmentTappedWithMessageDM:(id)arg1;	// IMP=0x0000000101378ab4
- (void)renderMenuItems;	// IMP=0x0000000101378a9c
- (void)markMessagesAsSeenOnExit;	// IMP=0x00000001013789e0
- (void)markMessagesAsSeenOnEntry;	// IMP=0x0000000101378904
- (void)markConversationResolutionStatus:(_Bool)arg1;	// IMP=0x0000000101378734
- (void)csatSurveySubmittedWithRating:(long long)arg1 feedback:(id)arg2;	// IMP=0x00000001013783e4
- (void)createPreIssue;	// IMP=0x00000001013783e0
- (void)retryMessage:(id)arg1;	// IMP=0x000000010137827c
- (void)sendScreenShotWithResource:(id)arg1 referId:(id)arg2;	// IMP=0x0000000101378078
- (void)sendTextMessageWithString:(id)arg1;	// IMP=0x0000000101377fec
- (void)optionSelectedWithDM:(id)arg1 selectedOption:(id)arg2 isSkipped:(_Bool)arg3;	// IMP=0x0000000101377fe8
- (void)skipTapped;	// IMP=0x0000000101377fe4
- (void)sendTextMessage;	// IMP=0x0000000101377d60
- (_Bool)canSendReply;	// IMP=0x0000000101377cf8
- (id)lastMessageDM;	// IMP=0x0000000101377c34
- (void)newConversationButtonClicked;	// IMP=0x0000000101377bb8
- (void)imageAttachmentButtonClicked;	// IMP=0x0000000101377b20
- (void)setConversationViewState:(unsigned long long)arg1;	// IMP=0x0000000101377b08
- (void)clearUserReplyDraft:(_Bool)arg1;	// IMP=0x00000001013779dc
- (void)storeReplyText:(id)arg1;	// IMP=0x0000000101377970
- (void)sendButtonClicked;	// IMP=0x0000000101377964
- (void)setUserCanReadMessages:(_Bool)arg1;	// IMP=0x00000001013778f0
- (id)widgetGatewayWithDevice:(id)arg1 sdkConfigDM:(id)arg2 conversationInboxDM:(id)arg3;	// IMP=0x0000000101377848
- (id)mediatorWithDomain:(id)arg1;	// IMP=0x00000001013777e0
- (id)buildUiMessages:(id)arg1;	// IMP=0x0000000101377788
- (id)getUIMessages:(id)arg1;	// IMP=0x0000000101377610
- (void)updateRenderer:(id)arg1;	// IMP=0x000000010137744c
- (id)greetingMessageIfNewPreissue;	// IMP=0x0000000101377444
- (void)initMessagesList;	// IMP=0x0000000101377004
- (id)initWithPlatform:(id)arg1 domain:(id)arg2 conversationInboxDM:(id)arg3 viewableConversation:(id)arg4 sdkDataDM:(id)arg5 conversationRenderer:(id)arg6;	// IMP=0x0000000101376800

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


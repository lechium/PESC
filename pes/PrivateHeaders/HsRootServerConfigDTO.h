//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsPeriodicReviewDTO, NSDecimalNumber, NSString;

@interface HsRootServerConfigDTO : NSObject
{
    _Bool _requireNameAndEmail;	// 8 = 0x8
    _Bool _profileFormEnable;	// 9 = 0x9
    _Bool _showAgentName;	// 10 = 0xa
    _Bool _customerSatisfactionSurvey;	// 11 = 0xb
    _Bool _disableInAppConversation;	// 12 = 0xc
    _Bool _issueExists;	// 13 = 0xd
    _Bool _conversationalIssueFiling;	// 14 = 0xe
    _Bool _enableTypingIndicator;	// 15 = 0xf
    _Bool _showConversationResolutionQuestion;	// 16 = 0x10
    _Bool _conversationHistoryEnabled;	// 17 = 0x11
    _Bool _allowUserAttachments;	// 18 = 0x12
    int _debugLogLimit;	// 20 = 0x14
    int _breadcrumbLimit;	// 24 = 0x18
    NSString *_reviewUrl;	// 32 = 0x20
    HsPeriodicReviewDTO *_periodicReview;	// 40 = 0x28
    NSString *_conversationGreetingMessage;	// 48 = 0x30
    NSDecimalNumber *_lastRedactionAt;	// 56 = 0x38
    NSDecimalNumber *_profileCreatedAt;	// 64 = 0x40
}

@property(nonatomic) _Bool allowUserAttachments; // @synthesize allowUserAttachments=_allowUserAttachments;
@property(readonly, nonatomic) NSDecimalNumber *profileCreatedAt; // @synthesize profileCreatedAt=_profileCreatedAt;
@property(readonly, nonatomic) NSDecimalNumber *lastRedactionAt; // @synthesize lastRedactionAt=_lastRedactionAt;
@property(readonly, nonatomic) _Bool conversationHistoryEnabled; // @synthesize conversationHistoryEnabled=_conversationHistoryEnabled;
@property(readonly, nonatomic) _Bool showConversationResolutionQuestion; // @synthesize showConversationResolutionQuestion=_showConversationResolutionQuestion;
@property(readonly) _Bool enableTypingIndicator; // @synthesize enableTypingIndicator=_enableTypingIndicator;
@property(readonly) NSString *conversationGreetingMessage; // @synthesize conversationGreetingMessage=_conversationGreetingMessage;
@property(readonly) _Bool conversationalIssueFiling; // @synthesize conversationalIssueFiling=_conversationalIssueFiling;
@property(readonly, nonatomic) HsPeriodicReviewDTO *periodicReview; // @synthesize periodicReview=_periodicReview;
@property(readonly, nonatomic) NSString *reviewUrl; // @synthesize reviewUrl=_reviewUrl;
@property(readonly, nonatomic) int breadcrumbLimit; // @synthesize breadcrumbLimit=_breadcrumbLimit;
@property(readonly, nonatomic) int debugLogLimit; // @synthesize debugLogLimit=_debugLogLimit;
@property(readonly, nonatomic) _Bool issueExists; // @synthesize issueExists=_issueExists;
@property(readonly, nonatomic) _Bool disableInAppConversation; // @synthesize disableInAppConversation=_disableInAppConversation;
@property(readonly, nonatomic) _Bool customerSatisfactionSurvey; // @synthesize customerSatisfactionSurvey=_customerSatisfactionSurvey;
@property(readonly, nonatomic) _Bool showAgentName; // @synthesize showAgentName=_showAgentName;
@property(readonly, nonatomic) _Bool profileFormEnable; // @synthesize profileFormEnable=_profileFormEnable;
@property(readonly, nonatomic) _Bool requireNameAndEmail; // @synthesize requireNameAndEmail=_requireNameAndEmail;
- (void).cxx_destruct;	// IMP=0x0000000101447a04
- (id)initWithRequireNameAndEmail:(_Bool)arg1 profileFormEnable:(_Bool)arg2 showAgentName:(_Bool)arg3 customerSatisfactionSurvey:(_Bool)arg4 disableInAppConversation:(_Bool)arg5 issueExists:(_Bool)arg6 debugLogLimit:(int)arg7 breadcrumbLimit:(int)arg8 reviewUrl:(id)arg9 periodicReview:(id)arg10 conversationalIssueFiling:(_Bool)arg11 conversationGreetingMessage:(id)arg12 enableTypingIndicator:(_Bool)arg13 showConversationResolutionQuestion:(_Bool)arg14 conversationHistoryEnabled:(_Bool)arg15 lastRedactionAt:(id)arg16 profileCreatedAt:(id)arg17 allowUserAttachments:(_Bool)arg18;	// IMP=0x0000000101447680

@end

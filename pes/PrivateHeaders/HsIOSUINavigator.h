//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsUINavigator.h"

@class NSString, UINavigationController, UIViewController;

@interface HsIOSUINavigator : NSObject <HsUINavigator>
{
    UIViewController *_hostViewController;	// 8 = 0x8
    UINavigationController *_sdkRootNavigationController;	// 16 = 0x10
}

@property(nonatomic) __weak UINavigationController *sdkRootNavigationController; // @synthesize sdkRootNavigationController=_sdkRootNavigationController;
@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (void).cxx_destruct;	// IMP=0x00000001013dd890
- (unsigned long long)computeSDKVisibilityStateForViewController:(id)arg1;	// IMP=0x00000001013dd6e8
- (void)sdkBecameInvisibleWithViewController:(id)arg1;	// IMP=0x00000001013dd4c4
- (void)sdkBecameVisibleWithViewController:(id)arg1;	// IMP=0x00000001013dd278
- (void)handleViewDidDisappearForViewController:(id)arg1;	// IMP=0x00000001013dd140
- (void)handleViewWillAppearForViewController:(id)arg1;	// IMP=0x00000001013dcef4
- (void)replaceTopViewControllerWithUIViewController:(id)arg1 in:(id)arg2 customTransition:(id)arg3;	// IMP=0x00000001013dcd84
- (id)loadingViewController;	// IMP=0x00000001013dcd28
- (id)authenticationFailedViewController;	// IMP=0x00000001013dcccc
- (void)showAuthenticationFailure;	// IMP=0x00000001013dc8b0
- (_Bool)isConversationViewControllerVisible;	// IMP=0x00000001013dc808
- (id)resourceBundle;	// IMP=0x00000001013dc758
- (id)faqStoryboard;	// IMP=0x00000001013dc6ec
- (id)conversationsStoryboard;	// IMP=0x00000001013dc680
- (id)hsNavigationController;	// IMP=0x00000001013dc624
- (id)navigationControllerWithRootViewController:(id)arg1;	// IMP=0x00000001013dc38c
- (_Bool)showAddCloseButtonForViewController:(id)arg1;	// IMP=0x00000001013dc250
- (void)dismissHelpshiftViewControllersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001013dc0b4
- (id)singleFAQViewControllerForFAQPublishId:(id)arg1 language:(id)arg2 isAdminSuggested:(_Bool)arg3 onFAQReadBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001013dbf28
- (id)singleFAQViewControllerForFAQPublishId:(id)arg1;	// IMP=0x00000001013dbf0c
- (void)popUptoNewConversationViewControllerFromViewController:(id)arg1;	// IMP=0x00000001013dbcfc
- (id)suggestionsViewController;	// IMP=0x00000001013dbca0
- (id)faqListViewControllerForSectionPublishId:(id)arg1;	// IMP=0x00000001013dbadc
- (id)sectionsListViewController;	// IMP=0x00000001013db954
- (id)attachmentPreviewController;	// IMP=0x00000001013db8f8
- (id)newConversationViewController;	// IMP=0x00000001013db89c
- (id)conversationViewController;	// IMP=0x00000001013db840
- (void)startConversationFlow;	// IMP=0x00000001013db7c4
- (void)replaceTopViewControllerWithNewConversationController;	// IMP=0x00000001013db77c
- (id)appsHostViewController;	// IMP=0x00000001013db75c
- (id)conversationFlowViewController;	// IMP=0x00000001013db4b4
- (void)pushViewController:(id)arg1;	// IMP=0x00000001013db438
- (void)replaceTopViewControllerWithUIViewController:(id)arg1 customTransition:(id)arg2;	// IMP=0x00000001013db3b0
- (void)launchSDKWithViewController:(id)arg1 onHostViewController:(id)arg2;	// IMP=0x00000001013db170
- (id)topViewController:(id)arg1;	// IMP=0x00000001013db024
- (id)init;	// IMP=0x00000001013daf34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


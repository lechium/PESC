//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMSDKApplicationDelegate.h"

@interface IMSDKApplicationDelegate (IMSDKHook)
+ (void)load;	// IMP=0x000000010062b7d8
- (void)imsdkhook_application:(id)arg1 didReceiveLocalNotification:(id)arg2;	// IMP=0x000000010062c014
- (void)imsdkhook_application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010062bf08
- (void)imsdkhook_application:(id)arg1 didReceiveRemoteNotification:(id)arg2;	// IMP=0x000000010062be3c
- (void)imsdkhook_application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;	// IMP=0x000000010062bd70
- (void)imsdkhook_application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;	// IMP=0x000000010062bca4
- (_Bool)imsdkhook_application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;	// IMP=0x000000010062bb74
- (_Bool)imsdkhook_application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x000000010062ba6c
@end


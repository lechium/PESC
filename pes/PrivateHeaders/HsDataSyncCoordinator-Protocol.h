//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol HsDataSyncCoordinator <NSObject>
- (void)switchCompletedForUser:(NSString *)arg1;
- (void)switchRequiredForUser:(NSString *)arg1;
- (void)firstDeviceSyncComplete;
- (_Bool)isFirstDeviceSyncComplete;
- (_Bool)canSyncSessionPropertiesForUser:(NSString *)arg1;
- (_Bool)canSyncUserPropertiesForUser:(NSString *)arg1;
@end


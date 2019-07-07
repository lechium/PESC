//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HSLegacyUserDataMigrator : NSObject
{
}

+ (id)legacyProfileFromData:(id)arg1;	// IMP=0x000000010147b950
+ (void)deleteLegacyProfileData;	// IMP=0x000000010147b8f4
+ (id)profileForCurrentDomain;	// IMP=0x000000010147b824
+ (id)getAllProfilesDictionary;	// IMP=0x000000010147b7a8
+ (id)getCurrentDomainName;	// IMP=0x000000010147b724
+ (void)migrateLegacyProfileKeychainFormVersion:(id)arg1;	// IMP=0x000000010147b5bc
+ (_Bool)shouldMigrateLegacyProfileKeychainFromVersion:(id)arg1;	// IMP=0x000000010147b550
+ (void)loginLastLoggedInLegacyProfile:(id)arg1 lastLoggedInProfileId:(id)arg2 defaultProfileWasLastLoggedIn:(_Bool)arg3;	// IMP=0x000000010147b2c0
+ (id)migratableProfilesFromData:(id)arg1;	// IMP=0x000000010147b120
+ (void)migrateFromVersion:(id)arg1;	// IMP=0x000000010147add8

@end

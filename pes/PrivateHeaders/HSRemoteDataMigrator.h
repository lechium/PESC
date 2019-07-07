//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSUserDM, HsDomain;

@interface HSRemoteDataMigrator : NSObject
{
    id <HsPlatform> _platform;	// 8 = 0x8
    HsDomain *_domain;	// 16 = 0x10
    id <HSRemoteDataMigratorListener> _listener;	// 24 = 0x18
    id <HSLegacyProfileDataMigrationDAO> _legacyProfileDataMigrationDAO;	// 32 = 0x20
    HSUserDM *_user;	// 40 = 0x28
}

@property(retain, nonatomic) HSUserDM *user; // @synthesize user=_user;
@property(retain, nonatomic) id <HSLegacyProfileDataMigrationDAO> legacyProfileDataMigrationDAO; // @synthesize legacyProfileDataMigrationDAO=_legacyProfileDataMigrationDAO;
@property(nonatomic) __weak id <HSRemoteDataMigratorListener> listener; // @synthesize listener=_listener;
- (void).cxx_destruct;	// IMP=0x000000010149dfcc
- (void)updateProfileMigrationStateFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 withError:(id)arg3;	// IMP=0x000000010149dc48
- (id)createMigrateLegacyProfileNetwork;	// IMP=0x000000010149db28
- (void)migrateLegacyProfileServerId:(id)arg1 user:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010149d818
- (void)startProfileMigration;	// IMP=0x000000010149d4a8
- (unsigned long long)profileMigrationState;	// IMP=0x000000010149d378
- (void)setAppropriateInitialState;	// IMP=0x000000010149d29c
- (id)initWithPlatform:(id)arg1 domain:(id)arg2 user:(id)arg3 listener:(id)arg4;	// IMP=0x000000010149d178

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSUserDAO.h"

@class HsSQLDbHelper, NSString;

@interface HSiOSUserDAO : NSObject <HSUserDAO>
{
    Class _userQueryBuilder;	// 8 = 0x8
    Class _userRawResultConvertor;	// 16 = 0x10
    HsSQLDbHelper *_dataBaseHelper;	// 24 = 0x18
}

@property(retain, nonatomic) HsSQLDbHelper *dataBaseHelper; // @synthesize dataBaseHelper=_dataBaseHelper;
@property(retain, nonatomic) Class userRawResultConvertor; // @synthesize userRawResultConvertor=_userRawResultConvertor;
@property(retain, nonatomic) Class userQueryBuilder; // @synthesize userQueryBuilder=_userQueryBuilder;
- (void).cxx_destruct;	// IMP=0x00000001013fa724
- (_Bool)dropTable;	// IMP=0x00000001013fa600
- (id)executeFetchQuery:(id)arg1 withParameters:(id)arg2;	// IMP=0x00000001013fa49c
- (_Bool)executeUpdateQuery:(id)arg1 withParameters:(id)arg2;	// IMP=0x00000001013fa378
- (_Bool)updateActiveState:(_Bool)arg1 forUserLocalId:(id)arg2;	// IMP=0x00000001013fa204
- (_Bool)deleteUser:(id)arg1;	// IMP=0x00000001013fa0cc
- (_Bool)activateUser:(id)arg1;	// IMP=0x00000001013f9ed4
- (_Bool)updateName:(id)arg1 email:(id)arg2 forUserLocalId:(id)arg3;	// IMP=0x00000001013f9d18
- (_Bool)updateSyncState:(unsigned long long)arg1 forUserLocalId:(id)arg2;	// IMP=0x00000001013f9ba4
- (_Bool)updateIssueExists:(_Bool)arg1 forUserLocalId:(id)arg2;	// IMP=0x00000001013f9a30
- (_Bool)updateName:(id)arg1 forUserLocalId:(id)arg2;	// IMP=0x00000001013f988c
- (_Bool)updateAuthToken:(id)arg1 forUserLocalId:(id)arg2;	// IMP=0x00000001013f96e8
- (_Bool)updatePushTokenSyncStatus:(_Bool)arg1 forUserLocalId:(id)arg2;	// IMP=0x00000001013f9574
- (id)anonymousUser;	// IMP=0x00000001013f9470
- (id)activeUser;	// IMP=0x00000001013f936c
- (id)fetchUserByIdentifier:(id)arg1 email:(id)arg2;	// IMP=0x00000001013f92ac
- (id)fetchUser:(id)arg1;	// IMP=0x00000001013f9110
- (id)fetchUsers;	// IMP=0x00000001013f902c
- (id)createUser:(id)arg1;	// IMP=0x00000001013f8df8
- (_Bool)createUserTable;	// IMP=0x00000001013f8d08
- (id)initWithUserDBHelper:(id)arg1;	// IMP=0x00000001013f8be8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

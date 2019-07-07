//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKSharingContent.h"

@class FBSDKHashtag, FBSDKShareOpenGraphAction, NSArray, NSString, NSURL;

@interface FBSDKShareOpenGraphContent : NSObject <FBSDKSharingContent>
{
    NSURL *_contentURL;	// 8 = 0x8
    FBSDKHashtag *_hashtag;	// 16 = 0x10
    NSArray *_peopleIDs;	// 24 = 0x18
    NSString *_placeID;	// 32 = 0x20
    NSString *_ref;	// 40 = 0x28
    FBSDKShareOpenGraphAction *_action;	// 48 = 0x30
    NSString *_previewPropertyName;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100724024
@property(copy, nonatomic) NSString *previewPropertyName; // @synthesize previewPropertyName=_previewPropertyName;
@property(copy, nonatomic) FBSDKShareOpenGraphAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *ref; // @synthesize ref=_ref;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(copy, nonatomic) NSArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property(copy, nonatomic) FBSDKHashtag *hashtag; // @synthesize hashtag=_hashtag;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void).cxx_destruct;	// IMP=0x00000001007245d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001007243cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001007242a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010072402c
- (_Bool)isEqualToShareOpenGraphContent:(id)arg1;	// IMP=0x0000000100723d68
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100723cd8
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

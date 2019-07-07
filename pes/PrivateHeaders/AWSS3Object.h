//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3Owner, NSDate, NSNumber, NSString;

@interface AWSS3Object : AWSModel
{
    NSString *_ETag;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSDate *_lastModified;	// 24 = 0x18
    AWSS3Owner *_owner;	// 32 = 0x20
    NSNumber *_size;	// 40 = 0x28
    long long _storageClass;	// 48 = 0x30
}

+ (id)storageClassJSONTransformer;	// IMP=0x0000000100c0bc30
+ (id)ownerJSONTransformer;	// IMP=0x0000000100c0bbec
+ (id)lastModifiedJSONTransformer;	// IMP=0x0000000100c0bb8c
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0baa0
@property(nonatomic) long long storageClass; // @synthesize storageClass=_storageClass;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) AWSS3Owner *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *ETag; // @synthesize ETag=_ETag;
- (void).cxx_destruct;	// IMP=0x0000000100c0be94

@end

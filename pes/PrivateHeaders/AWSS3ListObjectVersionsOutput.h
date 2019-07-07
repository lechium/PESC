//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSNumber, NSString;

@interface AWSS3ListObjectVersionsOutput : AWSModel
{
    NSArray *_commonPrefixes;	// 8 = 0x8
    NSArray *_deleteMarkers;	// 16 = 0x10
    NSString *_delimiter;	// 24 = 0x18
    long long _encodingType;	// 32 = 0x20
    NSNumber *_isTruncated;	// 40 = 0x28
    NSString *_keyMarker;	// 48 = 0x30
    NSNumber *_maxKeys;	// 56 = 0x38
    NSString *_name;	// 64 = 0x40
    NSString *_nextKeyMarker;	// 72 = 0x48
    NSString *_nextVersionIdMarker;	// 80 = 0x50
    NSString *_prefix;	// 88 = 0x58
    NSString *_versionIdMarker;	// 96 = 0x60
    NSArray *_versions;	// 104 = 0x68
}

+ (id)versionsJSONTransformer;	// IMP=0x0000000100c081f0
+ (id)encodingTypeJSONTransformer;	// IMP=0x0000000100c08118
+ (id)deleteMarkersJSONTransformer;	// IMP=0x0000000100c080d4
+ (id)commonPrefixesJSONTransformer;	// IMP=0x0000000100c08090
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c07ef4
@property(retain, nonatomic) NSArray *versions; // @synthesize versions=_versions;
@property(retain, nonatomic) NSString *versionIdMarker; // @synthesize versionIdMarker=_versionIdMarker;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSString *nextVersionIdMarker; // @synthesize nextVersionIdMarker=_nextVersionIdMarker;
@property(retain, nonatomic) NSString *nextKeyMarker; // @synthesize nextKeyMarker=_nextKeyMarker;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *maxKeys; // @synthesize maxKeys=_maxKeys;
@property(retain, nonatomic) NSString *keyMarker; // @synthesize keyMarker=_keyMarker;
@property(retain, nonatomic) NSNumber *isTruncated; // @synthesize isTruncated=_isTruncated;
@property(nonatomic) long long encodingType; // @synthesize encodingType=_encodingType;
@property(retain, nonatomic) NSString *delimiter; // @synthesize delimiter=_delimiter;
@property(retain, nonatomic) NSArray *deleteMarkers; // @synthesize deleteMarkers=_deleteMarkers;
@property(retain, nonatomic) NSArray *commonPrefixes; // @synthesize commonPrefixes=_commonPrefixes;
- (void).cxx_destruct;	// IMP=0x0000000100c08404

@end


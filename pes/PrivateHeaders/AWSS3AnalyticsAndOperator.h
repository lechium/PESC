//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSS3AnalyticsAndOperator : AWSModel
{
    NSString *_prefix;	// 8 = 0x8
    NSArray *_tags;	// 16 = 0x10
}

+ (id)tagsJSONTransformer;	// IMP=0x0000000100bf6a24
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bf6990
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;	// IMP=0x0000000100bf6ab0

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray;

@interface AWSS3GetBucketCorsOutput : AWSModel
{
    NSArray *_CORSRules;	// 8 = 0x8
}

+ (id)CORSRulesJSONTransformer;	// IMP=0x0000000100bfeeb4
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bfee44
@property(retain, nonatomic) NSArray *CORSRules; // @synthesize CORSRules=_CORSRules;
- (void).cxx_destruct;	// IMP=0x0000000100bfef1c

@end

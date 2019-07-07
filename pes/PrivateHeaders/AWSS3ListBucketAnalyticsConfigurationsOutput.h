//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSNumber, NSString;

@interface AWSS3ListBucketAnalyticsConfigurationsOutput : AWSModel
{
    NSArray *_analyticsConfigurationList;	// 8 = 0x8
    NSString *_continuationToken;	// 16 = 0x10
    NSNumber *_isTruncated;	// 24 = 0x18
    NSString *_nextContinuationToken;	// 32 = 0x20
}

+ (id)analyticsConfigurationListJSONTransformer;	// IMP=0x0000000100c06bd0
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c06b0c
@property(retain, nonatomic) NSString *nextContinuationToken; // @synthesize nextContinuationToken=_nextContinuationToken;
@property(retain, nonatomic) NSNumber *isTruncated; // @synthesize isTruncated=_isTruncated;
@property(retain, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(retain, nonatomic) NSArray *analyticsConfigurationList; // @synthesize analyticsConfigurationList=_analyticsConfigurationList;
- (void).cxx_destruct;	// IMP=0x0000000100c06ca4

@end

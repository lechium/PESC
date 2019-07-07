//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3CloudFunctionConfiguration, AWSS3QueueConfigurationDeprecated, AWSS3TopicConfigurationDeprecated;

@interface AWSS3NotificationConfigurationDeprecated : AWSModel
{
    AWSS3CloudFunctionConfiguration *_cloudFunctionConfiguration;	// 8 = 0x8
    AWSS3QueueConfigurationDeprecated *_queueConfiguration;	// 16 = 0x10
    AWSS3TopicConfigurationDeprecated *_topicConfiguration;	// 24 = 0x18
}

+ (id)topicConfigurationJSONTransformer;	// IMP=0x0000000100c0b8a8
+ (id)queueConfigurationJSONTransformer;	// IMP=0x0000000100c0b864
+ (id)cloudFunctionConfigurationJSONTransformer;	// IMP=0x0000000100c0b820
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0b774
@property(retain, nonatomic) AWSS3TopicConfigurationDeprecated *topicConfiguration; // @synthesize topicConfiguration=_topicConfiguration;
@property(retain, nonatomic) AWSS3QueueConfigurationDeprecated *queueConfiguration; // @synthesize queueConfiguration=_queueConfiguration;
@property(retain, nonatomic) AWSS3CloudFunctionConfiguration *cloudFunctionConfiguration; // @synthesize cloudFunctionConfiguration=_cloudFunctionConfiguration;
- (void).cxx_destruct;	// IMP=0x0000000100c0b958

@end


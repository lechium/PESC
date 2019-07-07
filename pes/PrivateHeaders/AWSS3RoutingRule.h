//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3Condition, AWSS3Redirect;

@interface AWSS3RoutingRule : AWSModel
{
    AWSS3Condition *_condition;	// 8 = 0x8
    AWSS3Redirect *_redirect;	// 16 = 0x10
}

+ (id)redirectJSONTransformer;	// IMP=0x0000000100c120e4
+ (id)conditionJSONTransformer;	// IMP=0x0000000100c120a0
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c1200c
@property(retain, nonatomic) AWSS3Redirect *redirect; // @synthesize redirect=_redirect;
@property(retain, nonatomic) AWSS3Condition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;	// IMP=0x0000000100c12170

@end

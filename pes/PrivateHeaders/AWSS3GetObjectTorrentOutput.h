//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@interface AWSS3GetObjectTorrentOutput : AWSModel
{
    id _body;	// 8 = 0x8
    long long _requestCharged;	// 16 = 0x10
}

+ (id)requestChargedJSONTransformer;	// IMP=0x0000000100c02f50
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c02ebc
@property(nonatomic) long long requestCharged; // @synthesize requestCharged=_requestCharged;
@property(retain, nonatomic) id body; // @synthesize body=_body;
- (void).cxx_destruct;	// IMP=0x0000000100c0306c

@end

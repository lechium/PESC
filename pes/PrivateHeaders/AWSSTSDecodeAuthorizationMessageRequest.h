//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSString;

@interface AWSSTSDecodeAuthorizationMessageRequest : AWSRequest
{
    NSString *_encodedMessage;	// 8 = 0x8
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bdd6b0
@property(retain, nonatomic) NSString *encodedMessage; // @synthesize encodedMessage=_encodedMessage;
- (void).cxx_destruct;	// IMP=0x0000000100bdd74c

@end


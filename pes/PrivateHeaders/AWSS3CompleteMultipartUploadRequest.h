//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3CompletedMultipartUpload, NSString;

@interface AWSS3CompleteMultipartUploadRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    AWSS3CompletedMultipartUpload *_multipartUpload;	// 24 = 0x18
    long long _requestPayer;	// 32 = 0x20
    NSString *_uploadId;	// 40 = 0x28
}

+ (id)requestPayerJSONTransformer;	// IMP=0x0000000100bf84e4
+ (id)multipartUploadJSONTransformer;	// IMP=0x0000000100bf84a0
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bf83c4
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) AWSS3CompletedMultipartUpload *multipartUpload; // @synthesize multipartUpload=_multipartUpload;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100bf866c

@end

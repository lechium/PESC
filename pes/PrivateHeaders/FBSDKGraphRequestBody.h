//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableData;

@interface FBSDKGraphRequestBody : NSObject
{
    NSMutableData *_data;	// 8 = 0x8
}

+ (id)mimeContentType;	// IMP=0x00000001006b1bb0
- (void).cxx_destruct;	// IMP=0x00000001006b273c
- (void)_appendWithKey:(id)arg1 filename:(id)arg2 contentType:(id)arg3 contentBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001006b2478
@property(readonly, retain, nonatomic) NSData *data;
- (void)appendWithKey:(id)arg1 dataAttachmentValue:(id)arg2 logger:(id)arg3;	// IMP=0x00000001006b2204
- (void)appendWithKey:(id)arg1 dataValue:(id)arg2 logger:(id)arg3;	// IMP=0x00000001006b2070
- (void)appendWithKey:(id)arg1 imageValue:(id)arg2 logger:(id)arg3;	// IMP=0x00000001006b1e98
- (void)appendWithKey:(id)arg1 formValue:(id)arg2 logger:(id)arg3;	// IMP=0x00000001006b1d24
- (void)appendUTF8:(id)arg1;	// IMP=0x00000001006b1bf0
- (id)init;	// IMP=0x00000001006b1b2c

@end


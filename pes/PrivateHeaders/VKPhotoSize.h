//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKApiObject.h"

@class NSNumber, NSString;

@interface VKPhotoSize : VKApiObject
{
    NSString *_src;	// 8 = 0x8
    NSNumber *_width;	// 16 = 0x10
    NSNumber *_height;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
- (void).cxx_destruct;	// IMP=0x0000000100b54bac

@end

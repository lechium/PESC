//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSSet;

@interface TWTRTimelineFilter : NSObject <NSCopying>
{
    NSSet *_keywords;	// 8 = 0x8
    NSSet *_hashtags;	// 16 = 0x10
    NSSet *_handles;	// 24 = 0x18
    NSSet *_urls;	// 32 = 0x20
}

@property(copy, nonatomic) NSSet *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSSet *handles; // @synthesize handles=_handles;
@property(copy, nonatomic) NSSet *hashtags; // @synthesize hashtags=_hashtags;
@property(copy, nonatomic) NSSet *keywords; // @synthesize keywords=_keywords;
- (void).cxx_destruct;	// IMP=0x00000001008361b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100835fb0
- (unsigned long long)filterCount;	// IMP=0x0000000100835ebc
- (id)initWithJSONDictionary:(id)arg1;	// IMP=0x0000000100835c88

@end


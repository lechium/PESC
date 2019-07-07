//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TWTRTweetEntity.h"

#import "NSCoding.h"
#import "TWTRJSONConvertible.h"

@class NSString;

@interface TWTRTweetCashtagEntity : TWTRTweetEntity <NSCoding, TWTRJSONConvertible>
{
    NSString *_text;	// 8 = 0x8
}

@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;	// IMP=0x0000000100826ad8
- (id)accessibilityValue;	// IMP=0x0000000100826abc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100826a0c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100826948
- (id)initWithJSONDictionary:(id)arg1;	// IMP=0x000000010082687c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


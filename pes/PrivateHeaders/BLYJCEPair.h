//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BLYJCEPair : NSObject
{
    id _key;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (id)pairFromExtString:(id)arg1;	// IMP=0x000000010075088c
+ (id)parseExtString:(id)arg1;	// IMP=0x000000010075065c
+ (id)pairWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001007504c8
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;	// IMP=0x00000001007508e0
- (id)description;	// IMP=0x0000000100750568

@end

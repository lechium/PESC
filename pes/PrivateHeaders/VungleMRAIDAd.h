//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VungleAd.h"

#import "NSCoding.h"

@class NSURL;

@interface VungleMRAIDAd : VungleAd <NSCoding>
{
    long long _state;	// 72 = 0x48
    NSURL *_expectedLocalTemplateURL;	// 80 = 0x50
}

@property(copy, nonatomic) NSURL *expectedLocalTemplateURL; // @synthesize expectedLocalTemplateURL=_expectedLocalTemplateURL;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;	// IMP=0x0000000100abbfa4
- (_Bool)isEqualToVungleMRAIDAd:(id)arg1;	// IMP=0x0000000100abbf2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100abbe6c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100abbd80
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100abbc98
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100abbc50

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDecimalNumber, NSString;

@interface GADAdReward : NSObject
{
    NSString *_type;	// 8 = 0x8
    NSDecimalNumber *_amount;	// 16 = 0x10
}

@property(readonly, copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;	// IMP=0x00000001009e7ba0
- (id)initWithRewardType:(id)arg1 rewardAmount:(id)arg2;	// IMP=0x00000001009e7a8c
- (id)initWithRewardDictionary:(id)arg1;	// IMP=0x00000001009e78f0
- (id)init;	// IMP=0x00000001009e78e0

@end

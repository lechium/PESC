//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HsBreadcrumbDTO : NSObject
{
    NSString *_action;	// 8 = 0x8
    NSString *_dateTime;	// 16 = 0x10
}

@property(readonly, nonatomic) NSString *dateTime; // @synthesize dateTime=_dateTime;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x00000001014ad35c
- (id)initWithAction:(id)arg1 dateTime:(id)arg2;	// IMP=0x00000001014ad288

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TWTRTwitterText : NSObject
{
}

+ (id)validDomainSucceedingCharRegexp;	// IMP=0x000000010084527c
+ (id)invalidURLWithoutProtocolPrecedingCharSet;	// IMP=0x00000001008451f8
+ (id)endMentionRegexp;	// IMP=0x0000000100845168
+ (id)validReplyRegexp;	// IMP=0x00000001008450d8
+ (id)validMentionOrListRegexp;	// IMP=0x0000000100845048
+ (id)validSymbolRegexp;	// IMP=0x0000000100844fb8
+ (id)endHashtagRegexp;	// IMP=0x0000000100844f28
+ (id)validHashtagRegexp;	// IMP=0x0000000100844e98
+ (id)validTCOURLRegexp;	// IMP=0x0000000100844e08
+ (id)validSpecialShortDomainRegexp;	// IMP=0x0000000100844d78
+ (id)invalidShortDomainRegexp;	// IMP=0x0000000100844ce8
+ (id)validASCIIDomainRegexp;	// IMP=0x0000000100844c58
+ (id)URLRegexpForValidation;	// IMP=0x0000000100844bc8
+ (id)simplifiedValidURLRegexp;	// IMP=0x0000000100844b38
+ (long long)remainingCharacterCount:(id)arg1 httpURLLength:(unsigned long long)arg2 httpsURLLength:(unsigned long long)arg3;	// IMP=0x0000000100844b14
+ (long long)remainingCharacterCount:(id)arg1;	// IMP=0x0000000100844b00
+ (unsigned long long)tweetLength:(id)arg1 httpURLLength:(unsigned long long)arg2 httpsURLLength:(unsigned long long)arg3;	// IMP=0x0000000100844854
+ (id)validHashtagBoundaryCharacterSet;	// IMP=0x0000000100844728
+ (unsigned long long)tweetLength:(id)arg1;	// IMP=0x0000000100844714
+ (id)repliedScreenNameInText:(id)arg1;	// IMP=0x0000000100844580
+ (id)mentionsOrListsInText:(id)arg1;	// IMP=0x00000001008442a8
+ (id)mentionedScreenNamesInText:(id)arg1;	// IMP=0x00000001008440c8
+ (id)symbolsInText:(id)arg1 withURLEntities:(id)arg2;	// IMP=0x0000000100843da4
+ (id)symbolsInText:(id)arg1 checkingURLOverlap:(_Bool)arg2;	// IMP=0x0000000100843cd8
+ (id)hashtagsInText:(id)arg1 withURLEntities:(id)arg2;	// IMP=0x000000010084393c
+ (id)hashtagsInText:(id)arg1 checkingURLOverlap:(_Bool)arg2;	// IMP=0x0000000100843870
+ (id)URLsInText:(id)arg1;	// IMP=0x00000001008431c8
+ (id)entitiesInText:(id)arg1;	// IMP=0x0000000100842dec

@end

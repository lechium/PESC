//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TSEAutoCompletionViewModel : NSObject
{
}

- (id)insertAutoCompletionWord:(id)arg1 inWordAtLocation:(long long)arg2 inText:(id)arg3 insertionEndLocation:(long long *)arg4;	// IMP=0x0000000100890abc
- (id)wordAroundSelectedLocation:(long long)arg1 inText:(id)arg2;	// IMP=0x0000000100890970
- (id)stripUsernameMarkersFromWord:(id)arg1;	// IMP=0x00000001008908d4
- (_Bool)wordIsUsername:(id)arg1;	// IMP=0x00000001008908b8
- (_Bool)wordIsHashtag:(id)arg1;	// IMP=0x000000010089089c

@end


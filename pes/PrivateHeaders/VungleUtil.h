//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VungleUtil : NSObject
{
}

+ (id)sha1FromString:(id)arg1;	// IMP=0x0000000100a9ca48
+ (_Bool)isTopMostViewController:(id)arg1;	// IMP=0x0000000100a9c960
+ (id)topViewControllerWithRootViewController:(id)arg1;	// IMP=0x0000000100a9c7e8
+ (id)applicationSupportDirectoryURL;	// IMP=0x0000000100a9c75c
+ (_Bool)validateOSVersion:(id)arg1 againstRequiredOSVersion:(id)arg2;	// IMP=0x0000000100a9c6f8
+ (_Bool)safeMultiply64BitIntegerX:(long long)arg1 Y:(long long)arg2 result:(long long *)arg3;	// IMP=0x0000000100a9c664
+ (unsigned long long)dispatchTimeFromNowToDelta:(long long)arg1;	// IMP=0x0000000100a9c634
+ (id)convertFromSecondsToMilliseconds:(double)arg1;	// IMP=0x0000000100a9c610
+ (_Bool)isValidBundleDictionary:(id)arg1;	// IMP=0x0000000100a9c170
+ (id)dictionaryWithURLQueryString:(id)arg1;	// IMP=0x0000000100a9bf64
+ (void)cancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a9bf54
+ (id)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;	// IMP=0x0000000100a9bd2c
+ (_Bool)isNull:(id)arg1;	// IMP=0x0000000100a9bc94
+ (_Bool)isNullOrNil:(id)arg1;	// IMP=0x0000000100a9bbf0
+ (_Bool)isValidURL:(id)arg1;	// IMP=0x0000000100a9bb58
+ (_Bool)isValidURLForKey:(id)arg1 inDictionary:(id)arg2;	// IMP=0x0000000100a9ba84
+ (id)requiredVersion;	// IMP=0x0000000100a9ba58

@end


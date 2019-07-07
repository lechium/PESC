//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VungleCacheManager : NSObject
{
    NSString *_creativesPath;	// 8 = 0x8
    NSString *_modelsPath;	// 16 = 0x10
    NSString *_userSegmentationPath;	// 24 = 0x18
}

+ (id)filterExpiredAndInvalidPlacementsWithPlacements:(id)arg1;	// IMP=0x0000000100adbbb4
+ (id)filterReadyPlacementsWithPlacements:(id)arg1;	// IMP=0x0000000100adb9ac
+ (id)sortPlacementsByAutoCacheableStatus:(id)arg1;	// IMP=0x0000000100adb7c4
+ (id)createCacheDirectoryWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100adb67c
+ (id)baseFilenameForPath:(id)arg1;	// IMP=0x0000000100adb624
@property(readonly, nonatomic) NSString *userSegmentationPath; // @synthesize userSegmentationPath=_userSegmentationPath;
@property(copy, nonatomic) NSString *modelsPath; // @synthesize modelsPath=_modelsPath;
@property(copy, nonatomic) NSString *creativesPath; // @synthesize creativesPath=_creativesPath;
- (void).cxx_destruct;	// IMP=0x0000000100adbd9c
- (id)URLForPlacement:(id)arg1;	// IMP=0x0000000100adb548
- (id)URLForCreativeWithAd:(id)arg1;	// IMP=0x0000000100adb46c
- (id)URLForAdPart:(id)arg1;	// IMP=0x0000000100adb364
- (id)cacheContents;	// IMP=0x0000000100adb2cc
- (_Bool)removeCacheDirectory;	// IMP=0x0000000100adb03c
- (void)clearCache;	// IMP=0x0000000100adac98
- (_Bool)removeCreativesForAdUnit:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100adaa30
- (id)cleanupOrphanPlacementsWithActivePlacements:(id)arg1;	// IMP=0x0000000100ada68c
- (id)cleanupCachedPlacementCreatives;	// IMP=0x0000000100ada360
- (id)cachedPlacements;	// IMP=0x0000000100ada094
- (id)readyPlacements;	// IMP=0x0000000100ad9fcc
- (_Bool)removePlacement:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100ad9dd4
- (_Bool)insertPlacement:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100ad9bec
- (id)initWithCreativesDirectoryName:(id)arg1 modelsDirectoryName:(id)arg2;	// IMP=0x0000000100ad9a40

@end

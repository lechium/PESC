//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VungleMRAIDAd.h"

#import "NSCoding.h"
#import "VungleValidatableAd.h"

@class NSDictionary, NSMutableSet, NSSet, NSString, NSURL, VungleMRAIDAsset;

@interface VungleInternalMRAIDAd : VungleMRAIDAd <VungleValidatableAd, NSCoding>
{
    NSString *_templateID;	// 72 = 0x48
    NSURL *_templateURL;	// 80 = 0x50
    NSDictionary *_templateReplacements;	// 88 = 0x58
    NSDictionary *_cacheableTemplateReplacements;	// 96 = 0x60
    NSDictionary *_TPAT;	// 104 = 0x68
    VungleMRAIDAsset *_templateAsset;	// 112 = 0x70
    long long _templateType;	// 120 = 0x78
    NSMutableSet *_privateAssets;	// 128 = 0x80
}

@property(retain, nonatomic) NSMutableSet *privateAssets; // @synthesize privateAssets=_privateAssets;
@property(nonatomic) long long templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) VungleMRAIDAsset *templateAsset; // @synthesize templateAsset=_templateAsset;
@property(readonly, nonatomic) NSDictionary *TPAT; // @synthesize TPAT=_TPAT;
@property(copy, nonatomic) NSDictionary *cacheableTemplateReplacements; // @synthesize cacheableTemplateReplacements=_cacheableTemplateReplacements;
@property(copy, nonatomic) NSDictionary *templateReplacements; // @synthesize templateReplacements=_templateReplacements;
@property(copy, nonatomic) NSURL *templateURL; // @synthesize templateURL=_templateURL;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (void).cxx_destruct;	// IMP=0x0000000100aaa26c
@property(readonly, copy) NSString *description;
- (id)buildDictionaryFromTPAT:(id)arg1;	// IMP=0x0000000100aa9d98
- (_Bool)isEqualToVungleMRAIDAd:(id)arg1;	// IMP=0x0000000100aa998c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100aa9898
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100aa96dc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100aa9498
- (void)addTemplateAsset:(id)arg1;	// IMP=0x0000000100aa9450
- (void)appendAssets:(id)arg1;	// IMP=0x0000000100aa93ac
- (void)appendAsset:(id)arg1;	// IMP=0x0000000100aa9330
@property(readonly, copy, nonatomic) NSSet *assets;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100aa8f70
- (_Bool)isDownloaded;	// IMP=0x0000000100ad2ef8
- (_Bool)isValid;	// IMP=0x0000000100ad2e94
- (id)updateNonCacheableReplacementsWithIncentivizedTexts:(id)arg1;	// IMP=0x0000000100ad2c20
- (void)updateWithRequestAdBody:(id)arg1;	// IMP=0x0000000100ad2a38
- (id)TPATForKey:(id)arg1;	// IMP=0x0000000100ad2844
- (id)buildNonCacheableReplacementsDictionary;	// IMP=0x0000000100ad27f8
- (id)buildCacheableReplacementsDictionary;	// IMP=0x0000000100ad2574
- (id)buildAssets;	// IMP=0x0000000100ad22f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

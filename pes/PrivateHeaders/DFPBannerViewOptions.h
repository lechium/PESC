//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADAdLoaderOptions.h"

@interface DFPBannerViewOptions : GADAdLoaderOptions
{
    _Bool _enableManualImpressions;	// 8 = 0x8
    id <GADAppEventDelegate> _appEventDelegate;	// 16 = 0x10
    id <GADAdSizeDelegate> _adSizeDelegate;	// 24 = 0x18
}

@property(nonatomic) _Bool enableManualImpressions; // @synthesize enableManualImpressions=_enableManualImpressions;
@property(nonatomic) __weak id <GADAdSizeDelegate> adSizeDelegate; // @synthesize adSizeDelegate=_adSizeDelegate;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
- (void).cxx_destruct;	// IMP=0x00000001009c54a0
- (id)requestParameters;	// IMP=0x00000001009c537c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001009c52cc

@end


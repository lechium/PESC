//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADAdLoaderDelegate.h"

@class DFPBannerView, GADAdLoader, NSArray;

@protocol DFPBannerAdLoaderDelegate <GADAdLoaderDelegate>
- (void)adLoader:(GADAdLoader *)arg1 didReceiveDFPBannerView:(DFPBannerView *)arg2;
- (NSArray *)validBannerSizesForAdLoader:(GADAdLoader *)arg1;
@end

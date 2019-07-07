//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface GADMRAIDInterceptor : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;	// 8 = 0x8
    NSString *_bannerImplementationURLString;	// 16 = 0x10
    NSString *_expandedBannerImplementationURLString;	// 24 = 0x18
    NSString *_interstitialImplementationURLString;	// 32 = 0x20
    NSSet *_implementationURLStrings;	// 40 = 0x28
    _Bool _enabled;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000001009b58a0
- (void).cxx_destruct;	// IMP=0x00000001009b6878
@property(copy) NSString *interstitialImplementationURLString;
@property(copy) NSString *expandedBannerImplementationURLString;
@property(copy) NSString *bannerImplementationURLString;
- (_Bool)shouldRedirectRequest:(id)arg1;	// IMP=0x00000001009b6008
- (_Bool)canRedirect;	// IMP=0x00000001009b5ee4
- (void)updateImplementationURLStrings;	// IMP=0x00000001009b5e30
- (_Bool)URLisImplementationURL:(id)arg1;	// IMP=0x00000001009b5c74
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000001009b5bd0
- (id)init;	// IMP=0x00000001009b5af8
- (id)MRAIDURLStringForAdView:(id)arg1;	// IMP=0x00000001009b5920

@end


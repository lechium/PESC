//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIAlertController;

@interface SlateTextField : NSObject <UIAlertViewDelegate>
{
    TSharedPtr_2699a924 TextWidget;	// 8 = 0x8
    struct FText TextEntry;	// 24 = 0x18
    UIAlertController *AlertController;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x00000001025978b4
- (void).cxx_destruct;	// IMP=0x000000010259787c
- (void)show:(TSharedPtr_2699a924)arg1;	// IMP=0x0000000102596f98
- (void)hide;	// IMP=0x0000000102596ee0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

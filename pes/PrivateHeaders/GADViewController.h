//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GADIntermitting.h"

@class GADIntermission, GADSlot, NSString;

@interface GADViewController : UIViewController <GADIntermitting>
{
    id _appForegroundObserver;	// 8 = 0x8
    _Bool _viewDidAppear;	// 16 = 0x10
    GADIntermission *_intermission;	// 24 = 0x18
    unsigned long long _supportedInterfaceOrientations;	// 32 = 0x20
    GADSlot *_slot;	// 40 = 0x28
    GADViewController *_retainCycle;	// 48 = 0x30
    id <GADOverlayPresenting> _presenter;	// 56 = 0x38
    CDUnknownBlockType _dismissalCompletion;	// 64 = 0x40
}

@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(retain, nonatomic) id <GADOverlayPresenting> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) GADViewController *retainCycle; // @synthesize retainCycle=_retainCycle;
@property(nonatomic) __weak GADSlot *slot; // @synthesize slot=_slot;
@property(nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(readonly, nonatomic) GADIntermission *intermission; // @synthesize intermission=_intermission;
- (void).cxx_destruct;	// IMP=0x0000000100a28fe4
- (void)recordDismissal;	// IMP=0x0000000100a28cf8
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a28b0c
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a28848
- (_Bool)shouldDismissOnApplicationEnteringForeground;	// IMP=0x0000000100a28778
- (void)viewChangedToOrientation:(long long)arg1;	// IMP=0x0000000100a28774
- (_Bool)shouldAutorotate;	// IMP=0x0000000100a2876c
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000100a28764
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100a28700
- (void)finishDismissal;	// IMP=0x0000000100a28690
- (void)finishAppearing;	// IMP=0x0000000100a285f8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100a28588
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100a28514
- (void)viewDidLoad;	// IMP=0x0000000100a283d4
- (void)addToCurrentIntermission;	// IMP=0x0000000100a28308
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a28240
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100a2814c
- (void)setSupportedOrientations:(unsigned long long)arg1;	// IMP=0x0000000100a280d0
- (void)dealloc;	// IMP=0x0000000100a28024
- (void)commonInit;	// IMP=0x0000000100a28004
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100a27f80
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100a27f28
- (id)init;	// IMP=0x0000000100a27f14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

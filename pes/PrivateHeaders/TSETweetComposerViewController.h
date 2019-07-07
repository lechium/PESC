//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "CLLocationManagerDelegate.h"
#import "TSEAccountSelectionDelegate.h"
#import "TSEAutoCompletionTableViewControllerDelegate.h"
#import "TSELocationSelectionDelegate.h"
#import "UITableViewDelegate.h"

@class CLLocation, CLLocationManager, NSString, TSEAutoCompletionTableViewController, TSETweetComposerTableViewDataSource, TSETweetShareConfiguration, TSETweetShareViewController, UIBarButtonItem;

@interface TSETweetComposerViewController : UITableViewController <UITableViewDelegate, TSEAccountSelectionDelegate, CLLocationManagerDelegate, TSELocationSelectionDelegate, TSEAutoCompletionTableViewControllerDelegate>
{
    _Bool _waitingForLocation;	// 8 = 0x8
    _Bool _autoCompletionResultsVisible;	// 9 = 0x9
    _Bool _isSendingTweet;	// 10 = 0xa
    _Bool _registeredForTableViewContentSizeKVO;	// 11 = 0xb
    _Bool _registeredForLastTypedWordKVO;	// 12 = 0xc
    _Bool _registeredForTweetTextKVO;	// 13 = 0xd
    TSETweetShareViewController *_tweetShareViewController;	// 16 = 0x10
    TSETweetShareConfiguration *_configuration;	// 24 = 0x18
    TSETweetComposerTableViewDataSource *_dataSource;	// 32 = 0x20
    UIBarButtonItem *_cancelBarButtonItem;	// 40 = 0x28
    UIBarButtonItem *_tweetBarButtonItem;	// 48 = 0x30
    UIBarButtonItem *_spinnerBarButtonItem;	// 56 = 0x38
    id <TSEAccount> _selectedAccount;	// 64 = 0x40
    CLLocationManager *_locationManager;	// 72 = 0x48
    CLLocation *_mostRecentLocation;	// 80 = 0x50
    id <TSEGeoPlace> _selectedGeoPlace;	// 88 = 0x58
    unsigned long long _locationStatus;	// 96 = 0x60
    TSEAutoCompletionTableViewController *_autoCompletionResultsViewController;	// 104 = 0x68
}

+ (_Bool)applicationHasLocationUsageReasonInInfoPlist;	// IMP=0x000000010088c5f0
@property(nonatomic) _Bool registeredForTweetTextKVO; // @synthesize registeredForTweetTextKVO=_registeredForTweetTextKVO;
@property(nonatomic) _Bool registeredForLastTypedWordKVO; // @synthesize registeredForLastTypedWordKVO=_registeredForLastTypedWordKVO;
@property(nonatomic) _Bool registeredForTableViewContentSizeKVO; // @synthesize registeredForTableViewContentSizeKVO=_registeredForTableViewContentSizeKVO;
@property(nonatomic) _Bool isSendingTweet; // @synthesize isSendingTweet=_isSendingTweet;
@property(readonly, nonatomic) TSEAutoCompletionTableViewController *autoCompletionResultsViewController; // @synthesize autoCompletionResultsViewController=_autoCompletionResultsViewController;
@property(nonatomic) _Bool autoCompletionResultsVisible; // @synthesize autoCompletionResultsVisible=_autoCompletionResultsVisible;
@property(nonatomic) unsigned long long locationStatus; // @synthesize locationStatus=_locationStatus;
@property(retain, nonatomic) id <TSEGeoPlace> selectedGeoPlace; // @synthesize selectedGeoPlace=_selectedGeoPlace;
@property(nonatomic) _Bool waitingForLocation; // @synthesize waitingForLocation=_waitingForLocation;
@property(retain, nonatomic) CLLocation *mostRecentLocation; // @synthesize mostRecentLocation=_mostRecentLocation;
@property(readonly, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) id <TSEAccount> selectedAccount; // @synthesize selectedAccount=_selectedAccount;
@property(readonly, nonatomic) UIBarButtonItem *spinnerBarButtonItem; // @synthesize spinnerBarButtonItem=_spinnerBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *tweetBarButtonItem; // @synthesize tweetBarButtonItem=_tweetBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(readonly, nonatomic) TSETweetComposerTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) TSETweetShareConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) __weak TSETweetShareViewController *tweetShareViewController; // @synthesize tweetShareViewController=_tweetShareViewController;
- (void).cxx_destruct;	// IMP=0x000000010088e868
- (void)autoCompletionTableViewController:(id)arg1 wantsToUpdateText:(id)arg2 proposedCursorLocation:(long long)arg3;	// IMP=0x000000010088e694
- (void)autoCompletionTableViewController:(id)arg1 wantsAutoCompletionResultsVisible:(_Bool)arg2;	// IMP=0x000000010088e684
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010088e61c
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000010088e564
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x000000010088e558
- (void)locationSelectionTableViewController:(id)arg1 didSelectLocation:(id)arg2;	// IMP=0x000000010088e21c
- (void)accountSelectionTableViewController:(id)arg1 didSelectAccount:(id)arg2;	// IMP=0x000000010088dfc8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010088de8c
- (void)handleLocationSelectionRowTap;	// IMP=0x000000010088ddec
- (void)handleAccountSelectionRowTap;	// IMP=0x000000010088dc38
- (void)tweetButtonTapped;	// IMP=0x000000010088d364
- (void)cancelButtonTapped;	// IMP=0x000000010088d154
- (void)updateTweetButtonEnableState;	// IMP=0x000000010088cff4
- (void)updateAutoCompletion;	// IMP=0x000000010088cf00
- (void)pushLocationSelectionViewController;	// IMP=0x000000010088c824
- (void)presentNoLocationPermissionAlert;	// IMP=0x000000010088c65c
- (void)requestLocationPermission;	// IMP=0x000000010088c5b0
- (void)requestLocation;	// IMP=0x000000010088c558
- (void)updateLocationStatus;	// IMP=0x000000010088c484
- (void)presentTweetPostRequestErrorAlert;	// IMP=0x000000010088c060
- (void)tweetContentsChanged;	// IMP=0x000000010088be54
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010088bd14
- (void)dismissKeyboard;	// IMP=0x000000010088bb1c
- (void)presentNoAccountsErrorAlert;	// IMP=0x000000010088b888
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010088b820
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010088b7cc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010088b718
- (void)viewDidLoad;	// IMP=0x000000010088af84
- (void)_tseui_establishTableViewHeader;	// IMP=0x000000010088ae38
- (_Bool)isAutoCompletionAvailable;	// IMP=0x000000010088addc
- (_Bool)isLocationSelectionAvailable;	// IMP=0x000000010088ad80
- (void)dealloc;	// IMP=0x000000010088ab78
- (id)initWithConfiguration:(id)arg1 tweetShareViewController:(id)arg2;	// IMP=0x000000010088a6ac
@property(readonly, nonatomic) struct CGRect autoCompletionResultsViewControllerCalculatedFrame;
@property(readonly, nonatomic) double autoCompletionResultsViewControllerHeight;
- (void)_tseui_keyboardWillHide;	// IMP=0x000000010088a520
- (void)_tseui_keyboardDidShow;	// IMP=0x000000010088a4e8
- (void)_tseui_iPhone4STableViewLayoutHackIgnoreNegative:(_Bool)arg1;	// IMP=0x000000010088a1b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

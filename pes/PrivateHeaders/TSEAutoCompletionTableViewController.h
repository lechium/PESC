//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TSEThrottledPropertyObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, TSEAutoCompletionViewModel, TSEThrottledProperty, UITableView, UIView;

@interface TSEAutoCompletionTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, TSEThrottledPropertyObserver>
{
    id <TSEAutoCompletionTableViewControllerDelegate> _delegate;	// 8 = 0x8
    id <TSEAutoCompletion> _autoCompletion;	// 16 = 0x10
    id <TSEImageDownloader> _imageDownloader;	// 24 = 0x18
    TSEAutoCompletionViewModel *_viewModel;	// 32 = 0x20
    TSEThrottledProperty *_wordAroundSelectionProperty;	// 40 = 0x28
    NSArray *_latestResults;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
    UIView *_separatorLine;	// 64 = 0x40
    NSString *_tweetText;	// 72 = 0x48
    long long _cursorLocation;	// 80 = 0x50
    NSString *_wordAroundSelection;	// 88 = 0x58
    NSString *_lastRequestedWord;	// 96 = 0x60
    unsigned long long _autoCompletionState;	// 104 = 0x68
}

@property(nonatomic) unsigned long long autoCompletionState; // @synthesize autoCompletionState=_autoCompletionState;
@property(copy, nonatomic) NSString *lastRequestedWord; // @synthesize lastRequestedWord=_lastRequestedWord;
@property(copy, nonatomic) NSString *wordAroundSelection; // @synthesize wordAroundSelection=_wordAroundSelection;
@property(nonatomic) long long cursorLocation; // @synthesize cursorLocation=_cursorLocation;
@property(copy, nonatomic) NSString *tweetText; // @synthesize tweetText=_tweetText;
@property(readonly, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *latestResults; // @synthesize latestResults=_latestResults;
@property(readonly, nonatomic) TSEThrottledProperty *wordAroundSelectionProperty; // @synthesize wordAroundSelectionProperty=_wordAroundSelectionProperty;
@property(readonly, nonatomic) TSEAutoCompletionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <TSEImageDownloader> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) id <TSEAutoCompletion> autoCompletion; // @synthesize autoCompletion=_autoCompletion;
@property(nonatomic) __weak id <TSEAutoCompletionTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010087fd50
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010087faac
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010087f6e8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010087f678
- (void)assertUnknownAutoCompletionResultClass:(Class)arg1;	// IMP=0x000000010087f5b8
- (void)reportTweetTextUpdateAndDismissWithEnteredText:(id)arg1;	// IMP=0x000000010087f454
- (id)autoCompletionResultAtIndexPath:(id)arg1;	// IMP=0x000000010087f3a4
- (void)throttledProperty:(id)arg1 didChangeValue:(id)arg2;	// IMP=0x000000010087eb34
- (void)updateVisibilityWithWordAroundSelection:(id)arg1;	// IMP=0x000000010087ea50
- (void)updateResultsWithText:(id)arg1 textSelectionCursorLocation:(long long)arg2;	// IMP=0x000000010087e7f8
- (void)viewWillLayoutSubviews;	// IMP=0x000000010087e670
- (void)viewDidLoad;	// IMP=0x000000010087e234
- (void)loadView;	// IMP=0x000000010087e06c
- (id)initWithAutoCompletion:(id)arg1 imageDownloader:(id)arg2 delegate:(id)arg3;	// IMP=0x000000010087ded0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


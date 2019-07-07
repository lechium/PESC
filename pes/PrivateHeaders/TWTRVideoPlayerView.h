//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, AVPlayerItem, NSObject<OS_dispatch_queue>, TWTRVideoPlaybackConfiguration, TWTRVideoPlayerViewLayer, UIActivityIndicatorView, UIImageView;

@interface TWTRVideoPlayerView : UIView
{
    _Bool _didRegisterForNotifications;	// 8 = 0x8
    _Bool _playerHasBecomeReady;	// 9 = 0x9
    _Bool _shouldAutoPlay;	// 10 = 0xa
    _Bool _shouldAutoLoop;	// 11 = 0xb
    id <TWTRVideoPlayerViewDelegate> _delegate;	// 16 = 0x10
    id <TWTRVideoPlayerScribeDelegate> _scribeDelegate;	// 24 = 0x18
    long long _playbackState;	// 32 = 0x20
    AVPlayerItem *_playerItem;	// 40 = 0x28
    AVPlayer *_player;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serialConfigurationQueue;	// 56 = 0x38
    id _playerObserver;	// 64 = 0x40
    TWTRVideoPlayerViewLayer *_playerLayerView;	// 72 = 0x48
    TWTRVideoPlaybackConfiguration *_configuration;	// 80 = 0x50
    UIActivityIndicatorView *_loadingView;	// 88 = 0x58
    UIImageView *_previewImageView;	// 96 = 0x60
}

+ (CDStruct_198678f7)standardTotalTrimAmount;	// IMP=0x0000000100832864
+ (CDStruct_198678f7)standardTrim;	// IMP=0x0000000100832850
+ (id)seamlessLoopingVinePlayerItemFromURL:(id)arg1;	// IMP=0x0000000100831cd0
@property(readonly, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) TWTRVideoPlaybackConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) TWTRVideoPlayerViewLayer *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(retain, nonatomic) id playerObserver; // @synthesize playerObserver=_playerObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialConfigurationQueue; // @synthesize serialConfigurationQueue=_serialConfigurationQueue;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) __weak id <TWTRVideoPlayerScribeDelegate> scribeDelegate; // @synthesize scribeDelegate=_scribeDelegate;
@property(nonatomic) __weak id <TWTRVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldAutoLoop; // @synthesize shouldAutoLoop=_shouldAutoLoop;
@property(nonatomic) _Bool shouldAutoPlay; // @synthesize shouldAutoPlay=_shouldAutoPlay;
- (void).cxx_destruct;	// IMP=0x00000001008329c4
- (double)timeIntervalFromTime:(CDStruct_198678f7)arg1;	// IMP=0x0000000100831cb8
@property(readonly, nonatomic) double videoDuration;
- (double)elapsedTime;	// IMP=0x0000000100831b28
- (void)seekToPosition:(double)arg1;	// IMP=0x0000000100831a10
- (void)proceedToNextPlaybackState;	// IMP=0x00000001008319a4
- (void)pause;	// IMP=0x000000010083192c
- (void)play;	// IMP=0x0000000100831870
- (void)restart;	// IMP=0x0000000100831768
- (_Bool)isVideoReadyToPlay;	// IMP=0x0000000100831718
- (void)playerDidBecomeReady;	// IMP=0x000000010083162c
- (void)handlePlayerDidReachEndNotification:(id)arg1;	// IMP=0x0000000100831430
- (void)handlePlayerStatusChange:(id)arg1;	// IMP=0x0000000100831310
- (void)unregisterAnalyticsObservers;	// IMP=0x0000000100831250
- (void)registerAnalyticsObservers;	// IMP=0x0000000100830dac
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100830cec
- (void)unregisterObservers;	// IMP=0x0000000100830bf4
- (void)registerObservers;	// IMP=0x0000000100830ae8
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)loadVideo;	// IMP=0x0000000100830a34
- (void)performOnMain:(CDUnknownBlockType)arg1;	// IMP=0x00000001008309fc
- (void)configureVideoPlayerInSerialQueue;	// IMP=0x000000010083068c
- (void)configureVideoPlayer;	// IMP=0x00000001008305dc
- (void)prepareSubviewsWithPreviewImage:(id)arg1;	// IMP=0x00000001008303a0
- (void)dealloc;	// IMP=0x0000000100830340
- (id)initWithFrame:(struct CGRect)arg1 videoPlaybackConfiguration:(id)arg2 previewImage:(id)arg3 shouldLoadVideo:(_Bool)arg4;	// IMP=0x0000000100830158

@end


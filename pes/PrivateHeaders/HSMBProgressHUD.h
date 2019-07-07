//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSString, NSTimer, UIFont, UILabel;

@interface HSMBProgressHUD : UIView
{
    int mode;	// 8 = 0x8
    int animationType;	// 12 = 0xc
    SEL methodForExecution;	// 16 = 0x10
    id targetForExecution;	// 24 = 0x18
    id objectForExecution;	// 32 = 0x20
    _Bool useAnimation;	// 40 = 0x28
    float yOffset;	// 44 = 0x2c
    float xOffset;	// 48 = 0x30
    float width;	// 52 = 0x34
    float height;	// 56 = 0x38
    float margin;	// 60 = 0x3c
    _Bool dimBackground;	// 64 = 0x40
    _Bool taskInProgress;	// 65 = 0x41
    float graceTime;	// 68 = 0x44
    float minShowTime;	// 72 = 0x48
    NSTimer *graceTimer;	// 80 = 0x50
    NSTimer *minShowTimer;	// 88 = 0x58
    NSDate *showStarted;	// 96 = 0x60
    UIView *indicator;	// 104 = 0x68
    UILabel *label;	// 112 = 0x70
    UILabel *detailsLabel;	// 120 = 0x78
    float progress;	// 128 = 0x80
    id <HSMBProgressHUDDelegate> delegate;	// 136 = 0x88
    NSString *labelText;	// 144 = 0x90
    NSString *detailsLabelText;	// 152 = 0x98
    float opacity;	// 160 = 0xa0
    UIFont *labelFont;	// 168 = 0xa8
    UIFont *detailsLabelFont;	// 176 = 0xb0
    _Bool isFinished;	// 184 = 0xb8
    _Bool removeFromSuperViewOnHide;	// 185 = 0xb9
    UIView *customView;	// 192 = 0xc0
    struct CGAffineTransform rotationTransform;	// 200 = 0xc8
}

+ (_Bool)hideHUDForView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001013d8d38
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001013d8cb4
@property(retain) NSDate *showStarted; // @synthesize showStarted;
@property(retain) UIView *customView; // @synthesize customView;
@property _Bool removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide;
@property _Bool taskInProgress; // @synthesize taskInProgress;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer;
@property(retain) NSTimer *graceTimer; // @synthesize graceTimer;
@property float minShowTime; // @synthesize minShowTime;
@property float graceTime; // @synthesize graceTime;
@property _Bool dimBackground; // @synthesize dimBackground;
@property float margin; // @synthesize margin;
@property float yOffset; // @synthesize yOffset;
@property float xOffset; // @synthesize xOffset;
@property float height; // @synthesize height;
@property float width; // @synthesize width;
@property(retain) UIView *indicator; // @synthesize indicator;
@property(retain) UIFont *detailsLabelFont; // @synthesize detailsLabelFont;
@property(retain) UIFont *labelFont; // @synthesize labelFont;
@property float opacity; // @synthesize opacity;
@property id <HSMBProgressHUDDelegate> delegate; // @synthesize delegate;
@property int animationType; // @synthesize animationType;
- (void)setTransformForCurrentOrientation:(_Bool)arg1;	// IMP=0x00000001013da804
- (void)deviceOrientationDidChange:(id)arg1;	// IMP=0x00000001013da77c
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000001013da398
- (void)hideUsingAnimation:(_Bool)arg1;	// IMP=0x00000001013da228
- (void)showUsingAnimation:(_Bool)arg1;	// IMP=0x00000001013da048
- (void)cleanUp;	// IMP=0x00000001013d9fc8
- (void)done;	// IMP=0x00000001013d9edc
- (void)animationFinished:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;	// IMP=0x00000001013d9ed0
- (void)launchExecution;	// IMP=0x00000001013d9e34
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000001013d9d80
- (void)handleMinShowTimer:(id)arg1;	// IMP=0x00000001013d9d68
- (void)handleGraceTimer:(id)arg1;	// IMP=0x00000001013d9d08
- (void)hideDelayed:(id)arg1;	// IMP=0x00000001013d9ccc
- (void)hide:(_Bool)arg1 afterDelay:(double)arg2;	// IMP=0x00000001013d9c68
- (void)hide:(_Bool)arg1;	// IMP=0x00000001013d9b54
- (void)show:(_Bool)arg1;	// IMP=0x00000001013d9a90
- (void)layoutSubviews;	// IMP=0x00000001013d93c4
- (void)dealloc;	// IMP=0x00000001013d9278
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001013d8fc4
- (id)initWithView:(id)arg1;	// IMP=0x00000001013d8ed0
- (id)initWithWindow:(id)arg1;	// IMP=0x00000001013d8ec4
- (void)updateIndicators;	// IMP=0x00000001013d8b8c
- (void)updateProgress;	// IMP=0x00000001013d8b64
- (void)updateDetailsLabelText:(id)arg1;	// IMP=0x00000001013d8b08
- (void)updateLabelText:(id)arg1;	// IMP=0x00000001013d8aac
@property float progress;
@property(copy) NSString *detailsLabelText;
@property(copy) NSString *labelText;
@property int mode;

@end


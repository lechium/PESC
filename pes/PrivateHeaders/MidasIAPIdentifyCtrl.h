//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MidasIAPBaseViewCtrl.h"

#import "MidasIAPInputViewDelegate.h"

@class MidasCommunicator, MidasIAPInputView, MidasIAPPayOperation, NSMutableDictionary, NSString, UIButton, UILabel, UIView;

@interface MidasIAPIdentifyCtrl : MidasIAPBaseViewCtrl <MidasIAPInputViewDelegate>
{
    unsigned long long _idType;	// 8 = 0x8
    unsigned long long _provinceId;	// 16 = 0x10
    unsigned long long _cityId;	// 24 = 0x18
    MidasCommunicator *_comm;	// 32 = 0x20
    struct CGRect _focusRect;	// 40 = 0x28
    id _tipsBelowCtrl;	// 72 = 0x48
    double _oriScrollViewHeight;	// 80 = 0x50
    NSMutableDictionary *_dictOriFrame;	// 88 = 0x58
    _Bool _inited;	// 96 = 0x60
    UIView *_cornerBack;	// 104 = 0x68
    CDUnknownBlockType _checkBlock;	// 112 = 0x70
    MidasIAPPayOperation *_op;	// 120 = 0x78
    UILabel *_bodyLb;	// 128 = 0x80
    UILabel *_tailLb;	// 136 = 0x88
    UILabel *_tipsLb;	// 144 = 0x90
    MidasIAPInputView *_nameTv;	// 152 = 0x98
    MidasIAPInputView *_idTypeTv;	// 160 = 0xa0
    MidasIAPInputView *_idNumTv;	// 168 = 0xa8
    UIButton *_selBtn;	// 176 = 0xb0
    UIView *_selContainer;	// 184 = 0xb8
}

@property(nonatomic) __weak UIView *selContainer; // @synthesize selContainer=_selContainer;
@property(nonatomic) __weak UIButton *selBtn; // @synthesize selBtn=_selBtn;
@property(nonatomic) __weak MidasIAPInputView *idNumTv; // @synthesize idNumTv=_idNumTv;
@property(nonatomic) __weak MidasIAPInputView *idTypeTv; // @synthesize idTypeTv=_idTypeTv;
@property(nonatomic) __weak MidasIAPInputView *nameTv; // @synthesize nameTv=_nameTv;
@property(nonatomic) __weak UILabel *tipsLb; // @synthesize tipsLb=_tipsLb;
@property(nonatomic) __weak UILabel *tailLb; // @synthesize tailLb=_tailLb;
@property(nonatomic) __weak UILabel *bodyLb; // @synthesize bodyLb=_bodyLb;
@property(retain, nonatomic) MidasIAPPayOperation *op; // @synthesize op=_op;
@property(copy, nonatomic) CDUnknownBlockType checkBlock; // @synthesize checkBlock=_checkBlock;
- (void).cxx_destruct;	// IMP=0x0000000100565fec
- (void)inputViewWillReturn:(id)arg1;	// IMP=0x0000000100565d6c
- (void)inputViewDidLoseFocus:(id)arg1;	// IMP=0x0000000100565acc
- (void)inputViewWillOnFocus:(id)arg1;	// IMP=0x000000010056592c
- (void)onStatusBarOrientationChanged;	// IMP=0x0000000100565794
- (void)onCancel:(id)arg1;	// IMP=0x000000010056566c
- (void)onConfirm:(id)arg1;	// IMP=0x0000000100564f90
- (void)offsetChangeForKbShow:(float)arg1;	// IMP=0x0000000100564e9c
- (void)showProtocolTips;	// IMP=0x0000000100564d80
- (id)getProtocolString;	// IMP=0x0000000100564b20
- (id)getMessageString;	// IMP=0x00000001005648a0
- (void)onNavToProtocolPage;	// IMP=0x00000001005647d0
- (void)flashSelBtn:(_Bool)arg1;	// IMP=0x000000010056464c
- (void)clearTips;	// IMP=0x0000000100564344
- (void)showTips:(id)arg1 belowInput:(id)arg2;	// IMP=0x0000000100563cd8
- (void)resetAllInput;	// IMP=0x0000000100563bc8
- (void)onNetworkError:(long long)arg1;	// IMP=0x0000000100563b50
- (void)onFailCode:(long long)arg1 innerCode:(id)arg2 msg:(id)arg3 isNetworkFail:(_Bool)arg4;	// IMP=0x0000000100563628
- (void)onSuccess;	// IMP=0x000000010056320c
- (_Bool)checkProtocol;	// IMP=0x00000001005631c4
- (_Bool)checkLocation;	// IMP=0x00000001005631bc
- (_Bool)checkName;	// IMP=0x0000000100563114
- (_Bool)checkIdCardNum;	// IMP=0x0000000100562f4c
- (void)setIdType:(unsigned long long)arg1;	// IMP=0x0000000100562eb4
- (void)onSelBtn:(id)arg1;	// IMP=0x0000000100562e30
- (void)popUpIdTypeActionSheet;	// IMP=0x0000000100562ab0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100562a34
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100561ee8
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100561eb0
- (void)viewDidLoad;	// IMP=0x0000000100561444

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UIColor, UILabel;

@interface VKPlaceholderTextView : UITextView
{
    NSString *_placeholder;	// 8 = 0x8
    UIColor *_placeholderColor;	// 16 = 0x10
    UILabel *_placeholderLabel;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;	// IMP=0x0000000100b61560
- (void)layoutSubviews;	// IMP=0x0000000100b61450
- (double)measureHeightOfUITextView;	// IMP=0x0000000100b61104
- (void)setText:(id)arg1;	// IMP=0x0000000100b60c0c
- (void)textChanged:(id)arg1;	// IMP=0x0000000100b60af0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100b60a00
- (void)awakeFromNib;	// IMP=0x0000000100b608d0
- (void)dealloc;	// IMP=0x0000000100b60854

@end

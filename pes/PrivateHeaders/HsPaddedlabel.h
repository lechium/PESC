//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsLabel.h"

@interface HsPaddedlabel : HsLabel
{
    struct UIEdgeInsets _contentInset;	// 16 = 0x10
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000001014721b4
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x0000000101472124
- (void)initialiseDefaults;	// IMP=0x00000001014720ec
- (void)awakeFromNib;	// IMP=0x000000010147209c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000101472044
- (id)init;	// IMP=0x0000000101471fec

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HsWidget : NSObject
{
    id <HsWidgetMediator> _mediator;	// 8 = 0x8
}

@property(readonly, nonatomic) __weak id <HsWidgetMediator> mediator; // @synthesize mediator=_mediator;
- (void).cxx_destruct;	// IMP=0x0000000101371cec
- (void)notifyChanged;	// IMP=0x0000000101371c58
- (void)setMediator:(id)arg1;	// IMP=0x0000000101371c44

@end

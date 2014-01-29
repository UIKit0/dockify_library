/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

#import "ECEventHandling-Protocol.h"

@interface DOCKStackGoBackButtonLayer : CALayer <ECEventHandling>
{
    CALayer *_backgroundLayer;
    id _block;
    unsigned int _highlighted:1;
    unsigned int _trackingMouseDown:1;
}

@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) id block; // @synthesize block=_block;
- (BOOL)leftMouseDraggedExited:(id)arg1;
- (BOOL)leftMouseDraggedEntered:(id)arg1;
- (BOOL)leftMouseDragged:(id)arg1;
- (BOOL)leftMouseUp:(id)arg1;
- (BOOL)leftMouseDown:(id)arg1;
- (void)layoutSublayers;
@property(readonly, nonatomic) struct CGSize preferredSize; // @dynamic preferredSize;
- (void)dealloc;
- (id)init;

@end

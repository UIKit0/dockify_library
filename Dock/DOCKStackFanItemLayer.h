/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DOCKStackExpandedItemLayer.h"

@class CALayer;

@interface DOCKStackFanItemLayer : DOCKStackExpandedItemLayer
{
    CALayer *_shadowLayer;
    struct CGSize _preferredSize;
}

@property(readonly, nonatomic) struct CGSize preferredTextSize; // @synthesize preferredTextSize=_preferredSize;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
- (id)hitTest:(struct CGPoint)arg1;
- (void)layoutSublayers;
- (void)setScaleFactor:(float)arg1;
- (void)darkenForProgress:(BOOL)arg1;
- (CDStruct_caf9bca6)previewRect;
@property(readonly, nonatomic) struct CGPoint shadowLayerPosition; // @dynamic shadowLayerPosition;
@property(readonly, nonatomic) struct CGRect shadowLayerBounds; // @dynamic shadowLayerBounds;
@property(readonly, nonatomic) struct CGPoint textLayerPosition; // @dynamic textLayerPosition;
@property(readonly, nonatomic) struct CGRect textLayerBounds; // @dynamic textLayerBounds;
@property(readonly, nonatomic) struct CGColor *textBackgroundColor; // @dynamic textBackgroundColor;
@property(readonly, nonatomic) struct CGPoint textBackgroundLayerPosition; // @dynamic textBackgroundLayerPosition;
@property(readonly, nonatomic) struct CGRect textBackgroundLayerBounds; // @dynamic textBackgroundLayerBounds;
@property(readonly, nonatomic) struct CGPoint imageLayerPosition; // @dynamic imageLayerPosition;
@property(readonly, nonatomic) struct CGRect imageLayerBounds; // @dynamic imageLayerBounds;
- (void)dealloc;
- (id)initWithScaleFactor:(float)arg1;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class ECShadowTextLayer, NSString;

@interface WVWindowLabelLayer : CALayer
{
    ECShadowTextLayer *_textLayer;
}

@property(readonly, nonatomic) ECShadowTextLayer *textLayer; // @synthesize textLayer=_textLayer;
- (struct CGSize)preferredFrameSize;
- (void)layout;
@property(nonatomic) BOOL shadowHidden; // @dynamic shadowHidden;
@property(retain, nonatomic) NSString *string; // @dynamic string;
- (void)dealloc;
- (id)init;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DOCKStackGridLayer.h"

@interface DOCKStackListLayer : DOCKStackGridLayer
{
}

- (int)defaultPreferredItemSize;
- (BOOL)validPreferredItemSize:(int)arg1;
- (void)layout;
- (Class)stackAnimatorClass;
- (Class)stackItemLayerClass;
- (void)_expandTextOfItemLayer:(id)arg1;
- (struct CGRect)_expandedFrameWithSize:(struct CGSize)arg1 forStage:(struct CGRect)arg2 relativeToLayer:(id)arg3 withEdge:(double)arg4;
- (struct CGSize)_sizeForStage:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithStack:(id)arg1 usingLayerSource:(id)arg2;

@end


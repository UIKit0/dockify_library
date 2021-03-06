/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DOCKStackExpandedLayer.h"

@class NSMutableArray;

@interface DOCKStackFanLayer : DOCKStackExpandedLayer
{
    NSMutableArray *_itemLayers;
    unsigned long long _numberOfViewableItems;
}

- (unsigned long long)_visibleItemCount;
- (BOOL)keyDown:(id)arg1;
- (void)mouseEnteredItemLayer:(id)arg1 fromDrag:(BOOL)arg2;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)layout;
- (struct CGRect)expandedFrameForStage:(struct CGRect)arg1 relativeToLayer:(id)arg2 withEdge:(double)arg3;
- (unsigned long long)maximumViewableItems;
- (unsigned long long)itemIndexForExpandedItemLayer:(id)arg1;
- (id)itemLayersForRange:(struct _NSRange)arg1;
- (id)itemLayerForIndex:(unsigned long long)arg1;
- (Class)stackAnimatorClass;
- (Class)stackItemLayerClass;
- (struct _NSRange)actualItemRange;
- (struct _NSRange)visibleItemRange;
- (void)dealloc;
- (id)initWithStack:(id)arg1 usingLayerSource:(id)arg2;
- (unsigned char)axFocusedElementType;
- (struct __AXUIElement *)axCopyElementAtPoint:(struct CGPoint)arg1;
- (struct __AXUIElement *)axCopyFocusedElement;
- (void)axPostNotification:(struct __CFString *)arg1 withStackData:(CDStruct_5f224500 *)arg2;
- (void)axObserverDied:(void *)arg1 withStackData:(CDStruct_5f224500 *)arg2;
- (int)axRemoveObserver:(void *)arg1 notification:(struct __CFString *)arg2 withStackData:(CDStruct_5f224500 *)arg3;
- (int)axAddObserver:(void *)arg1 notification:(struct __CFString *)arg2 withStackData:(CDStruct_5f224500 *)arg3;
- (int)axPerformAction:(struct __CFString *)arg1 withStackData:(CDStruct_5f224500 *)arg2 usingHandler:(id)arg3;
- (int)axCopyActionDescription:(struct __CFString *)arg1 description:(const struct __CFString **)arg2 withStackData:(CDStruct_5f224500 *)arg3;
- (int)axCopyActionNames:(const struct __CFArray **)arg1 withStackData:(CDStruct_5f224500 *)arg2;
- (int)axIsAttributeSettable:(struct __CFString *)arg1 settable:(const struct __CFBoolean **)arg2 withStackData:(CDStruct_5f224500 *)arg3;
- (int)axSetAttributeValue:(struct __CFString *)arg1 value:(void *)arg2 withStackData:(CDStruct_5f224500 *)arg3;
- (int)axCopyAttributeValues:(struct __CFString *)arg1 index:(long long)arg2 maxValues:(long long)arg3 values:(const struct __CFArray **)arg4 withStackData:(CDStruct_5f224500 *)arg5;
- (int)axGetAttributeValueCount:(struct __CFString *)arg1 count:(long long *)arg2 withStackData:(CDStruct_5f224500 *)arg3;
- (int)axCopyAttributeValue:(struct __CFString *)arg1 value:(const void **)arg2 withStackData:(CDStruct_5f224500 *)arg3;
- (int)axCopyAttributeNames:(const struct __CFArray **)arg1 withStackData:(CDStruct_5f224500 *)arg2;

@end


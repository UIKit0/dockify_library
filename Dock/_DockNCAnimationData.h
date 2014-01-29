/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class _CGSSpace;

@interface _DockNCAnimationData : NSObject
{
    unsigned int *_transformWids;
    unsigned int _transformCount;
    unsigned int *_clipWids;
    unsigned int _clipCount;
    unsigned int *_orderWids;
    unsigned int _orderCount;
    double _centerWidth;
    BOOL _dockHidden;
    BOOL _windowsOrderedOn;
    _CGSSpace *_currentSpace;
    double _dockWidth;
    struct CGRect _displayBounds;
}

@property struct CGRect displayBounds; // @synthesize displayBounds=_displayBounds;
@property double dockWidth; // @synthesize dockWidth=_dockWidth;
@property(retain) _CGSSpace *currentSpace; // @synthesize currentSpace=_currentSpace;
@property BOOL windowsOrderedOn; // @synthesize windowsOrderedOn=_windowsOrderedOn;
@property BOOL dockHidden; // @synthesize dockHidden=_dockHidden;
@property double centerWidth; // @synthesize centerWidth=_centerWidth;
@property(readonly) unsigned int orderCount; // @synthesize orderCount=_orderCount;
@property(readonly) unsigned int *orderWids; // @synthesize orderWids=_orderWids;
@property(readonly) unsigned int clipCount; // @synthesize clipCount=_clipCount;
@property(readonly) unsigned int *clipWids; // @synthesize clipWids=_clipWids;
@property(readonly) unsigned int transformCount; // @synthesize transformCount=_transformCount;
@property(readonly) unsigned int *transformWids; // @synthesize transformWids=_transformWids;
- (void)setWindowsToOrderOn:(id)arg1;
- (void)setWindowToTransformAndClip:(id)arg1 notClippingWindows:(id)arg2;
- (void)dealloc;

@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "Springboard.h"

@class CALayer, NSArray, WALayerKitWindow, _CGSSpace;

@interface DBSpringboard : Springboard
{
    WALayerKitWindow *_window;
    WALayerKitWindow *_flyWindow;
    _CGSSpace *_flyWindowSpace;
    CALayer *_moreWidgetsLayer;
    CALayer *_textLayer;
    BOOL _mouseInMoreWidgets;
    BOOL _flyingIcon;
}

- (id)containerWindow;
- (id)alertPanelMessageForAction:(id)arg1 ofItem:(id)arg2;
- (void)didEndDeleting;
- (void)didBeginDeleting;
- (id)_makeMoreWidgetsLayer;
- (void)layout;
- (id)zoomFactorsPrefKey;
- (void)bounceDockIcon;
- (void)flyStoreIconComplete;
- (void)flyStoreIconBegin;
- (void)uninstallRunnable:(id)arg1 withResult:(id)arg2;
- (BOOL)handleRunnableOpen:(id)arg1 atURL:(id)arg2 fromFrame:(struct CGRect)arg3 toFrame:(struct CGRect *)arg4;
- (id)newDesktopLayer;
- (BOOL)leftMouseDraggedExited:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDraggedEntered:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDown:(id)arg1 inLayer:(id)arg2;
- (void)_makeMoreWidgetsLookPressed;
- (BOOL)leftMouseDown:(id)arg1;
- (void)scaleFactorChanged;
- (void)setEditing:(BOOL)arg1;
- (void)setDeleting:(BOOL)arg1;
- (unsigned int)springboardType;
@property(readonly, nonatomic) NSArray *allWidgets;
- (void)setVisible:(BOOL)arg1 slow:(BOOL)arg2;
- (int)defaultFilter;
- (BOOL)showsDock;
- (id)flyWindow;
- (void)dealloc;
- (id)init;

@end


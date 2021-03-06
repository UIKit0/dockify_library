/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CALayer, NSArray, NSObject<OS_dispatch_source>, WALayerKitWindow;

@interface WSSwitcher : NSObject
{
    unsigned int _cid;
    NSObject<OS_dispatch_source> *_timer;
    NSArray *_windows;
    long long _index;
    float _step;
    unsigned int _space;
    BOOL _enabled;
    BOOL _active;
    BOOL _registerFrontBack;
    BOOL _registerAllBack;
    float _visualDelay;
    WALayerKitWindow *_window;
    CALayer *_hiliteLayer;
    CALayer *_backgroundLayer;
    CDStruct_ffd51fb3 _frontWindowsKeyInfo;
    CDStruct_ffd51fb3 _allWindowsKeyInfo;
    int _mode;
}

@property(readonly, nonatomic) BOOL active; // @synthesize active=_active;
- (void)_updateHotKeyValues;
- (void)_resetWindows;
- (void)_handleEvents;
- (BOOL)_handleKeyEvent:(struct _CGSEventRecord)arg1 withKeyInfo:(CDStruct_ffd51fb3)arg2;
- (void)_moveRight;
- (void)_moveLeft;
- (void)_layoutWindows;
@property(nonatomic) BOOL enabled; // @dynamic enabled;
@property(readonly, nonatomic) BOOL running; // @dynamic running;
- (id)init;

@end


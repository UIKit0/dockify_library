/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ECCoverFlowActionHandling-Protocol.h"
#import "ECCoverFlowDataSource-Protocol.h"
#import "ECEventHandlingDelegate-Protocol.h"
#import "ECModalEventHandler-Protocol.h"
#import "WVNewExposeActionHandling-Protocol.h"
#import "WVRecentsDataSourceClient-Protocol.h"
#import "WVSpacesStripActionHandling-Protocol.h"

@class CALayer, ECCoverFlow, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSMutableString, NSObject<OS_dispatch_source>, Tile, WAWindow, WVDisplay, WVDragWindow, WVExposeSeparatorLayer, WVHotCorners, WVNewExposeWindowsLayer, WVSpace, _CGSSpace;

@interface WVExpose : NSObject <ECModalEventHandler, WVNewExposeActionHandling, ECCoverFlowDataSource, ECCoverFlowActionHandling, WVRecentsDataSourceClient, ECEventHandlingDelegate, WVSpacesStripActionHandling>
{
    unsigned char _currentMode;
    NSMutableArray *_scaledDesktopWindows;
    NSMutableArray *_shownWindows;
    NSMutableArray *_hiddenWindows;
    NSArray *_exposeLayers;
    NSMutableArray *_shownHiddenAppWindows;
    NSMutableArray *_shownWindowsOnDifferentSpace;
    _CGSSpace *_spaceAddedToWindowsOnDifferentSpace;
    NSMutableArray *_windowsPerSpacePerDisplay;
    NSMutableArray *_darkenedDesktops;
    WVHotCorners *_hotCorners;
    WVExposeSeparatorLayer *_separatorLayer;
    WAWindow *_hiddenDesktopIconWindow;
    NSArray *_displays;
    WVDisplay *_dockDisplay;
    _CGSSpace *_spacesStripSpace;
    _CGSSpace *_windowSpace;
    id <ECKeyboardNavigating> _currentNavigator;
    ECCoverFlow *_minimizedAndRecentsCoverFlow;
    NSArray *_minimizedWindows;
    NSMutableSet *_minimizedWindowsMaximizing;
    WAWindow *_windowToSelect;
    struct CPSProcessSerNum _currentPSN;
    Tile *_currentTile;
    unsigned char _backgroundMode;
    WAWindow *_previewWindow;
    int _previewOriginalSystemWindowLevel;
    BOOL _removingPreview;
    struct CGRect _previewWindowExposedFrame;
    struct CGSRegionObject *_previewWindowClipShape;
    void *_casNotification;
    NSMutableArray *_navigators;
    WVDragWindow *_dragWindow;
    struct CGRect _lastExposeWindowFrame;
    struct CGRect *_lastExposeWindowFramesPerDisplay;
    int _animationMode;
    double _minimizedHeight;
    unsigned long long _spaceBarDownTime;
    id <WVRecentsDataSource> _recentsDataSource;
    WVSpace *_spaceToSelect;
    WVSpace *_originalSpace;
    float _dragScaleFactor;
    double _dragFinalPosition;
    WVNewExposeWindowsLayer *_exposeWinodwsLayerHandlingEvents;
    NSObject<OS_dispatch_source> *_typeAheadTimer;
    NSObject<OS_dispatch_source> *_typeAheadSelectTimer;
    NSMutableString *_typeAheadString;
    unsigned char _typeAheadLastNumberOfCharacters;
    NSMutableArray *_typeAheadItems;
    unsigned int _axGenerationCount;
    NSMutableDictionary *_axObservers;
    float _animationDuration;
    double _blockModeChangeDurationEndTime;
    unsigned int _showPreviews:1;
    unsigned int _lastEventShouldBeHandledByDock:1;
    unsigned int _performingCoverFlowAction:1;
    unsigned int _switchSpacesInExpose:1;
    unsigned int _droppingWindows:1;
    unsigned int _exposeDragging:1;
    unsigned int _addingSpace:1;
    unsigned int _exitingOrEnteringInUniversalMode:1;
    unsigned int _showsFullscreenSpaces:1;
    unsigned int _exposeSpaceChangeFollowsSelection:1;
}

@property(nonatomic) unsigned char backgroundMode; // @synthesize backgroundMode=_backgroundMode;
@property(readonly, nonatomic) BOOL exposeDragging; // @synthesize exposeDragging=_exposeDragging;
@property(nonatomic) double blockModeChangeDurationEndTime; // @synthesize blockModeChangeDurationEndTime=_blockModeChangeDurationEndTime;
@property(readonly, nonatomic) WAWindow *previewWindow; // @synthesize previewWindow=_previewWindow;
@property(nonatomic) unsigned char mode; // @synthesize mode=_currentMode;
@property(readonly, nonatomic) WVDisplay *dockDisplay; // @synthesize dockDisplay=_dockDisplay;
@property(nonatomic) int animationMode; // @synthesize animationMode=_animationMode;
@property(readonly, nonatomic) WVHotCorners *hotCorners; // @synthesize hotCorners=_hotCorners;
@property(readonly, nonatomic) Tile *currentTile; // @synthesize currentTile=_currentTile;
@property(readonly, nonatomic) struct CPSProcessSerNum currentPSN; // @synthesize currentPSN=_currentPSN;
@property(retain, nonatomic) WAWindow *windowToSelect; // @synthesize windowToSelect=_windowToSelect;
- (id)_topSelectableWindowForSpace:(id)arg1;
- (void)_desktopPictureChanged:(id)arg1;
- (void)_exitWithSpace:(id)arg1;
- (void)_enterFromNonUserSpace:(unsigned long long)arg1;
- (id)_windowsPerDisplay:(id)arg1;
- (id)_windowsPerSpacePerDisplay:(id)arg1 tags:(int [2])arg2 clearTags:(int [2])arg3;
- (id)_windowsPerDisplayWithWindows:(id)arg1;
- (id)_bestDisplayForWindow:(id)arg1;
- (void)_removeHiddenWindowAnimation:(id)arg1;
- (void)_applyHiddenAnimation:(id)arg1 duration:(double)arg2;
- (void)_restartDockAnimation;
- (void)_postflightMinimizedWindow:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_preflightMinimizedWindow:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_springWindow:(id)arg1;
- (void)_cleanupDragWindow;
- (id)_navigatorWithSelection;
- (void)_moveToProcess:(unsigned char)arg1;
- (BOOL)_collapseAnyExposeClusters;
- (void)_revealWindowForShowDesktop:(unsigned int)arg1;
- (id)_getExposeWindowsLayerForWindows:(id)arg1 forSpace:(id)arg2 usingNewExpose:(BOOL)arg3;
- (id)_makeExposeLayerForWindows:(id)arg1 forSpace:(id)arg2 withFrame:(struct CGRect)arg3 forDisplay:(id)arg4 usingNewExpose:(BOOL)arg5;
- (void)_getExposeWindowsForSpace:(id)arg1 windowsToShow:(id)arg2 windowsToHide:(id)arg3 includeEverySpaceWindows:(BOOL)arg4;
- (id)_scaledDesktopWindowsForSpace:(id)arg1 withStageFrames:(struct CGRect *)arg2 immediate:(BOOL)arg3;
- (void)_switchExposeSpace:(id)arg1;
- (void)_switchExposeSpace:(id)arg1 setExposeWindows:(BOOL)arg2;
- (void)_changeMode:(unsigned char)arg1 frontCID:(unsigned int)arg2 relativeToLayer:(id)arg3;
- (void)performSpaceMove:(id)arg1 toIndex:(unsigned long long)arg2 sender:(id)arg3;
- (BOOL)acceptsDragToSpaceItem:(id)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (BOOL)performSpaceRemoveActionOnSpace:(id)arg1 sender:(id)arg2;
- (BOOL)spaceCanBeRemoved:(id)arg1 forStripLayer:(id)arg2;
- (BOOL)performSpaceAddActionForStripLayer:(id)arg1;
- (void)_addNewSpaceWithWindowsPerDisplay:(id)arg1;
- (BOOL)spaceCanBeAddedForStripLayer:(id)arg1;
- (void)performSpaceActionAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (void)darkenBackground:(BOOL)arg1 forExpose:(id)arg2;
- (void)windowExposeDrag:(id)arg1 dragCompleteForSender:(id)arg2;
- (BOOL)windowExposeDrag:(id)arg1 droppedAtLocation:(struct CGPoint)arg2 sender:(id)arg3;
- (void)_dropWindows:(id)arg1 intoSpaceLayer:(id)arg2 onDisplay:(id)arg3;
- (void)windowExposeDrag:(id)arg1 toLocation:(struct CGPoint)arg2 sender:(id)arg3;
- (id)_getSpacesItemLayerForDragWithMouseMouseLocation:(struct CGPoint)arg1 forExposeLayer:(id)arg2;
- (void)windowExposeDrag:(id)arg1 startedAtLocation:(struct CGPoint)arg2 sender:(id)arg3;
- (void)windowExposeWillStartDragAtLocation:(struct CGPoint)arg1 sender:(id)arg2;
- (BOOL)canExpandCluster:(id)arg1;
- (void)windowAtIndexSelected:(unsigned long long)arg1 sender:(id)arg2;
- (void)performActionOnCluster:(id)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (void)performWindowActionAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (void)coverFlowWillScroll:(id)arg1;
- (void)coverFlowItemSelectedAtIndex:(unsigned long long)arg1 sender:(id)arg2;
- (void)performCoverFlowActionAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (void)performCoverFlowActionAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 sender:(id)arg3 ignoreAlternate:(BOOL)arg4 changeMode:(BOOL)arg5;
- (id)coverFlowValueForKey:(id)arg1 withInfo:(id)arg2;
- (id)coverFlowValueForKey:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3;
- (unsigned long long)numberOfCoverFlowItems;
- (void)setRecentsValue:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3 withDataSource:(id)arg4;
- (void)recentsDataSourceInvalidatedForRange:(struct _NSRange)arg1 withDataSource:(id)arg2;
- (void)recentsDataSourceInvalidated:(id)arg1;
- (struct CGRect)convertRectToGlobal:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromGlobal:(struct CGPoint)arg1;
- (BOOL)handlesModalDragEvents;
- (void)modalEventProcessed;
@property(readonly, nonatomic) CALayer *modalEventLayer; // @dynamic modalEventLayer;
- (BOOL)gesture:(id)arg1;
- (BOOL)leftMouseUp:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDragged:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDragged:(id)arg1;
- (BOOL)leftMouseDown:(id)arg1 inLayer:(id)arg2;
- (BOOL)mouseExited:(id)arg1 inLayer:(id)arg2;
- (BOOL)mouseEntered:(id)arg1 inLayer:(id)arg2;
- (void)lostKeyFocus:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)flagsChanged:(id)arg1;
- (BOOL)keyUp:(id)arg1;
- (BOOL)keyDown:(id)arg1;
- (BOOL)leftMouseUp:(id)arg1;
- (BOOL)leftMouseDown:(id)arg1;
- (BOOL)scrollWheel:(id)arg1;
- (void)collapseClusterIfNecessary;
- (void)expandClusterUnderMouse;
- (void)leaveExposeIfNecessaryAndDoWorkAfter:(id)arg1;
- (void)switchExposeToPreviousSpace;
- (void)switchExposeToNextSpace;
- (void)switchExposeToUserSpace:(unsigned long long)arg1;
- (double)exitExposeToUserSpace;
- (void)removePreviewWindow:(id)arg1;
- (void)showPreviewForWindow:(id)arg1;
- (void)cancelExpose;
- (void)displayChanged;
- (void)dragEnded;
- (void)recaptureEventsIfNecessary:(struct _CGSEventRecord)arg1;
- (BOOL)handleClickWhenInShowDesktop:(struct _CGSEventRecord)arg1;
- (BOOL)handleEvent:(struct _CGSEventRecord)arg1;
- (void)maximizeWindow:(unsigned int)arg1 orderOp:(int)arg2 otherWindow:(unsigned int)arg3;
- (void)preflightMinimizedWindowsForMaximization:(const unsigned int *)arg1 orderOps:(const int *)arg2 otherWindows:(const unsigned int *)arg3 count:(unsigned int)arg4;
- (void)removeWindowsForPSN:(struct CPSProcessSerNum)arg1;
- (void)addWindowsForPSN:(struct CPSProcessSerNum)arg1;
- (void)showForTile:(id)arg1 allowSlow:(BOOL)arg2;
@property(readonly, nonatomic) BOOL isWindowsMode; // @dynamic isWindowsMode;
- (void)dealloc;
- (id)init;
- (unsigned int)windowWithExposeData:(CDStruct_5f224500 *)arg1;
- (CDStruct_bfd6d4ab)axElementDataForNavigator:(id)arg1;
- (struct __AXUIElement *)axCopyElementAtPoint:(struct CGPoint)arg1;
- (struct __AXUIElement *)axCopyFocusedElement;
- (struct __AXUIElement *)axCopyElement;
- (void)axPostNotification:(struct __CFString *)arg1 withExposeData:(CDStruct_5f224500 *)arg2;
- (void)_postNotification:(struct __CFString *)arg1 observerKey:(id)arg2 withExposeData:(CDStruct_5f224500 *)arg3;
- (void)axObserverDied:(void *)arg1 withExposeData:(CDStruct_5f224500 *)arg2;
- (int)axRemoveObserver:(void *)arg1 notification:(struct __CFString *)arg2 withExposeData:(CDStruct_5f224500 *)arg3;
- (int)_removeObserver:(void *)arg1 withObserverKey:(id)arg2;
- (int)axAddObserver:(void *)arg1 notification:(struct __CFString *)arg2 withExposeData:(CDStruct_5f224500 *)arg3;
- (int)_addObserver:(void *)arg1 withObserverKey:(id)arg2;
- (int)axPerformAction:(struct __CFString *)arg1 withExposeData:(CDStruct_5f224500 *)arg2;
- (int)axCopyActionDescription:(struct __CFString *)arg1 description:(const struct __CFString **)arg2 withExposeData:(CDStruct_5f224500 *)arg3;
- (int)axCopyActionNames:(const struct __CFArray **)arg1 withExposeData:(CDStruct_5f224500 *)arg2;
- (int)axIsAttributeSettable:(struct __CFString *)arg1 settable:(const struct __CFBoolean **)arg2 withExposeData:(CDStruct_5f224500 *)arg3;
- (int)axSetAttributeValue:(struct __CFString *)arg1 value:(void *)arg2 withExposeData:(CDStruct_5f224500 *)arg3;
- (int)axCopyAttributeValues:(struct __CFString *)arg1 index:(long long)arg2 maxValues:(long long)arg3 values:(const struct __CFArray **)arg4 withExposeData:(CDStruct_5f224500 *)arg5;
- (int)axGetAttributeValueCount:(struct __CFString *)arg1 count:(long long *)arg2 withExposeData:(CDStruct_5f224500 *)arg3;
- (int)axCopyAttributeValue:(struct __CFString *)arg1 value:(const void **)arg2 withExposeData:(CDStruct_5f224500 *)arg3;
- (int)axCopyAttributeNames:(const struct __CFArray **)arg1 withExposeData:(CDStruct_5f224500 *)arg2;
- (int)_validateExposeData:(CDStruct_5f224500 *)arg1;
- (id)_cellLayerWithExposeData:(CDStruct_5f224500 *)arg1;
- (id)_spacesStripLayerForIndex:(unsigned long long)arg1;
- (id)_windowsLayerForIndex:(unsigned long long)arg1;
- (unsigned long long)_indexForWindowsLayer:(id)arg1;
- (long long)_axGetIndexForSelection;

@end

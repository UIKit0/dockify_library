/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ECPager.h"

#import "ECAlertPanelDelegate-Protocol.h"
#import "ECEventHandling-Protocol.h"
#import "ECSBGridPagerSourceClient-Protocol.h"

@class CALayer, ECAlertPanel, ECEvent, ECSBDragCapture, ECSBGroup, ECSBGroupItemLayer, ECSBItem, ECSBPage, NSMutableArray;

@interface ECSBPager : ECPager <ECSBGridPagerSourceClient, ECAlertPanelDelegate, ECEventHandling>
{
    id <ECSBDelegate><ECSBDataSource><ECSBActionHandling> _handler;
    id <ECSBGridActionHandling> _gridActionHandler;
    ECSBPage *_pageForShownGroup;
    ECSBGroupItemLayer *_shownGroupItemLayer;
    ECSBGroup *_shownGroup;
    CALayer *_groupMaskLayer;
    NSMutableArray *_groupOpenedBlocks;
    NSMutableArray *_groupClosedBlocks;
    ECSBDragCapture *_dragCapture;
    ECSBGroupItemLayer *_lastNewGroupItemLayer;
    CALayer *_alertBackgroundLayer;
    ECAlertPanel *_alertPanel;
    ECSBItem *_deletionItem;
    ECEvent *_deletionEvent;
    ECSBItem *_selectedItem;
    ECSBItem *_draggedOverItem;
    NSMutableArray *_overflowItems;
    float _scaleFactor;
    unsigned int _editing:1;
    unsigned int _deleting:1;
    unsigned int _openingGroup:1;
    unsigned int _closingGroup:1;
    unsigned int _removingGroup:1;
    unsigned int _willBeOpeningGroup:1;
    unsigned int _supportsGroups:1;
    unsigned int _controlLayerWasHidden:1;
    unsigned int _restrictDragsToPager:1;
    unsigned int _filtering:1;
}

@property(retain, nonatomic) ECSBItem *draggedOverItem; // @synthesize draggedOverItem=_draggedOverItem;
@property(retain, nonatomic) ECSBItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic, getter=isFiltering) BOOL filtering; // @synthesize filtering=_filtering;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) BOOL restrictDragsToPager; // @synthesize restrictDragsToPager=_restrictDragsToPager;
@property(nonatomic) BOOL supportsGroups; // @synthesize supportsGroups=_supportsGroups;
@property(nonatomic) ECSBGroupItemLayer *lastNewGroupItemLayer; // @synthesize lastNewGroupItemLayer=_lastNewGroupItemLayer;
@property(retain, nonatomic) ECSBDragCapture *dragCapture; // @synthesize dragCapture=_dragCapture;
@property(readonly, nonatomic) ECSBGroupItemLayer *shownGroupItemLayer; // @synthesize shownGroupItemLayer=_shownGroupItemLayer;
@property(readonly, nonatomic) ECSBGroup *shownGroup; // @synthesize shownGroup=_shownGroup;
@property(retain, nonatomic) NSMutableArray *groupOpenedBlocks; // @synthesize groupOpenedBlocks=_groupOpenedBlocks;
@property(retain, nonatomic) NSMutableArray *groupClosedBlocks; // @synthesize groupClosedBlocks=_groupClosedBlocks;
@property(nonatomic) BOOL willBeOpeningGroup; // @synthesize willBeOpeningGroup=_willBeOpeningGroup;
@property(nonatomic) BOOL removingGroup; // @synthesize removingGroup=_removingGroup;
@property(readonly, nonatomic) BOOL closingGroup; // @synthesize closingGroup=_closingGroup;
@property(readonly, nonatomic) BOOL openingGroup; // @synthesize openingGroup=_openingGroup;
@property(nonatomic) id <ECSBGridActionHandling> gridActionHandler; // @synthesize gridActionHandler=_gridActionHandler;
@property(nonatomic) id <ECSBDelegate><ECSBDataSource><ECSBActionHandling> handler; // @synthesize handler=_handler;
- (void)setGridValue:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3 inGroupAtIndex:(unsigned long long)arg4 forPageAtIndex:(unsigned long long)arg5;
- (void)setGridValue:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3 forPageAtIndex:(unsigned long long)arg4;
- (void)gridDataSourceInvalidatedAtRange:(struct _NSRange)arg1 inGroupAtIndex:(unsigned long long)arg2 forPageAtIndex:(unsigned long long)arg3;
- (void)gridDataSourceInvalidatedAtRange:(struct _NSRange)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)gridDataSourceInvalidatedForPageAtIndex:(unsigned long long)arg1;
- (id)layerForCenteringOfAlertPanel:(id)arg1;
- (void)alertPanel:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertPanel:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentAlertPanel:(id)arg1;
- (void)willPresentAlertPanel:(id)arg1;
- (void)alertPanelCancel:(id)arg1;
- (void)alertPanel:(id)arg1 clickedButtonIndex:(long long)arg2;
- (BOOL)navigate:(int)arg1 withEvent:(id)arg2;
- (BOOL)keyUp:(id)arg1;
- (BOOL)keyDown:(id)arg1;
- (void)didChangeToPageIndex:(unsigned long long)arg1;
- (void)willChangeToPageIndex:(unsigned long long)arg1;
- (void)reloadItemContents:(BOOL)arg1;
- (void)purgeItemContents:(BOOL)arg1;
- (void)presentDeletionPanelForItem:(id)arg1 withEvent:(id)arg2;
- (void)cleanupPageIndices;
- (void)removeEmptyPages;
- (void)processOverflows;
- (void)cleanupOverflowFromPage:(id)arg1;
- (void)removeAllGroupClosedBlocks;
- (void)removeAllGroupOpenedBlocks;
- (void)addGroupClosedBlock:(id)arg1;
- (void)addGroupOpenedBlock:(id)arg1;
- (void)hideGroup;
- (void)showGroupForItemLayer:(id)arg1 onPage:(id)arg2;
@property(readonly, nonatomic) BOOL canScroll; // @dynamic canScroll;
@property(readonly, nonatomic) BOOL dragging; // @dynamic dragging;
@property(readonly, nonatomic) BOOL makingGroup; // @dynamic makingGroup;
- (Class)pagerLayerClass;
@property(nonatomic) BOOL groupShown; // @dynamic groupShown;
@property(nonatomic) BOOL deleting; // @synthesize deleting=_deleting;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
- (void)dealloc;
- (id)initWithPagerSource:(id)arg1 scaleFactor:(float)arg2;

@end

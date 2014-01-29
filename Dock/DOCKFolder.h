/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DOCKStackActionHandling-Protocol.h"
#import "DOCKStackExpandedDataSource-Protocol.h"

@class DOCKFolderTile, ECDirectory, NSArray, NSMutableDictionary;

@interface DOCKFolder : NSObject <DOCKStackActionHandling, DOCKStackExpandedDataSource>
{
    NSArray *_files;
    ECDirectory *_directory;
    NSArray *_sortedTypeAheadArray;
    DOCKFolderTile *_folderTile;
    NSMutableDictionary *_fileNameToProgress;
    struct __CFDictionary *_expandedCache;
    unsigned int _expandedCacheGenerationCount;
    unsigned long long _subdirectoryParentIndex;
}

@property(readonly, nonatomic) ECDirectory *directory; // @synthesize directory=_directory;
- (void)invalidateExpandedStackCache;
- (id)expandedStackValueForKey:(id)arg1 withInfo:(id)arg2;
- (id)expandedStackValueForKey:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3 maximumViewableItems:(unsigned long long)arg4;
- (unsigned long long)numberOfExpandedStackItems;
- (void)stackDidClose;
- (void)endStackTypeAhead;
- (unsigned long long)indexForStackTypeAhead:(id)arg1;
- (void)beginStackTypeAhead:(id)arg1;
- (BOOL)prepareForStackDrag:(struct OpaqueCoreDrag *)arg1 atIndex:(unsigned long long)arg2 sender:(id)arg3;
- (BOOL)performStackActionAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (void)_updateFile:(id)arg1;
- (id)_expandedImageValueAtIndex:(unsigned long long)arg1 file:(id)arg2 withItemInfo:(id)arg3;
- (void)_fetchIconForFile:(id)arg1 atIndex:(unsigned long long)arg2 withSize:(unsigned long long)arg3 andScaleFactor:(float)arg4 withGenerationCount:(unsigned int)arg5;
- (void)_setExpandedPreviewImageAndCache:(struct CGImage *)arg1 atIndex:(unsigned long long)arg2 withIconSize:(unsigned long long)arg3 forNodeID:(unsigned int)arg4 withGenerationCount:(unsigned int)arg5;
- (void)updateFile:(id)arg1;
- (void)setProgress:(float)arg1 cancelable:(BOOL)arg2 forFile:(id)arg3;
- (void)createSortedFiles;
- (void)invalidate;
- (void)dealloc;
- (id)folderWithSubdirectory:(id)arg1;
- (id)initWithDirectory:(id)arg1 folderTile:(id)arg2;

@end

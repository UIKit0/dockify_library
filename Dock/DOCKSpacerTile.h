/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "Tile.h"

@interface DOCKSpacerTile : Tile
{
    int _type;
}

+ (void)updateSpacerUnits;
@property(nonatomic) int type; // @synthesize type=_type;
- (struct __CFString *)typeString;
- (void *)copyTilePlist;
- (struct __CFDictionary *)copyInstallDictionary:(int)arg1;
- (struct OpaqueMenuRef *)createMenu:(void *)arg1 options:(int)arg2;
- (void)update;
- (void)dealloc;
- (id)init;

@end


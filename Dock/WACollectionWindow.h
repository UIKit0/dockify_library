/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WAWindow.h"

@class NSMutableArray;

@interface WACollectionWindow : WAWindow
{
    NSMutableArray *_descendents;
    struct CGRect _unionFrame;
    struct CGRect _realSystemFrame;
    unsigned int _location;
}

@property(readonly, nonatomic) WAWindow *lowestWindow; // @dynamic lowestWindow;
- (BOOL)isRepositionableInSpaces;
- (void)order:(int)arg1 otherWindow:(unsigned int)arg2;
- (void)bringToFront;
- (void)setSystemWindowLevelImmediate:(int)arg1 withOptions:(int)arg2;
- (void)clearSystemWindowLevel:(BOOL)arg1;
- (void)setSystemWindowLevel:(int)arg1;
- (id)windows;
- (id)descendents;
- (struct CGRect)realSystemFrame;
- (void)setSystemClipShape:(struct CGSRegionObject *)arg1;
- (void)setFiltered:(BOOL)arg1;
- (void)setBrightness:(float)arg1;
- (void)setSystemAlpha:(float)arg1 from:(float)arg2;
- (void)setSystemAlphaImmediate:(float)arg1;
- (void)setSystemAlpha:(float)arg1;
- (void)setSystemTranslation:(struct CGPoint)arg1 from:(struct CGPoint)arg2;
- (void)setSystemTranslation:(struct CGPoint)arg1;
- (void)setSystemFrame:(struct CGRect)arg1 from:(struct CGRect)arg2;
- (void)setSystemTransform:(struct CGAffineTransform)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (void)setSystemFrameImmediate:(struct CGRect)arg1;
- (void)setSystemFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (id)description;
- (void)dealloc;
- (id)initWithCGSWindow:(unsigned int)arg1 descendents:(unsigned int *)arg2 descendentsCount:(unsigned int)arg3 type:(unsigned char)arg4;

@end

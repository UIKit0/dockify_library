/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WVExposeCellLayer.h"

@class WVExposeCluster;

@interface WVNewExposeCellLayer : WVExposeCellLayer
{
    WVExposeCluster *_cluster;
}

@property(readonly, nonatomic) WVExposeCluster *cluster; // @synthesize cluster=_cluster;
- (void)setWindow:(id)arg1;
- (id)initWithRootWindow:(id)arg1 andCluster:(id)arg2;

@end

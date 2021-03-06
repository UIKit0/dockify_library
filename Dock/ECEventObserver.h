/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ECEventObserver : NSObject
{
    id _block;
    unsigned char _stage;
    id _session;
    int _type;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned char stage; // @synthesize stage=_stage;
- (void)invalidate;
- (void)perform:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 stage:(unsigned char)arg2 type:(int)arg3 andBlock:(id)arg4;

@end


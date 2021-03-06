/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CAContext;

@interface WVWindowProxy : NSObject
{
    CAContext *_context;
    unsigned int _sid;
    unsigned int _wid;
    unsigned int _widParent;
}

+ (id)proxyWithWID:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int wid; // @synthesize wid=_wid;
- (id)description;
- (void)hide;
- (void)show;
- (void)dealloc;
- (id)initWithWID:(unsigned int)arg1;

@end


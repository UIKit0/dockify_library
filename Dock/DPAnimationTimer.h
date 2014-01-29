/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_source>;

@interface DPAnimationTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    NSMutableSet *_desktopPictures;
    float _seconds;
    BOOL _suspended;
}

@property(nonatomic) BOOL suspended; // @synthesize suspended=_suspended;
- (void)invalidate;
- (BOOL)removeDesktopPicture:(id)arg1;
- (void)addDesktopPicture:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithSeconds:(float)arg1 desktopPicture:(id)arg2 callback:(id)arg3;

@end

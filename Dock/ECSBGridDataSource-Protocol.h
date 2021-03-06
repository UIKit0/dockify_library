/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol ECSBGridDataSource <NSObject>
- (id)gridValueForKey:(id)arg1 withInfo:(id)arg2;
- (id)gridValueForKey:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3;
- (unsigned long long)numberOfGridItems;

@optional
- (void)invalidateGridCache;
@end


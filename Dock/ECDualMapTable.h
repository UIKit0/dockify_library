/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ECDualMapTable : NSObject
{
    struct __CFDictionary *_keyTable;
    struct __CFDictionary *_valueTable;
}

- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForValue:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithRetain:(BOOL)arg1 retainValue:(BOOL)arg2;

@end


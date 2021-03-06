/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DOCKStack;

@interface DOCKStackAnimator : NSObject
{
    DOCKStack *_stack;
    unsigned char _maxCollapsedItems;
    unsigned char _state;
}

@property(readonly, nonatomic) DOCKStack *stack; // @synthesize stack=_stack;
- (void)collapse:(id)arg1 toCollapsedLayer:(id)arg2;
- (void)expand:(id)arg1 fromCollapsedLayer:(id)arg2;
- (void)dealloc;
- (id)initWithStack:(id)arg1 andMaxNumberOfCollapsedItems:(unsigned char)arg2;

@end


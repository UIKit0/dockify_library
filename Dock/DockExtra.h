/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DockExtra-Protocol.h"

@class DockExtraServer, ECStatusLabelDescription;

@interface DockExtra : NSObject <DockExtra>
{
    DockExtraServer *_server;
    id <DOCKExtraDelegate> _delegate;
    id _context;
    BOOL _invalidated;
}

@property(nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) id <DOCKExtraDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DockExtraServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) struct CGImage *customIcon;
@property(readonly, nonatomic) ECStatusLabelDescription *statusLabel;
@property(readonly, nonatomic) BOOL hasMenu;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 context:(id)arg2;

@end


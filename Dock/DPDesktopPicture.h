/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DPDesktopWindow-Protocol.h"

@class CAContext, CALayer, DPColorSpace, DPPictureInfo, DPSharedDesktopImage, _CGSSpace;

@interface DPDesktopPicture : NSObject <DPDesktopWindow>
{
    CAContext *_context;
    unsigned int _sid;
    CALayer *_layer;
    CALayer *_desktopLayer;
    unsigned int _wid;
    _CGSSpace *_space;
    DPPictureInfo *_pictureInfo;
    CALayer *_pictureLayer;
    CALayer *_gradientLayer;
    struct CGRect _frame;
    DPColorSpace *_colorSpace;
    DPSharedDesktopImage *_sharedImage;
    float _surfaceResolution;
    BOOL _sleeping;
    BOOL _mirrored;
    BOOL _scaled;
    BOOL _ordered;
    BOOL _darkened;
    BOOL _hasGradient;
}

@property(nonatomic) BOOL darkened; // @synthesize darkened=_darkened;
@property(retain, nonatomic) DPColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) BOOL mirrored; // @synthesize mirrored=_mirrored;
@property(retain, nonatomic) DPSharedDesktopImage *sharedImage; // @synthesize sharedImage=_sharedImage;
@property(nonatomic) BOOL sleeping; // @synthesize sleeping=_sleeping;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) unsigned int wid; // @synthesize wid=_wid;
@property(retain, nonatomic) DPPictureInfo *pictureInfo; // @synthesize pictureInfo=_pictureInfo;
- (void)_orderWindowOnscreen;
- (id)description;
- (void)clearScale;
- (void)scaleDesktopToRect:(struct CGRect)arg1;
- (void)dumpLayerTree:(id)arg1;
- (void)forceShowForFailure;
- (BOOL)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL isReady; // @dynamic isReady;
@property(readonly, nonatomic) BOOL isRenderable; // @dynamic isRenderable;
@property(readonly, nonatomic) CALayer *fullsizedLayer; // @dynamic fullsizedLayer;
@property(readonly, nonatomic) CALayer *miniLayer; // @dynamic miniLayer;
- (void)dealloc;
- (id)initWithRect:(struct CGRect)arg1 pictureInfo:(id)arg2 space:(id)arg3 colorSpace:(id)arg4 mirrored:(BOOL)arg5;

@end


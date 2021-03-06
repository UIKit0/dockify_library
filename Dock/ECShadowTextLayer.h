/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ECTextLayer.h"

@interface ECShadowTextLayer : ECTextLayer
{
    struct CGColor *_textShadowColor;
    struct CGSize _textShadowOffset;
    BOOL _textShadowHidden;
    double _cachedHeight;
    double _textShadowBlur;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property(nonatomic) BOOL textShadowHidden; // @synthesize textShadowHidden=_textShadowHidden;
@property(nonatomic) double textShadowBlur; // @synthesize textShadowBlur=_textShadowBlur;
@property(nonatomic) struct CGSize textShadowOffset; // @synthesize textShadowOffset=_textShadowOffset;
@property(nonatomic) struct CGColor *textShadowColor; // @synthesize textShadowColor=_textShadowColor;
- (struct CGSize)preferredFrameSize;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFont:(void *)arg1;
- (void)dealloc;
- (id)init;

@end


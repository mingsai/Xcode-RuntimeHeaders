/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class CALayer, CATextLayer, NSString;

// Not exported
@interface GPURenderBufferBezeledLabel : NSView
{
    CALayer *_parentLayer;
    CALayer *_backgroundLayer;
    NSString *_displayedText;
    struct CGSize _displayedTextSize;
    CATextLayer *_textLayer;
    double _opacity;
    struct CGPoint _normalizedPosition;
}

@property(nonatomic) struct CGPoint normalizedPosition; // @synthesize normalizedPosition=_normalizedPosition;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) NSString *displayedText; // @synthesize displayedText=_displayedText;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)fadeToOpacity:(double)arg1 overTime:(double)arg2;
- (void)layout;
- (void)viewDidChangeBackingProperties;
- (long long)tag;
- (void)dealloc;
- (void)viewDidMoveToSuperview;
- (id)makeBackingLayer;
- (void)_setupLayers;
- (void)_buildLayerTree:(id)arg1;
- (void)_applyNormalizedPosition;
- (double)_saturate:(double)arg1;

@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DYResource-Protocol.h"

@class NSData;

@protocol DYRenderBuffer <DYResource>
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) BOOL flipped;
@property(readonly, nonatomic) int numSamples;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
@property(readonly, nonatomic) unsigned int format;
@end

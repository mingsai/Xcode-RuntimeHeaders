/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface GPUFramebufferAttachmentInfo : NSObject
{
    unsigned int _objectType;
    unsigned int _textureLevel;
    unsigned int _textureLayer;
    unsigned int _textureCubemapFace;
}

@property(readonly, nonatomic) unsigned int textureCubemapFace; // @synthesize textureCubemapFace=_textureCubemapFace;
@property(readonly, nonatomic) unsigned int textureLayer; // @synthesize textureLayer=_textureLayer;
@property(readonly, nonatomic) unsigned int textureLevel; // @synthesize textureLevel=_textureLevel;
@property(readonly, nonatomic) unsigned int objectType; // @synthesize objectType=_objectType;
- (id)initWithAttachmentEnum:(unsigned int)arg1 stateMirror:(id)arg2;

@end

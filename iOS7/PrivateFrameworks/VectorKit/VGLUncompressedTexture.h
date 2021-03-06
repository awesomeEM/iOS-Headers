/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLTexture.h>

// Not exported
@interface VGLUncompressedTexture : VGLTexture
{
    struct CGImage *_image;
    char *_imageData;
    unsigned int _pixelFormat;
    unsigned int _colorFormat;
    struct CGImageBlockSet *_blockSetRef;
    _Bool _fastPath;
}

- (BRectImp_7721609a)textureCoordinateRect:(struct CGRect)arg1;
- (_Bool)isFlipped;
- (_Bool)loadTexture;
- (_Bool)decodeTexture;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1;

@end


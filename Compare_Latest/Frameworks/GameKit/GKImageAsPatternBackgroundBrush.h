/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKImageBrush.h>

@class UIImage;

@interface GKImageAsPatternBackgroundBrush : GKImageBrush
{
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (void)dealloc;

@end

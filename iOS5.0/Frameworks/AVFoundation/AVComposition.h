/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAsset.h>

#import "NSMutableCopying-Protocol.h"

@class AVCompositionInternal, NSArray;

@interface AVComposition : AVAsset <NSMutableCopying>
{
    AVCompositionInternal *_priv;
}

+ (void)initialize;
- (long)_createEmptyMutableCompositionIfNeeded;
- (id)_initWithComposition:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (id)_assetInspector;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_newTrackForIndex:(long)arg1;
- (id)_mutableTracks;
@property(readonly, nonatomic) NSArray *tracks;
@property(readonly, nonatomic) struct CGSize naturalSize;
- (void)_setNaturalSize:(struct CGSize)arg1;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedAsset.h>

@class NSString, UIImage;

@interface PLManagedAsset (Additions)
+ (struct CGImage *)newUnrotatedImageWithSize:(struct CGSize)arg1 originalImage:(struct CGImage *)arg2 imageOrientation:(int)arg3;
+ (int)landscapeScrubberThumbnailFormat;
+ (int)portraitScrubberThumbnailFormat;
+ (int)indexSheetFormat;
+ (int)posterThumbnailFormat;
+ (int)thumbnailFormat;
+ (int)fullSizeImageFormat;
+ (id)preferredFileExtensionForType:(id)arg1;
@property(readonly, nonatomic) UIImage *wallpaperFullScreenImage;
@property(readonly, nonatomic) NSString *textBadgeString;
- (void)copyToPasteboard;
- (id)largestAvailableDataRepresentationAndType:(id *)arg1;
@property(readonly, nonatomic) BOOL hasFullSizeImage;
- (id)newLowResolutionFullScreenImage;
- (id)newFullSizeImage;
- (id)newFullSizeImageForImagePickerClient;
- (id)newFullScreenImage:(const struct __CFDictionary **)arg1;
- (id)indexSheetImage;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary **)arg2;
- (id)imageWithFormat:(int)arg1;
- (id)mimeTypeForService:(id)arg1;
- (id)fileExtensionForService:(id)arg1;
@end


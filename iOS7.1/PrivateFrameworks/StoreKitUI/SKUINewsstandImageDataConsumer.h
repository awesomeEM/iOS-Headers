//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIImageDataConsumer.h>

#import "NSCopying.h"

@class SKUIColorScheme, UIColor;

@interface SKUINewsstandImageDataConsumer : SKUIImageDataConsumer <NSCopying>
{
    UIColor *_backgroundColor;
    SKUIColorScheme *_colorScheme;
    struct CGSize _iconSize;
    int _bindingEdge;
    int _bindingType;
}

+ (id)wishlistConsumer;
+ (id)smartBannerConsumer;
+ (id)giftResultConsumer;
+ (id)giftThemeConsumer;
+ (id)giftComposeConsumer;
+ (id)purchasedConsumer;
+ (id)updatesConsumer;
+ (id)chartsConsumer;
+ (id)mixedChartsConsumer;
+ (id)lockupConsumerWithSize:(int)arg1;
+ (id)cardConsumer;
+ (id)newsstandSwooshConsumer;
+ (id)swooshConsumer;
+ (id)roomConsumer;
+ (id)newsstandRoomConsumer;
+ (id)productPageConsumer;
+ (id)consumerWithSize:(struct CGSize)arg1;
@property(nonatomic) int bindingType; // @synthesize bindingType=_bindingType;
@property(nonatomic) int bindingEdge; // @synthesize bindingEdge=_bindingEdge;
@property(readonly, nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)_borderImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1;
- (id)imageForSize:(struct CGSize)arg1;

@end


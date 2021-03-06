/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKBShape.h>

#import "NSCoding-Protocol.h"
#import "UIKBCacheKey-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface UIKBKeyboard : UIKBShape <NSCoding, UIKBCacheKey>
{
    NSString *m_name;
    NSString *m_visualStyle;
    NSString *m_layout;
    NSMutableArray *m_keyplanes;
    NSMutableDictionary *m_keyCache;
    NSMutableDictionary *m_keysetCache;
}

+ (id)keyboard;
@property(retain, nonatomic) NSMutableDictionary *keysetCache; // @synthesize keysetCache=m_keysetCache;
@property(retain, nonatomic) NSDictionary *keyCache; // @synthesize keyCache=m_keyCache;
@property(retain, nonatomic) NSArray *keyplanes; // @synthesize keyplanes=m_keyplanes;
@property(retain, nonatomic) NSString *visualStyle; // @synthesize visualStyle=m_visualStyle;
@property(retain, nonatomic) NSString *name; // @synthesize name=m_name;
- (id)keyplaneForKey:(id)arg1;
- (id)currentKeyplanes;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)layout;
- (id)description;
- (void)addKeyplane:(id)arg1;
- (id)keyplaneWithName:(id)arg1;
- (void)makeLikeOther:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cachedKeysByKeyName:(id)arg1 onKeyplane:(id)arg2;
- (void)cacheKey:(id)arg1 onKeyplane:(id)arg2;
@property(readonly, nonatomic) NSString *layoutName;
- (void)dealloc;
- (id)init;

@end


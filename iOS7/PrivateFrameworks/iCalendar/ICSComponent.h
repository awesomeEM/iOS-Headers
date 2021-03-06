/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ICSWriting-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface ICSComponent : NSObject <ICSWriting>
{
    NSMutableDictionary *_properties;
    NSMutableArray *_components;
}

+ (id)name;
+ (id)makeUID;
+ (int)statusFromString:(id)arg1;
+ (id)stringFromStatus:(int)arg1;
@property(retain) NSArray *components; // @synthesize components=_components;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (_Bool)ignorePropertyWithName:(id)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)dealloc;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (void)setProperties:(id)arg1 forName:(id)arg2;
- (id)propertiesForName:(id)arg1;
- (void)removePropertiesForName:(id)arg1;
- (_Bool)validate:(id *)arg1;
- (id)debugDescription;
- (id)init;

@end


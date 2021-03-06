//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary;

@interface RadioGetTracksResponse : NSObject
{
    NSDate *_expirationDate;
    NSDictionary *_responseDictionary;
}

@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void).cxx_destruct;
- (id)_tracksForStationKey:(id)arg1;
@property(readonly, nonatomic) NSArray *unusedKBSyncStrings;
- (id)tracksForStationHash:(id)arg1;
- (id)tracksForStationID:(long long)arg1;
- (id)tracksForStation:(id)arg1;
@property(readonly, nonatomic) int tracklistActionType;
@property(readonly, nonatomic) NSDate *skipDate;
@property(readonly, nonatomic) BOOL shouldIncrementSkipCount;
@property(readonly, nonatomic) unsigned long long globalVersion;
- (id)initWithResponseDictionary:(id)arg1;

@end


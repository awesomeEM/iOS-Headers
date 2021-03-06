//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface PDAutomaticGroup : NSObject
{
    NSString *_passTypeID;
    NSString *_groupingID;
    int _passStyle;
    NSDate *_minDate;
    NSDate *_maxDate;
    NSDate *_ingestedDate;
}

+ (id)automaticGroupWithGroupingProfile:(id)arg1;
@property(retain, nonatomic) NSDate *ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property(retain, nonatomic) NSDate *maxDate; // @synthesize maxDate=_maxDate;
@property(retain, nonatomic) NSDate *minDate; // @synthesize minDate=_minDate;
@property(nonatomic) int passStyle; // @synthesize passStyle=_passStyle;
@property(copy, nonatomic) NSString *groupingID; // @synthesize groupingID=_groupingID;
@property(copy, nonatomic) NSString *passTypeID; // @synthesize passTypeID=_passTypeID;
- (BOOL)_canAcceptDate:(id)arg1 withLeeway:(double)arg2;
- (BOOL)_dateIsAcceptable:(id)arg1;
- (void)addPassWithGroupingProfile:(id)arg1;
- (void)dealloc;

@end


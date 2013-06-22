/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject
{
    ChartLabelInfo *_yAxisLabelInfo;
    NSMutableArray *_monthLabelInfoArrays;
    NSMutableArray *_integerLabelInfoArray;
    BOOL _use24hrTime;
}

+ (struct __CFString *)_CFDateFormatterPropertyForMonthLabelLength:(int)arg1;
+ (id)chartLabelFont;
+ (void)clearSharedManager;
+ (id)sharedLabelInfoManager;
- (void).cxx_destruct;
- (void)resetLocale;
- (id)monthLabelInfoArrayForLabelLength:(int)arg1;
- (BOOL)use24hrTime;
- (id)labelInfoWithUnsignedInteger:(unsigned int)arg1;
- (id)labelInfoForYAxis;
- (id)labelInfoWithString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

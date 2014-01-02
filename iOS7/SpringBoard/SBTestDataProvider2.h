/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBRemoteDataProvider-Protocol.h"

@class BBDataProviderConnection, BBDataProviderProxy;

@interface SBTestDataProvider2 : NSObject <BBRemoteDataProvider>
{
    BBDataProviderConnection *_connection;
    BBDataProviderProxy *_proxy;
}

+ (id)sharedInstance;
- (void)noteSectionInfoDidChange:(id)arg1;
- (float)attachmentAspectRatioForRecordID:(id)arg1;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (id)sectionParameters;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)sortDescriptors;
- (id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
- (id)sectionDisplayName;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (void)publish;
- (id)init;

@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SUClientController.h"

#import "MCProfileConnectionObserver-Protocol.h"
#import "SSDownloadManagerObserver-Protocol.h"

@interface MusicStoreClientController : SUClientController <MCProfileConnectionObserver, SSDownloadManagerObserver>
{
    _Bool _hasContinueSearchCapability;
    _Bool _isUsingNetwork;
}

+ (void)setSharedController:(id)arg1;
+ (id)sharedController;
+ (id)continueSearchingURLForMediaType:(unsigned long long)arg1 searchString:(id)arg2;
+ (id)musicStoreURLWithAction:(id)arg1;
- (_Bool)_isStoreRestricted;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
@property(readonly, nonatomic) _Bool hasStoreSearchCapability;
- (void)dealloc;
- (id)initWithClientIdentifier:(id)arg1;
- (id)init;

@end


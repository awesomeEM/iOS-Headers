/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WebSecurityOriginPrivate;

@interface WebSecurityOrigin : NSObject
{
    WebSecurityOriginPrivate *_private;
    id <WebQuotaManager> _applicationCacheQuotaManager;
    id <WebQuotaManager> _databaseQuotaManager;
}

- (id)initWithURL:(id)arg1;
- (id)protocol;
- (id)host;
- (id)databaseIdentifier;
- (id)toString;
- (id)domain;
- (unsigned short)port;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)finalize;

@end


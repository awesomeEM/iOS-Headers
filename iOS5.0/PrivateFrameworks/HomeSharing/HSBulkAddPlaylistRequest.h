/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HomeSharing/HSRequest.h>

@interface HSBulkAddPlaylistRequest : HSRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 playlistName:(id)arg3;
- (id)_bodyDataForSessionID:(unsigned int)arg1 playlistName:(id)arg2;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 playlistName:(id)arg3;

@end


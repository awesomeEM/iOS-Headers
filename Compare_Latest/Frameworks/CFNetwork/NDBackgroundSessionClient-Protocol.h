/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol NDBackgroundSessionClient <NSObject>
- (void)backgroundDownloadTask:(unsigned int)arg1 didFinishDownloadingToURL:(id)arg2 reply:(id)arg3;
- (void)backgroundDownloadTask:(unsigned int)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)backgroundTask:(unsigned int)arg1 didCompleteWithError:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned int)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned int)arg1 didReceiveResponse:(id)arg2;
- (void)backgroundTask:(unsigned int)arg1 didReceiveChallenge:(id)arg2 reply:(id)arg3;
- (void)backgroundTaskDidSuspend:(unsigned int)arg1;
- (void)backgroundTaskDidResume:(unsigned int)arg1;
@end

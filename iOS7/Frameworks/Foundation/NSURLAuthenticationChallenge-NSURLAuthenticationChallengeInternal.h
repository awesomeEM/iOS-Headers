/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSURLAuthenticationChallenge.h>

@interface NSURLAuthenticationChallenge (NSURLAuthenticationChallengeInternal)
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
- (void)setSender:(id)arg1;
- (struct _CFURLAuthChallenge *)_createCFAuthChallenge;
@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@interface MCPayload (Private)
+ (id)wrapperPayloadDictionary;
+ (id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)badFieldValueErrorWithField:(id)arg1;
+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)payloadFromDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
+ (id)payloadsFromArray:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
@end


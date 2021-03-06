/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TextInput/TIWordSearchOperation.h>

@class UIKeyboardCandidate;

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation
{
    UIKeyboardCandidate *_acceptedCandidate;
    BOOL _isPartial;
}

- (id)initWithTIWordSearch:(id)arg1 candidate:(id)arg2 isPartial:(BOOL)arg3;
- (void)dealloc;
- (void)cancel;
- (void)perform;
@property(readonly, nonatomic) BOOL isPartial; // @synthesize isPartial=_isPartial;
@property(retain, nonatomic) UIKeyboardCandidate *acceptedCandidate; // @synthesize acceptedCandidate=_acceptedCandidate;

@end


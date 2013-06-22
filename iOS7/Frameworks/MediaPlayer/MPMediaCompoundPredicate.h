/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPMediaPredicate.h>

@class NSArray;

@interface MPMediaCompoundPredicate : MPMediaPredicate
{
    NSArray *_predicates;
}

+ (id)predicateMatchingPredicates:(id)arg1;
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicates:(id)arg1;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;

@end

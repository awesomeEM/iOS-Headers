//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFAnimationFactory.h>

@class _UIViewAnimationAttributes;

@interface _SBFAnimationAttributesFactory : SBFAnimationFactory
{
    _UIViewAnimationAttributes *_attributes;
}

+ (id)_factoryWithAttributes:(id)arg1;
- (void)animateWithDelay:(double)arg1 options:(unsigned int)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)_initWithAttributes:(id)arg1;

@end

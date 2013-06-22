/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADEffect.h>

@interface OADReflectionEffect : OADEffect
{
    float mBlurRadius;
    float mStartOpacity;
    float mStartPosition;
    float mEndOpacity;
    float mEndPosition;
    float mDistance;
    float mDirection;
    float mFadeDirection;
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setStyleColor:(id)arg1;
- (float)blurRadius;
- (void)setBlurRadius:(float)arg1;
- (float)startOpacity;
- (void)setStartOpacity:(float)arg1;
- (float)startPosition;
- (void)setStartPosition:(float)arg1;
- (float)endOpacity;
- (void)setEndOpacity:(float)arg1;
- (float)endPosition;
- (void)setEndPosition:(float)arg1;
- (float)distance;
- (void)setDistance:(float)arg1;
- (float)direction;
- (void)setDirection:(float)arg1;
- (float)fadeDirection;
- (void)setFadeDirection:(float)arg1;
- (float)xScale;
- (void)setXScale:(float)arg1;
- (float)yScale;
- (void)setYScale:(float)arg1;
- (float)xSkew;
- (void)setXSkew:(float)arg1;
- (float)ySkew;
- (void)setYSkew:(float)arg1;
- (int)alignment;
- (void)setAlignment:(int)arg1;
- (BOOL)rotateWithShape;
- (void)setRotateWithShape:(BOOL)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

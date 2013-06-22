/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <OfficeImport/OABFillPropertiesManager-Protocol.h>

@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager>
{
    struct EshFill *mFill;
    int mShapeType;
    id <OABPropertiesManager> mMasterManager;
}

- (id)initWithFill:(const struct EshFill *)arg1 shapeType:(int)arg2 masterShape:(struct EshShape *)arg3;
- (void)dealloc;
- (BOOL)isFilled;
- (struct EshColor)fillFgColor;
- (struct EshColor)fillBgColor;
- (BOOL)isStroked;
- (struct EshColor)strokeFgColor;
- (struct EshColor)strokeBgColor;
- (struct EshColor)shadowColor;
- (int)fillType;
- (long)fillFgAlpha;
- (long)fillBgAlpha;
- (long)fillAngle;
- (long)fillFocus;
- (long)fillFocusLeft;
- (long)fillFocusTop;
- (long)fillFocusRight;
- (long)fillFocusBottom;
- (const EshTablePropVal_c5e6088d *)fillGradientColors;
- (unsigned long)fillBlipID;
- (struct EshBlip *)fillBlipDataReference;
- (id)fillBlipName;

@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSDDecorator-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, TSDInteractiveCanvasController;

// Not exported
@interface TSDGuideController : NSObject <TSDDecorator>
{
    TSDInteractiveCanvasController *mICC;
    NSMutableDictionary *mVerticalSpacings;
    NSMutableDictionary *mHorizontalSpacings;
    NSMutableArray *mVerticalSizingGuides;
    NSMutableArray *mHorizontalSizingGuides;
    NSMutableArray *mGuidesForSnappingY;
    NSMutableArray *mGuidesForSnappingX;
    NSMutableArray *mSpacingGuidesForSnappingX;
    NSMutableArray *mSpacingGuidesForSnappingY;
    NSMutableArray *mSpacingCenterGuidesForSnappingX;
    NSMutableArray *mSpacingCenterGuidesForSnappingY;
    NSSet *mCurrentGuides;
    NSMutableSet *mCurrentSizingGuideUILayers;
}

+ (id)guideColor;
+ (_Bool)shouldAlignEdgesToMasterGuides;
+ (void)setShouldAlignEdgesToMasterGuides:(_Bool)arg1;
+ (_Bool)shouldAlignCenters;
+ (void)setShouldAlignCenters:(_Bool)arg1;
+ (_Bool)shouldAlignToSizingGuides;
+ (void)setGuideColor:(id)arg1;
+ (void)setShouldAlignToSizingGuides:(_Bool)arg1;
+ (_Bool)shouldAlignToSpacingGuides;
+ (void)setShouldAlignToSpacingGuides:(_Bool)arg1;
+ (_Bool)shouldAlignEdges;
+ (void)setShouldAlignEdges:(_Bool)arg1;
+ (id)defaultGuideColor;
+ (void)initialize;
@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mICC;
- (float)p_spacingForCenterOrSpacingGuide:(id)arg1;
- (id)p_closestGuideForOffset:(double)arg1 predicate:(id)arg2 inArray:(id)arg3;
- (id)p_guideClosestToEdge:(int)arg1 ofFrame:(struct CGRect)arg2;
- (id)p_guidesForOffset:(double)arg1 predicate:(id)arg2 inArray:(id)arg3;
- (id)p_guidesForEdge:(int)arg1 ofFrame:(struct CGRect)arg2;
- (void)p_getOffset:(double *)arg1 andGuidesArray:(id *)arg2 forEdge:(int)arg3 ofFrame:(struct CGRect)arg4;
- (void)p_addGuide:(id)arg1 toSortedArray:(id)arg2;
- (void)p_addSpacingGuidesForFrame:(struct CGRect)arg1 spacing:(id)arg2 isVerticalSpacing:(_Bool)arg3;
- (void)p_addGuidesForLayout:(id)arg1;
- (_Bool)p_guidesAreRelevantForEdge:(int)arg1 whileDraggingKnobTag:(unsigned long long)arg2;
- (_Bool)p_sizingGuidesAreRelevantForOrientation:(int)arg1 whileDraggingKnobTag:(unsigned long long)arg2;
- (double)p_maxSnap;
- (id)decoratorOverlayLayers;
- (void)endAlignmentOperation;
- (void)hideAlignmentGuides;
- (void)hideSizingGuides;
- (void)showSizingGuideUIForRep:(id)arg1 matchingWidth:(_Bool)arg2 matchingHeight:(_Bool)arg3;
- (void)showSizingGuidesAlignedWithLayout:(id)arg1 forKnobTag:(unsigned long long)arg2;
- (void)showGuidesAlignedWithRect:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2 shouldRenderX:(_Bool)arg3 shouldRenderY:(_Bool)arg4 shouldRenderSizeGuides:(_Bool)arg5;
- (void)showGuidesAlignedWithRect:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2;
- (void)showGuidesAlignedWithRect:(struct CGRect)arg1 shouldRenderX:(_Bool)arg2 shouldRenderY:(_Bool)arg3;
- (struct CGPoint)snapRectToGuides:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2 snapSize:(_Bool)arg3;
- (struct CGPoint)snapRectToGuides:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2;
- (struct CGPoint)snapRectToGuides:(struct CGRect)arg1;
- (void)beginAlignmentOperationForReps:(id)arg1;
- (void)beginAlignmentOperationForRep:(id)arg1;
- (id)initWithInteractiveCanvasController:(id)arg1;

@end

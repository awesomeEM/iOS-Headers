/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "GKTableViewCellContents-Protocol.h"

@class GKPlayer, GKUITheme;

@interface GKAchievementCompareHeaderCellContents : UIView <GKTableViewCellContents>
{
    GKUITheme *_theme;
    GKPlayer *_player;
    unsigned int _achievements;
    unsigned int _points;
}

@property(nonatomic) unsigned int points; // @synthesize points=_points;
@property(nonatomic) unsigned int achievements; // @synthesize achievements=_achievements;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
- (float)preferredHeightForOrientation:(int)arg1;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) struct CGRect confirmationButtonRect;

@end

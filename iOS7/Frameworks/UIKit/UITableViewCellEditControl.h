/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class UIImageView, UITableViewCell, _UITableViewCellEditControlMinusView;

// Not exported
@interface UITableViewCellEditControl : UIControl
{
    UITableViewCell *_cell;
    UIImageView *_imageView;
    _UITableViewCellEditControlMinusView *_minusView;
    UIImageView *_shadowView;
    unsigned int _style:2;
    unsigned int _rotated:1;
    unsigned int _rotating:1;
    unsigned int _hiding:1;
    unsigned int _reserved:27;
}

+ (struct CGSize)defaultSize;
- (void)_multiselectColorChanged;
@property(nonatomic, getter=isHiding) _Bool hiding;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)isRotating;
@property(nonatomic, getter=isRotated) _Bool rotated;
- (void)setRotated:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_shadowImage;
- (void)dealloc;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITabBarDelegate.h"

@class NSArray, NSMutableArray, NSString, UIMoreNavigationController, UINavigationController, UITabBar, UITapGestureRecognizer, UIView;

@interface UITabBarController : UIViewController <UIGestureRecognizerDelegate, UITabBarDelegate, NSCoding>
{
    UITabBar *_tabBar;
    UIView *_containerView;
    UIView *_viewControllerTransitionView;
    id _tabBarItemsToViewControllers;
    UIViewController *_selectedViewController;
    UIMoreNavigationController *_moreNavigationController;
    NSArray *_customizableViewControllers;
    id <UITabBarControllerDelegate><UITabBarControllerDelegate_Private> _delegate;
    UIViewController *_selectedViewControllerDuringWillAppear;
    UIViewController *_transientViewController;
    unsigned int _customMaxItems;
    unsigned int _defaultMaxItems;
    int _tabBarPosition;
    UITapGestureRecognizer *_backGestureRecognizer;
    UITapGestureRecognizer *_selectGestureRecognizer;
    struct {
        unsigned int isShowingMoreItem:1;
        unsigned int needsToRebuildItems:1;
        unsigned int isBarHidden:1;
        unsigned int editButtonOnLeft:1;
        unsigned int barLayoutIsValid:1;
        unsigned int reselectTab:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
    } _tabBarControllerFlags;
    NSMutableArray *_moreChildViewControllers;
    UIView *_accessoryView;
    id <UIViewControllerAnimatedTransitioning> __animator;
    id <UIViewControllerInteractiveTransitioning> __interactor;
    NSString *__backdropGroupName;
}

+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (Class)_moreNavigationControllerClass;
+ (BOOL)_directlySetsContentOverlayInsetsForChildren;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
@property(retain, nonatomic, getter=_backdropGroupName, setter=_setBackdropGroupName:) NSString *_backdropGroupName; // @synthesize _backdropGroupName=__backdropGroupName;
@property(retain, nonatomic, setter=_setInteractor:) id <UIViewControllerInteractiveTransitioning> _interactor; // @synthesize _interactor=__interactor;
@property(retain, nonatomic, setter=_setAnimator:) id <UIViewControllerAnimatedTransitioning> _animator; // @synthesize _animator=__animator;
@property(nonatomic) id <UITabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // @synthesize _accessoryView;
@property(nonatomic) NSMutableArray *moreChildViewControllers; // @synthesize moreChildViewControllers=_moreChildViewControllers;
- (void)_setBadgeValue:(id)arg1 forTabBarItem:(id)arg2;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(CDStruct_f39609a0 *)arg1;
- (BOOL)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(int)arg1;
- (BOOL)_allowsAutorotation;
- (void)_setMaximumNumberOfItems:(unsigned int)arg1;
- (unsigned int)_effectiveMaxItems;
- (BOOL)showsEditButtonOnLeft;
- (void)setShowsEditButtonOnLeft:(BOOL)arg1;
- (void)revealTabBarSelection;
- (void)concealTabBarSelection;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setTransientViewController:(id)arg1;
- (id)transientViewController;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(BOOL)arg4;
- (id)_customAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)_customInteractionControllerForAnimator:(id)arg1;
- (struct CGRect)_frameForWrapperViewForViewController:(id)arg1;
- (id)transitionCoordinator;
- (struct CGRect)_frameForViewController:(id)arg1;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(char *)arg2;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (id)_transitionView;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_tabBarItemClicked:(id)arg1;
- (id)_viewControllerForTabBarItem:(id)arg1;
- (void)_setTabBarPosition:(int)arg1;
- (int)_effectiveTabBarPosition;
- (id)_backdropBarGroupName;
- (int)_tabBarPosition;
@property(readonly, nonatomic) UITabBar *tabBar;
- (id)_viewControllersInTabBar;
- (id)allViewControllers;
- (void)showBarWithTransition:(int)arg1;
- (void)_showBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2;
- (void)hideBarWithTransition:(int)arg1;
- (void)_hideBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)_isBarHidden;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (void)tabBarSizingDidChange:(id)arg1;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (void)beginCustomizingTabBar:(id)arg1;
@property(copy, nonatomic) NSArray *customizableViewControllers; // @synthesize customizableViewControllers=_customizableViewControllers;
@property(readonly, nonatomic) UINavigationController *moreNavigationController;
- (void)setRestorationIdentifier:(id)arg1;
- (void)_setMoreNavigationControllerRestorationIdentifier;
- (id)_existingMoreNavigationController;
- (BOOL)_allowsCustomizing;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)_setSelectedViewController:(id)arg1;
@property(nonatomic) UIViewController *selectedViewController;
@property(nonatomic) unsigned int selectedIndex;
- (id)_viewControllerForSelectAtIndex:(unsigned int)arg1;
- (BOOL)_allowSelectionWithinMoreList;
- (id)_selectedViewControllerInTabBar;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)_rebuildTabBarItemsAnimated:(BOOL)arg1;
- (void)_rebuildTabBarItemsIfNeeded;
@property(copy, nonatomic) NSArray *viewControllers;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (BOOL)_isTabBarFocused;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (void)_performSelectGesture:(id)arg1;
- (void)_performBackGesture:(id)arg1;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateLayoutForTraitCollection:(id)arg1;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)_setSelectedTabBarItem:(id)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_isPresentationContextByDefault;
- (void)loadView;
- (void)_layoutContainerView;
- (void)setView:(id)arg1;
- (void)setTabBar:(id)arg1;
- (void)_setTabBarVisualAltitude;
- (void)_prepareTabBar;
- (void)__viewWillLayoutSubviews;
- (void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(BOOL)arg1;
- (id)_wrapperViewForViewController:(id)arg1;
- (void)_layoutViewController:(id)arg1;
- (id)_deepestUnambiguousResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)_ignoreUnselectedTabsForStateRestoration;
- (id)_allContainedViewControllers;
- (id)_additionalViewControllersToCheckForUserActivity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


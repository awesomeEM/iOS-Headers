/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBSlidingAlertDisplay.h"

@interface SBDeviceLockPasscodeEntryAlertDisplay : SBSlidingAlertDisplay
{
}

- (float)durationForOthersActivation;
- (float)delayForOthersActivation;
- (void)dismiss;
- (void)alertDisplayWillBecomeVisible;
- (void)deviceUnlockCanceled;
- (void)deviceUnlockSucceeded;
- (void)useEmergencyCallButton;

@end


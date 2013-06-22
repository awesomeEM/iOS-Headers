/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVPlayerTimelyCaller.h>

@interface AVPlayerPeriodicCaller : AVPlayerTimelyCaller
{
    CDStruct_1b6d18a9 _interval;
    id _block;
    struct OpaqueFigPlaybackItem *_figPlaybackItem;
}

- (id)initWithPlayer:(id)arg1 interval:(CDStruct_1b6d18a9)arg2 queue:(struct dispatch_queue_s *)arg3 block:(id)arg4;
- (void)dealloc;
- (void)finalize;
- (void)_stopRespondingToPlayerStateChanges;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_startObservingPlaybackItemNotificationsForCurrentItem;
- (void)_resetTimerForPlayerNewRate:(float)arg1;
- (void)itemTimeJumped;
- (void)_stopObservingPlaybackItemNotifications;

@end

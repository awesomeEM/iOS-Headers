//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

@interface MPUOperationLIFOQueue : NSOperationQueue
{
}

- (void)_addLIFODependencyToOperations:(id)arg1;
- (void)setMaxConcurrentOperationCount:(int)arg1;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)addOperation:(id)arg1;
- (id)init;

@end


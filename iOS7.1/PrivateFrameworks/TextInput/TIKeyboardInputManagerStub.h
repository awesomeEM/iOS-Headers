//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIKeyboardInputManager.h"

@interface TIKeyboardInputManagerStub : NSObject <TIKeyboardInputManager>
{
}

+ (id)serverInterface;
+ (void)setClassesForSelectorsReplyingWithCandidatesInInterface:(id)arg1;
+ (void)setClassesForSelectorsReplyingWithOperationsInInterface:(id)arg1;
+ (id)inputManagerForInputMode:(id)arg1 isHardwareKeyboardMode:(BOOL)arg2;
- (void)removeAllDynamicDictionaries;
- (void)lastAcceptedCandidateCorrected;
- (void)candidateRejected:(id)arg1;
- (void)textAccepted:(id)arg1;
- (void)setOriginalInput:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)syncToKeyboardState:(id)arg1 continuation:(CDUnknownBlockType)arg2;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AssistantCallbackUIDelegateResult-Protocol.h"

@interface AssistantCallbackController : NSObject <AssistantCallbackUIDelegateResult>
{
    _Bool _saveScanState;
    id _uiDelegate;
    struct AssistantCallbackContext *_callbackContext;
}

+ (int)removeKeychainPasswordForBaseStation:(id)arg1;
+ (void)keychainPasswordForBaseStation:(id)arg1 delegate:(id)arg2;
+ (id)keychainPasswordForBaseStation:(id)arg1;
+ (int)updateKeychainBasePassword:(id)arg1 forMACAddress:(id)arg2 withBaseName:(id)arg3;
+ (int)updateKeychainNetworkPassword:(id)arg1 forNetworkNamed:(id)arg2;
@property(retain, nonatomic) id <AssistantCallbackUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
- (void)callbackAskUserAQuestionResult:(int)arg1 result:(int)arg2;
- (void)callbackAskUserToChooseFromStringListResult:(int)arg1 selectedString:(id)arg2;
- (void)callbackAskUserForPasswordResult:(int)arg1 password:(id)arg2 remember:(int)arg3;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext *)arg1;
- (void *)assistantCallback;
- (void)dealloc;
- (id)init;

@end


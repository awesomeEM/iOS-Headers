/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableString;

@interface MFMimeEnrichedReader : NSObject
{
    struct {
        unsigned short buffer[64];
        struct __CFString *theString;
        unsigned short *directBuffer;
        struct {
            int location;
            int length;
        } rangeToBuffer;
        int bufferedRangeStart;
        int bufferedRangeEnd;
    } _inputBuffer;
    int _currentIndex;
    int _inputLength;
    unsigned int _noFillLevel:30;
    unsigned int _eatOneNewline:1;
    unsigned int _insideComment:1;
    unsigned int _wantsPlainText:1;
    int _lastQuoteLevel;
    struct __CFArray *_commandStack;
    id _outputString;
    NSMutableString *_outputBuffer;
    struct __CFString *_prependHTML;
    struct __CFString *_postpendHTML;
    float _indentWidth;
}

+ (struct __CFCharacterSet *)punctuationSet;
+ (struct __CFCharacterSet *)parenSet;
- (void)setWantsHTML:(BOOL)arg1;
- (void)mismatchError:(id)arg1;
- (void)dealloc;
- (void)appendStringToBuffer:(id)arg1;
- (void)resetStateWithString:(id)arg1 outputString:(id)arg2;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)closeUpQuoting;
- (void)handleNoParameterCommand:(const CDStruct_3441fd00 *)arg1;
- (void)setupFontStackEntry:(struct _CommandStackEntry *)arg1;
- (void)beginCommand:(id)arg1;
- (void)endCommand:(id)arg1;
- (void)parseParameterString:(id)arg1;
- (id)currentFont;
- (void)appendNewLine:(id)arg1;
- (int)readTokenInto:(id *)arg1;
- (void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2;
- (void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2;
- (id)description;

@end


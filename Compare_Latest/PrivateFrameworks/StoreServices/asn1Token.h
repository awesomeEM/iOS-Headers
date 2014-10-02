//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface asn1Token : NSObject
{
    unsigned char mClass;
    unsigned int mIdentifier;
    unsigned int mLength;
    const char *mContent;
}

+ (id)readOpaqueTokenFromBuffer:(const char *)arg1;
+ (id)readTokenFromBuffer:(const char *)arg1;
+ (id)readTokenFromBuffer:(const char *)arg1 opaque:(BOOL)arg2;
@property(readonly) const char *content; // @synthesize content=mContent;
@property(readonly) unsigned int length; // @synthesize length=mLength;
@property(readonly) unsigned int identifier; // @synthesize identifier=mIdentifier;
@property(readonly) unsigned char tokenClass; // @synthesize tokenClass=mClass;
- (id)description;
- (id)_initWithID:(unsigned int)arg1 class:(unsigned char)arg2 length:(unsigned int)arg3 content:(const char *)arg4 opaque:(BOOL)arg5;

@end

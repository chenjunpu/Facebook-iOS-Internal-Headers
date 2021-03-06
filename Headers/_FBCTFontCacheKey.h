//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface _FBCTFontCacheKey : NSObject <NSCopying>
{
    NSString *_fontName;
    float _size;
}

+ (id)currentKeyWithName:(id)arg1 size:(float)arg2;
+ (void)initialize;
@property(nonatomic) float size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


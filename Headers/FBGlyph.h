//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBGlyph : NSObject
{
}

+ (void)turnOffAssertsForMissingGlyph;
+ (unsigned int)highlightedShadingFromGlyphShading:(unsigned int)arg1;
+ (struct CGSize)CGSizeFromFBGlyphSize:(unsigned int)arg1;
+ (id)colorForShading:(unsigned int)arg1;
+ (id)glyphForName:(unsigned int)arg1 shading:(unsigned int)arg2 size:(unsigned int)arg3 controlState:(unsigned int)arg4 canBeNil:(BOOL)arg5;
+ (id)glyphForName:(unsigned int)arg1 shading:(unsigned int)arg2 size:(unsigned int)arg3 controlState:(unsigned int)arg4;
+ (id)glyphForName:(unsigned int)arg1 color:(id)arg2 size:(unsigned int)arg3 controlState:(unsigned int)arg4;
+ (id)glyphForName:(unsigned int)arg1 shading:(unsigned int)arg2 size:(unsigned int)arg3;
+ (id)glyph48ForName:(unsigned int)arg1 shading:(unsigned int)arg2;

@end


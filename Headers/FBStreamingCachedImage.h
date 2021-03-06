//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCachedImage.h"

@class FBProgressiveJPEG;

@interface FBStreamingCachedImage : FBCachedImage
{
    BOOL _lastImageFlag;
    unsigned int _imageFlag;
    FBProgressiveJPEG *_jpegHandler;
}

@property(readonly, nonatomic) FBProgressiveJPEG *jpegHandler; // @synthesize jpegHandler=_jpegHandler;
@property(readonly, nonatomic) BOOL lastImageFlag; // @synthesize lastImageFlag=_lastImageFlag;
@property(readonly, nonatomic) unsigned int imageFlag; // @synthesize imageFlag=_imageFlag;
- (void).cxx_destruct;
- (id)initWithCGImage:(struct CGImage *)arg1 imageDecoder:(CDUnknownBlockType)arg2 imageFlag:(unsigned int)arg3 lastImageFlag:(BOOL)arg4 jpegHandler:(id)arg5;

@end


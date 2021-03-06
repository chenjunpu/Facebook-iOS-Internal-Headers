//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class CKComponent;

@interface FBAnimatedGIFComponent : CKCompositeComponent
{
    CKComponent *_imageInternalComponent;
    SEL _staticImageTapAction;
    BOOL _isAnimated;
    BOOL _isPlayable;
}

+ (id)newWithAnimatedImageURL:(id)arg1 placeholderImageURL:(id)arg2 imageSize:(struct CGSize)arg3 isPlayable:(BOOL)arg4 shouldAutoplay:(BOOL)arg5 parentStoryID:(id)arg6 staticImageTapAction:(SEL)arg7 toolbox:(id)arg8 trackingCodes:(id)arg9 attributes:(const unordered_map_f50c1a1f *)arg10;
@property(readonly, nonatomic) CKComponent *imageInternalComponent; // @synthesize imageInternalComponent=_imageInternalComponent;
- (void).cxx_destruct;
- (void)didTapGIFView:(id)arg1;

@end


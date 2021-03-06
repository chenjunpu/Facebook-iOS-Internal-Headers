//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponent.h"

@class FBExperimentManager;

@interface FBHScrollComponent : CKComponent
{
    shared_ptr_6a94d7a4 _mountedChildren;
    SEL _endDraggingScrollViewAction;
    SEL _didScrollAction;
    SEL _nearingEndAction;
    struct FBHScrollComponentStyle _style;
    struct FBHScrollOptions _options;
    FBExperimentManager *_experimentManager;
    vector_b11e7b84 _children;
}

+ (id)newWithChildren:(vector_b11e7b84)arg1 options:(struct FBHScrollOptions)arg2 style:(struct FBHScrollComponentStyle)arg3 experimentManager:(id)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)indexOfComponentWithScopeFrameToken:(id)arg1;
- (id)scopeFrameTokenOfComponentAtIndex:(unsigned int)arg1;
- (id)collectionView;
- (void)scrollToPreviewNextComponentWithDelay:(double)arg1 andBackWithDelay:(double)arg2;
- (BOOL)scrollInDirection:(unsigned int)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3;
- (void)scrollToComponentAtIndex:(unsigned int)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3;
- (void)scrollToNextFromContainedComponent:(id)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3;
- (unsigned int)indexOfComponentContainingComponent:(id)arg1;
- (void)unmount;
- (struct MountResult)mountInContext:(const struct MountContext *)arg1 size:(struct CGSize)arg2 children:(shared_ptr_6a94d7a4)arg3 supercomponent:(id)arg4;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end


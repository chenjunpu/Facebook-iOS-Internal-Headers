//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBDisplayableMediaTransitioningDelegate-Protocol.h"

@class NSString, UIView;

@interface FBMagicStoryTransitioningDelegate : NSObject <FBDisplayableMediaTransitioningDelegate>
{
    UIView *_viewToFadeIn;
    UIView *_viewToHide;
}

@property(nonatomic) __weak UIView *viewToHide; // @synthesize viewToHide=_viewToHide;
@property(nonatomic) __weak UIView *viewToFadeIn; // @synthesize viewToFadeIn=_viewToFadeIn;
- (void).cxx_destruct;
- (BOOL)transitionManagerShouldAddMediaViewOnTop:(id)arg1;
- (BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1;
- (void)transitionManager:(id)arg1 willStartTransitionWithContainerView:(id)arg2;
- (void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithProgress:(float)arg2 containerView:(id)arg3;
- (void)transitionManager:(id)arg1 didEndTransitionWithContainerView:(id)arg2;
- (void)transitionManager:(id)arg1 animateInsideAnimationBlockWithContainerView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


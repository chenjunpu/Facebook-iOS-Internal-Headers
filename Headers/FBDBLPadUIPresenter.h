//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAuthCheckpointUIPresenting-Protocol.h"
#import "FBFlipViewControllerDelegate-Protocol.h"
#import "FBFlyUpViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UINavigationController, UIViewController;
@protocol FBDBLPadUIPresenterAnimationDelegate, OS_dispatch_queue;

@interface FBDBLPadUIPresenter : NSObject <FBFlipViewControllerDelegate, FBFlyUpViewControllerDelegate, UINavigationControllerDelegate, FBAuthCheckpointUIPresenting>
{
    BOOL _topViewIsTransient;
    CDUnknownBlockType _presentationBlock;
    UINavigationController *_navController;
    UIViewController *_flipController;
    UINavigationController *_flipNavController;
    NSObject<OS_dispatch_queue> *_navOperationQueue;
    BOOL _navOperationQueueNeedsResume;
    id <FBDBLPadUIPresenterAnimationDelegate> _animationDelegate;
}

@property(nonatomic) __weak id <FBDBLPadUIPresenterAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (void)_resumeQueue;
- (void)_pauseQueue;
- (void)_dismissFlipControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_popNavViewControllerIfTop:(id)arg1 animated:(BOOL)arg2;
- (void)_popFlipViewControllerIfTop:(id)arg1 animated:(BOOL)arg2;
- (id)_newNavControllerWithRootViewController:(id)arg1;
- (void)_pushNavViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_pushFlipViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_onQueuePopTransientViewControllerAnimated:(BOOL)arg1;
- (void)_onQueuePopViewControllerAnimated:(BOOL)arg1;
- (void)_onQueueReplaceAllWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_onQueueReplaceTopViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_onQueueSetTopViewControllerIsTransient:(BOOL)arg1;
- (void)_onQueuePushTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_onQueuePushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)flyUpViewControllerDidTapBackground:(id)arg1;
- (void)flipViewControllerDidTapBackground:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetStackOnNextPush;
- (void)presentToastWithMessage:(id)arg1;
- (void)popTransientViewControllerAnimated:(BOOL)arg1;
- (void)popViewControllerAnimated:(BOOL)arg1;
- (void)replaceAllWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)replaceTopViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setTopViewControllerIsTransient:(BOOL)arg1;
- (void)pushTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithPresentationBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


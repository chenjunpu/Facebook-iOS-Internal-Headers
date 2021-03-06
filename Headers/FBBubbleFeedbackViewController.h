//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBFeedbackViewController.h"

#import "FBBubbleContentViewController-Protocol.h"
#import "FBGrowingComposerViewDelegate-Protocol.h"

@class NSString;
@protocol UIScrollViewDelegate, UITextFieldDelegate;

@interface FBBubbleFeedbackViewController : FBFeedbackViewController <FBBubbleContentViewController, FBGrowingComposerViewDelegate>
{
    id <UIScrollViewDelegate> _scrollViewReceiver;
    id <UITextFieldDelegate> _textFieldReceiver;
    float _bubbleMaxNaturalHeight;
    unsigned int _expectedNumberOfComments;
}

@property(nonatomic) unsigned int expectedNumberOfComments; // @synthesize expectedNumberOfComments=_expectedNumberOfComments;
@property(nonatomic) float bubbleMaxNaturalHeight; // @synthesize bubbleMaxNaturalHeight=_bubbleMaxNaturalHeight;
@property(nonatomic) __weak id <UITextFieldDelegate> textFieldReceiver; // @synthesize textFieldReceiver=_textFieldReceiver;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewReceiver; // @synthesize scrollViewReceiver=_scrollViewReceiver;
- (void).cxx_destruct;
- (void)_doneButtonAction:(id)arg1;
- (void)growingComposerViewDidChange:(id)arg1;
- (BOOL)growingComposerViewShouldReturn:(id)arg1;
- (void)growingComposerViewDidEndEditing:(id)arg1;
- (void)growingComposerViewDidBeginEditing:(id)arg1;
- (id)analyticsModule;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)bubbleHeaderView;
- (BOOL)canDismissInBubbleController;
- (id)contentScrollViewForBubbleController;
- (float)_fullScreenBubbleHeightWithBuffer;
- (struct CGRect)_screenBoundsFixedToPortraitOrientation;
- (float)naturalHeightForBubbleController;
- (id)keyboardResponderForBubbleController;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)feedbackTableViewCellResponder:(id)arg1 userDidRequestRepliesForComment:(id)arg2 activateKeyboardSource:(id)arg3;
- (void)feedbackTableViewCellResponder:(id)arg1 openFeedbackActionURL:(id)arg2;
- (void)feedbackTableViewCellResponder:(id)arg1 userDidRequestEditHistoryForCommentCell:(id)arg2;
- (BOOL)feedbackTableViewCellResponder:(id)arg1 willPresentAvatarSequenceViewController:(id)arg2 fromSourceView:(id)arg3;
- (Class)avatarSequenceViewControllerClassForFeedbackTableViewCellResponder:(id)arg1;
- (void)openFeedbackActionURL:(id)arg1 trackingCodes:(id)arg2;
- (struct CGSize)maxContentSizeForViewInPopover;
- (struct CGSize)contentSizeForViewInPopover;
- (void)dismissPhotoPicker;
- (void)presentPhotoPicker;
- (id)fb_navigationController;
- (void)_backButtonAction:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)showDoneButton;
- (id)initWithScenePath:(id)arg1 parentTrackingCodes:(id)arg2 feedbackContainerType:(unsigned int)arg3 session:(id)arg4;
- (id)initWithScenePath:(id)arg1 parentTrackingCodes:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


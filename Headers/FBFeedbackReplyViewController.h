//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBFeedbackViewController.h"

#import "FBCommentHeaderViewDelegate-Protocol.h"

@class FBUserSession, NSURL;

@interface FBFeedbackReplyViewController : FBFeedbackViewController <FBCommentHeaderViewDelegate>
{
    BOOL _isPadFeedRedesignEnabled;
    BOOL _isLoadingSpinnerShowing;
    BOOL _isCardlessUIEnabled;
    FBUserSession *_session;
    NSURL *_storyURLForHeaderExplanation;
}

- (void).cxx_destruct;
- (void)headerViewTapped;
- (void)_topLevelCommentDidFailWithError:(id)arg1 commentID:(id)arg2 fallbackURL:(id)arg3;
- (id)_parseCommentWithResponse:(id)arg1;
- (id)_requestWithCommentID:(id)arg1;
- (void)requestTopLevelCommentWithCommentID:(id)arg1 fallbackURL:(id)arg2;
- (void)showLoadingSpinnerView;
- (id)_commentsMirroringNotice;
- (BOOL)feedbackTableViewCellResponderIsCommentPermalink:(id)arg1;
- (void)feedbackTableViewCellResponder:(id)arg1 didChangeLikeStatus:(BOOL)arg2 forComment:(id)arg3;
- (void)feedbackObserver:(id)arg1 didUpdateFeedback:(id)arg2;
- (void)refreshCommentHeaderViewWithComment:(id)arg1;
- (id)analyticsModule;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)_layoutForTopLevelComment:(id)arg1;
- (void)_refreshSubviews;
- (BOOL)fb_hidesTabBar;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithScenePath:(id)arg1 parentTrackingCodes:(id)arg2 feedbackContainerType:(unsigned int)arg3 contentDataSource:(id)arg4 session:(id)arg5 storyURLForHeaderExplanation:(id)arg6 notificationsLoggingContext:(id)arg7;

@end


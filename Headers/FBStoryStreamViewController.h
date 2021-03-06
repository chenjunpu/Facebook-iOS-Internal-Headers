//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBComposerFlowDelegate-Protocol.h"
#import "FBFacecastViewControllerDelegate-Protocol.h"
#import "FBFeedInstallNotificationBannerDelegate-Protocol.h"
#import "FBFeedInstallNotificationCoordinatorHandler-Protocol.h"
#import "FBFeedNetworkErrorBannerDelegate-Protocol.h"
#import "FBFeedNewStoriesPillDelegate-Protocol.h"
#import "FBFeedScrollingDelegate-Protocol.h"
#import "FBFeedTableViewDataSourceDelegate-Protocol.h"
#import "FBFeedViewDelegate-Protocol.h"
#import "FBFullScreenErrorViewDelegate-Protocol.h"
#import "FBGroupSellFeedTapHandler-Protocol.h"
#import "FBOneRowDataSourceListener-Protocol.h"
#import "FBPopoverControllerDelegate-Protocol.h"
#import "FBPostingControllerHostingViewController-Protocol.h"
#import "FBPresentableViewController-Protocol.h"
#import "FBPullToRefreshViewDelegate-Protocol.h"
#import "FBReachabilityListener-Protocol.h"
#import "FBScrollPositionRestoringCollectionViewItemIdentifierProvider-Protocol.h"
#import "FBScrollPositionRestoringTableViewRowIdentifierProvider-Protocol.h"
#import "FBScrolling-Protocol.h"
#import "FBSegmentedTitleViewDelegate-Protocol.h"
#import "FBStoryStreamFullscreenErrorViewInterface-Protocol.h"
#import "FBStreamListener-Protocol.h"
#import "FBTableViewDataSourceDelegateTransitioning-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBAnimationPerformanceLogger, FBAutoScroller, FBCommentsPrefetchController, FBComposerFloatingActionButtonViewController, FBComposerTapHandler, FBFacecastViewController, FBFeedBannerPresenter, FBFeedFooterView, FBFeedHeadLoadRefreshModeExperimentContext, FBFeedInstallNotificationBanner, FBFeedNetworkErrorBanner, FBFeedNewStoriesPill, FBFeedShimmeringStoriesHelper, FBFeedSpinnerLoggingController, FBFeedTableViewDataSource, FBFeedView, FBFeedViewComposerOpenHandler, FBFeedViewComposerOpenHandlerAttributes, FBFullscreenErrorView, FBMobileTraceAsyncTokenPtr, FBPostingController, FBResolvableProxyingNavigationCoordinator, FBScenePath, FBSideFeedLayoutManager, FBStoryStream, FBStoryStreamViewControllerConfiguration, FBUnreadStoriesStateManager, FBUserSession, NSMapTable, NSMutableSet, NSString;
@protocol FBCollectionViewDataSource, FBCompositionModelBundleCache, FBNavigationCoordinator, FBScrollPositionRestoringScrollViewController, FBStoryStreamViewControllerDelegate, FBStoryStreamViewControllerHeaderProvider, FBTableViewDataSource;

@interface FBStoryStreamViewController : UIViewController <FBFeedInstallNotificationBannerDelegate, FBFeedNewStoriesPillDelegate, FBFeedNetworkErrorBannerDelegate, FBFullScreenErrorViewDelegate, FBOneRowDataSourceListener, FBPresentableViewController, FBReachabilityListener, FBPostingControllerHostingViewController, FBFeedInstallNotificationCoordinatorHandler, FBFeedScrollingDelegate, FBFacecastViewControllerDelegate, UITableViewDelegate, UIScrollViewDelegate, FBFeedViewDelegate, FBScrollPositionRestoringTableViewRowIdentifierProvider, FBScrollPositionRestoringCollectionViewItemIdentifierProvider, FBStoryStreamFullscreenErrorViewInterface, FBComposerFlowDelegate, FBStreamListener, FBFeedTableViewDataSourceDelegate, FBPullToRefreshViewDelegate, FBPopoverControllerDelegate, FBSegmentedTitleViewDelegate, UIActionSheetDelegate, FBScrolling, FBTableViewDataSourceDelegateTransitioning, FBGroupSellFeedTapHandler>
{
    BOOL _didLoadFeedResponse;
    NSMutableSet *_streams;
    NSMapTable *_streamAuditors;
    BOOL _restoringFromPersistedState;
    BOOL _didLoadOnce;
    BOOL _isVoiceOverRunning;
    BOOL _didAppearAfterViewDidLoad;
    BOOL _haveDismissedNetworkErrorBar;
    id <FBTableViewDataSource> _tableViewDataSource;
    id <FBCollectionViewDataSource> _collectionViewDataSource;
    FBFeedFooterView *_collectionViewFooterView;
    FBSideFeedLayoutManager *_sideFeedLayoutManager;
    FBAnimationPerformanceLogger *_apTracker;
    FBPostingController *_postingController;
    FBAutoScroller *_autoScroller;
    id <FBNavigationCoordinator> _proxyingNavigationCoordinatorForScrollingVideoController;
    BOOL _useCollectionView;
    BOOL _tableViewDataSourceRespondsTo_absoluteIndexPathFor_fromDataSource;
    BOOL _collectionViewDataSourceRespondsTo_absoluteIndexPathFor_fromDataSource;
    BOOL _showingFeedStories;
    FBMobileTraceAsyncTokenPtr *_tracerAsyncToken;
    FBCommentsPrefetchController *_commentsPrefetchController;
    FBFullscreenErrorView *_fullscreenErrorView;
    NSMutableSet *_onScreenFeedUnitUniqueIDs;
    BOOL _ptrSpinnerWasRemovedAfterFirstChunk;
    double _ptrSpinnerMinimumSpinTime;
    NSString *_ptrSpinnerConfirmationText;
    FBFeedShimmeringStoriesHelper *_shimmeringStoriesHelper;
    BOOL _autoLoadHeadStreamStartedInitialLoadBeforeShimmeringStoriesDisplay;
    BOOL _feedTableViewDataSourceWasEmptyBeforeLastUpdate;
    BOOL _isDisablingStreams;
    double _lastVerticalOffset;
    BOOL _scrollingDown;
    BOOL _scrollDecelerating;
    double _lastScrollingDirectionChangeTime;
    struct CGPoint _lastCollectionViewContentOffset;
    unsigned int _leastRecentReplyPreviewCount;
    unsigned int _mostRecentReplyPreviewCount;
    BOOL _showInterestingReplyPreview;
    BOOL _isSideFeedEnabled;
    BOOL _preventSideFeedScrollingTap;
    BOOL _edgeToEdgeStories;
    double _scrollVelocityPlayThreshold;
    double _slowdownScrollVelocityPlayThreshold;
    double _scrollDirectionChangeCostRatio;
    double _lastScrollVelocityRatio;
    FBFeedHeadLoadRefreshModeExperimentContext *_headLoadRefreshModeExperiment;
    FBFacecastViewController *_facecastViewController;
    BOOL _showInlineComposerFeedLoading;
    FBComposerFloatingActionButtonViewController *_floatingComposerEntryPointViewController;
    FBFeedViewComposerOpenHandlerAttributes *_composerOpenHandlerAttributes;
    id <FBScrollPositionRestoringScrollViewController> _scrollPositionRestoringScrollViewController;
    FBUnreadStoriesStateManager *_unreadStoriesStateManager;
    id <FBStoryStreamViewControllerHeaderProvider> _headerContentViewProvider;
    unsigned int _reachabilityState;
    FBFeedBannerPresenter *_bannerPresenter;
    FBFeedNewStoriesPill *_storiesPill;
    FBFeedNetworkErrorBanner *_networkErrorBanner;
    FBFeedInstallNotificationBanner *_installBanner;
    BOOL _shouldEnableRestorationAfterDataSourceUpdate;
    BOOL _isAtOrAboveFirstFeedUnit;
    BOOL _presented;
    BOOL _shouldSuspendOnDisappear;
    BOOL _shouldMarkStartupCompletedOnDisappear;
    BOOL _contentNotFound;
    BOOL _loadHeadOnAppear;
    BOOL _isPadFeedRedesignEnabled;
    BOOL _isCardlessUIEnabled;
    BOOL _allowsLoadingIndicatorRevealOnAppear;
    FBFeedViewComposerOpenHandler *_lazyLoadedComposerOpenHandler;
    id <FBStoryStreamViewControllerDelegate> _delegate;
    NSString *_targetID;
    FBUserSession *_session;
    int _feedType;
    FBFeedView *_feedView;
    FBResolvableProxyingNavigationCoordinator *_proxyingNavigationCoordinator;
    FBFeedSpinnerLoggingController *_feedSpinnerLoggingController;
    FBFeedTableViewDataSource *_feedDataSource;
    FBStoryStreamViewControllerConfiguration *_configuration;
    FBScenePath *_scenePath;
}

@property(readonly, nonatomic) NSMapTable *streamAuditors; // @synthesize streamAuditors=_streamAuditors;
@property(nonatomic) BOOL allowsLoadingIndicatorRevealOnAppear; // @synthesize allowsLoadingIndicatorRevealOnAppear=_allowsLoadingIndicatorRevealOnAppear;
@property(readonly, nonatomic) BOOL isCardlessUIEnabled; // @synthesize isCardlessUIEnabled=_isCardlessUIEnabled;
@property(readonly, nonatomic) BOOL isPadFeedRedesignEnabled; // @synthesize isPadFeedRedesignEnabled=_isPadFeedRedesignEnabled;
@property(nonatomic) BOOL loadHeadOnAppear; // @synthesize loadHeadOnAppear=_loadHeadOnAppear;
@property(nonatomic) BOOL contentNotFound; // @synthesize contentNotFound=_contentNotFound;
@property(readonly, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
@property(retain, nonatomic) FBStoryStreamViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) FBFeedTableViewDataSource *feedDataSource; // @synthesize feedDataSource=_feedDataSource;
@property(readonly, nonatomic) FBFeedSpinnerLoggingController *feedSpinnerLoggingController; // @synthesize feedSpinnerLoggingController=_feedSpinnerLoggingController;
@property(nonatomic) BOOL shouldMarkStartupCompletedOnDisappear; // @synthesize shouldMarkStartupCompletedOnDisappear=_shouldMarkStartupCompletedOnDisappear;
@property(nonatomic) BOOL shouldSuspendOnDisappear; // @synthesize shouldSuspendOnDisappear=_shouldSuspendOnDisappear;
@property(nonatomic, getter=isPresented) BOOL presented; // @synthesize presented=_presented;
@property(readonly, nonatomic) FBFeedNetworkErrorBanner *networkErrorBanner; // @synthesize networkErrorBanner=_networkErrorBanner;
@property(readonly, nonatomic) FBFeedNewStoriesPill *storiesPill; // @synthesize storiesPill=_storiesPill;
@property(readonly, nonatomic) FBFeedBannerPresenter *bannerPresenter; // @synthesize bannerPresenter=_bannerPresenter;
@property(retain, nonatomic) FBResolvableProxyingNavigationCoordinator *proxyingNavigationCoordinator; // @synthesize proxyingNavigationCoordinator=_proxyingNavigationCoordinator;
@property(nonatomic) BOOL isAtOrAboveFirstFeedUnit; // @synthesize isAtOrAboveFirstFeedUnit=_isAtOrAboveFirstFeedUnit;
@property(retain, nonatomic) FBFeedView *feedView; // @synthesize feedView=_feedView;
@property(readonly, nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property(nonatomic) __weak id <FBStoryStreamViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (float)feedView:(id)arg1 contentOffsetOfShimmeringStoriesForCollectionView:(id)arg2;
- (void)prepareForApplicationLaunch;
- (void)willEnterForegroundAndLoadHead:(BOOL)arg1 viewVisible:(BOOL)arg2;
- (CDUnknownBlockType)preparationBlockForImmediateHeadLoadUponStreamingRestart;
- (void)reachabilityStateChangedTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)presentNotificationWithEntity:(id)arg1 delegate:(id)arg2;
- (void)didIgnoreInstallNotificationBanner:(id)arg1;
- (void)didSelectInstallNotificationBanner:(id)arg1;
- (void)didDismissInstallNotificationBanner:(id)arg1;
- (void)didDismissNetworkErrorBanner:(id)arg1;
@property(readonly, nonatomic) double lastScrollVelocityRatio;
@property(readonly, nonatomic) double scrollDirectionChangeCostRatio;
@property(readonly, nonatomic) double slowdownScrollVelocityPlayThreshold;
@property(readonly, nonatomic) double playThreshold;
@property(readonly, nonatomic) BOOL scrollDecelerating;
@property(readonly, nonatomic) double lastScrollingDirectionChange;
@property(readonly, nonatomic) double contentVerticalOffset;
- (void)_updateScrollingDirectionIfNeeded;
- (BOOL)enableEarlyPTRFetch;
- (BOOL)hasContentAboveStories:(float *)arg1;
- (BOOL)hasVisibleContent;
- (BOOL)hidesFooterView;
- (id)streamForAutoLoadTail;
- (id)_streamForAutoLoadHead;
- (id)streamForPTR;
@property(readonly, nonatomic) FBStoryStream *stream;
- (struct UIEdgeInsets)pullToRefreshViewContentInsets;
- (id)compositionOwnershipTracker;
- (id)collectionView:(id)arg1 identifierForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 indexPathForItemWithIdentifier:(id)arg2;
- (id)tableView:(id)arg1 indexPathForRowWithIdentifier:(id)arg2;
- (id)tableView:(id)arg1 identifierForRowAtIndexPath:(id)arg2;
- (void)feedTableViewDataSourceDidFinishRestoringPersistedState:(id)arg1;
- (void)feedTableViewDataSourceWillBeginUpdates:(id)arg1;
- (void)feedTableViewDataSource:(id)arg1 didEndUpdates:(id)arg2;
- (void)feedTableViewDataSource:(id)arg1 willEndUpdates:(id)arg2;
- (BOOL)shouldScrollToTopOnOptimisticStory;
- (BOOL)_shouldScrollToTopStoryForUpdate:(id)arg1;
- (void)feedView:(id)arg1 didTapNetworkErrorBar:(id)arg2;
- (void)fullScreenErrorViewActionButtonTapped:(id)arg1;
- (void)performNavigation:(id)arg1;
- (void)retry;
- (BOOL)analyticsRequiresNetworkContent;
- (BOOL)analyticsHasCachedNetworkContent;
- (BOOL)analyticsAutomaticallyLogContent;
- (void)enableStream:(id)arg1;
- (void)_resumeNetworkRelatedThings;
- (void)_suspendNetworkRelatedThings;
- (void)didReceiveMemoryWarning;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (CDUnknownBlockType)_streamAnalyticsExtraBlock;
- (void)_revealLoadingIndicatorOnAppearIfNecessary;
- (void)_revealPullToRefreshLoadingState;
- (BOOL)_canLoadContent;
- (BOOL)isContentLoading;
- (void)_coveringSplitViewWillUncoverView:(id)arg1;
- (void)_sessionWillInvalidate:(id)arg1;
- (void)_accessibilityVoiceOverStatusChanged:(id)arg1;
- (struct CGRect)animationBoundsForView:(id)arg1;
- (struct UIEdgeInsets)contentInset;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)userTriggeredSpinnerAnimationDidStart:(id)arg1;
- (void)updateDataSourcesOnPullToRefresh;
- (id)confirmationTextForPullToRefreshView:(id)arg1;
- (double)minimumSpinTimeForPullToRefreshView:(id)arg1;
- (void)pullToRefreshViewDidNotAnimateLoadingState;
- (void)pullToRefreshViewDidChangeVisibility:(BOOL)arg1 userInitiated:(BOOL)arg2;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (void)_updateForScrollCompletion;
- (void)_prefetchCommentsForVisibleCells;
- (void)_setUpdatesDeferred:(BOOL)arg1 identifier:(id)arg2;
- (BOOL)hasDeferredUpdates;
- (id)_dataSourceForDeferredUpdating;
- (void)_updateIsAtOrAboveFirstFeedUnit;
- (BOOL)isIndexPathAboveOrAtFirstFeedCell:(id)arg1;
- (BOOL)isScrolledToTop;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (BOOL)_scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)_tailLoadSpinnerIsVisibleToUserForTableView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_scheduleDeleteAllEdgesInCaseOfIrrecoverableError;
- (void)_cancelDeleteAllEdgesInCaseOfIrrecoverableError;
- (void)_deferredDeleteAllEdgesInCaseOfIrrecoverableError;
- (void)_cancelDeleteEdgesAfterFirstGap;
- (void)_scheduleDeleteEdgesAfterFirstGap;
- (void)_deferredDeleteEdgesAfterFirstGap;
- (void)loadTailIfNecessary:(id)arg1;
- (void)stream:(id)arg1 willRetryRequestWithLoadType:(unsigned int)arg2 requestAnalyticsUUID:(id)arg3;
- (void)_streamDidFinishParsingLastChunkOfResponse:(unsigned int)arg1 streamStats:(id)arg2 requestAnalyticsUUID:(id)arg3;
- (void)_streamDidFinishParsingFirstChunkOfResponse:(unsigned int)arg1 streamStats:(id)arg2 requestAnalyticsUUID:(id)arg3;
- (void)streamLoadResponseHandlerDidProcessResponseWithLoadType:(unsigned int)arg1 analyticsUUID:(id)arg2 changesetUUID:(id)arg3 responseChunkResults:(id)arg4 expectedResponseChunks:(unsigned int)arg5 userInfo:(id)arg6;
- (void)stream:(id)arg1 didFinishLoading:(unsigned int)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4;
- (void)stream:(id)arg1 willStartLoading:(unsigned int)arg2 refreshMode:(unsigned int)arg3 requestAnalyticsUUID:(id)arg4;
- (void)stream:(id)arg1 didCancelLoading:(unsigned int)arg2 requestAnalyticsUUID:(id)arg3;
- (void)_disableStreams;
- (void)_enableStreams;
- (void)loadHeadWithPullToRefreshVisible:(BOOL)arg1 refreshMode:(unsigned int)arg2;
- (void)removeStream:(id)arg1;
- (void)addStream:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dataSourceWillDisplayCellForCollectionView;
- (void)dataSourceWillDisplayCellForTableView;
- (void)_tailLoadFirstChunkWasProcessedWithStreamStats:(id)arg1;
- (void)_updateTailLoadingIndicatorState;
- (void)_resetPullToRefreshState;
- (void)_removePullToRefreshView;
- (void)_updatePullToRefreshLoadingState;
- (void)_setFeedViewState:(unsigned int)arg1;
- (void)updateFeedViewState:(BOOL)arg1;
- (id)_networkErrorBarString;
- (BOOL)_retryingStreamHeadLoad;
- (BOOL)_networkError;
- (void)_updatePersistedStateRestorationStatus;
- (id)_feedTableView;
- (void)_setupSpinnerTimeExperimentContext;
- (void)loadView;
- (float)scrollableHeaderViewHeight;
- (void)setScrollableHeaderViewIsManaged:(BOOL)arg1;
- (id)scrollableHeaderView;
- (id)_buildFeedViewWithFrame:(struct CGRect)arg1 withHeaderContentView:(id)arg2 withAnalytics:(id)arg3;
- (void)finishedPublishingWithPublisherData:(id)arg1;
- (void)didFailPublishRequest;
- (void)successfullyPublishedEditedStoryWithPublisherData:(id)arg1;
- (void)successfullyPublishedNewStoryWithPublisherData:(id)arg1 response:(id)arg2 sourceView:(id)arg3;
- (void)composerCompletedWithResult:(id)arg1;
@property(readonly, nonatomic) id <FBCompositionModelBundleCache> compositionModelBundleCache;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)facecastViewControllerDidFinishRecordingSession:(id)arg1;
- (void)facecastViewControllerDidCancelRecordingSession:(id)arg1;
- (void)composerTappedButtonForFacecastWithInitialText:(id)arg1 initialCommittedMentions:(id)arg2;
- (void)didTapPublishStatusButtonNextToSellButton:(id)arg1 forSaleConfiguration:(id)arg2;
- (void)didTapSellButton:(id)arg1 forSaleConfiguration:(id)arg2 prefilledStatusText:(id)arg3 prefilledAttachments:(id)arg4;
- (void)didTapPublishCheckInButton:(id)arg1;
- (void)didTapPublishPhotoButton:(id)arg1;
- (void)didTapSproutsButton:(id)arg1;
- (void)didTapPublishStatusButton:(id)arg1;
@property(readonly, nonatomic) FBComposerTapHandler *composerTapHandler;
@property(readonly, nonatomic) FBFeedViewComposerOpenHandler *composerOpenHandler; // @synthesize composerOpenHandler=_lazyLoadedComposerOpenHandler;
- (BOOL)fb_showAuxiliaryViewController;
- (void)scrollToTopOptimisticStory;
- (void)scrollToVerticalLocation:(float)arg1 animated:(BOOL)arg2;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (id)footerView;
- (void)setupFooterCollectionViewDataSource:(id)arg1;
- (void)_logAnalyticsOnHeadload:(unsigned int)arg1;
- (void)_clearShittyState;
- (id)tableView;
- (void)dealloc;
- (void)removeUnreadStoriesStateListener:(id)arg1;
- (void)addUnreadStoriesStateListener:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1 tableViewDataSource:(id)arg2 collectionViewDataSource:(id)arg3 sideFeedConfiguration:(id)arg4 isSideFeedEnabled:(BOOL)arg5 targetID:(id)arg6 feedType:(int)arg7 scenePath:(id)arg8 composerOpenHandlerAttributes:(id)arg9 scrollPositionRestoringController:(id)arg10 animationPerfTrackerKey:(id)arg11 configuration:(id)arg12 headerContentViewProvider:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly) Class superclass;

@end


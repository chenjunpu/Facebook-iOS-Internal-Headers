//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBSideFeedUnitController.h"

#import "FBAppFeedEventListener-Protocol.h"
#import "FBAppFeedModuleResourceProvider-Protocol.h"
#import "FBFeedSideFeedItemViewBaseDelegate-Protocol.h"
#import "FBSideFeedUnitCollectionViewControllerDelegate-Protocol.h"

@class FBAppFeedActionRouter, FBAppFeedSecondaryActionsFactory, FBAppFeedSecondaryActionsPresenter, FBSideFeedProductPresenter, FBSideFeedUnitCollectionViewController, NSArray, NSString;

@interface FBFeedSideFeedAppAdStoriesUnitController : FBSideFeedUnitController <FBFeedSideFeedItemViewBaseDelegate, FBSideFeedUnitCollectionViewControllerDelegate, FBAppFeedEventListener, FBAppFeedModuleResourceProvider>
{
    FBAppFeedSecondaryActionsPresenter *_secondaryActionsPresenter;
    FBAppFeedActionRouter *_actionRouter;
    FBAppFeedSecondaryActionsFactory *_secondaryActionsFactory;
    FBSideFeedUnitCollectionViewController *_unitCollectionViewController;
    FBSideFeedProductPresenter *_sideFeedProductPresenter;
    NSArray *_validModelEdges;
    NSArray *_cachedUniqueIDsForItems;
    BOOL _renderSeparators;
    BOOL _upsellToAppFeed;
}

- (void).cxx_destruct;
- (void)visibleRectDidChangeInContentView:(struct CGRect)arg1;
- (id)imageOfType:(unsigned int)arg1;
- (unsigned int)indexForItem:(id)arg1;
- (void)xoutSponsorable:(id)arg1;
- (void)didPressFeedbackWithSponsorable:(id)arg1;
- (void)didPressGetAdInfoWithSponsorable:(id)arg1;
- (void)didPressOpenWithSponsorable:(id)arg1;
- (void)didPressHideAllWithSponsorable:(id)arg1 withParentUnit:(id)arg2;
- (void)didPressHideWithSponsorable:(id)arg1 withParentUnit:(id)arg2;
- (id)_contextSentenceForStory:(id)arg1;
- (id)_modelForPage:(unsigned int)arg1;
- (void)_logVideoPlayForIndex:(unsigned int)arg1;
- (void)_playVideoAtIndex:(unsigned int)arg1;
- (void)_secondaryActionsTappedFromView:(id)arg1;
- (void)openAppAdStory:(id)arg1 fromView:(id)arg2 analyticsExtras:(id)arg3;
- (void)_installAppTapped:(int)arg1;
- (id)_appAdStoriesModel;
- (void)_seeMoreButtonTapped;
- (void)sideFeedItemViewDidTapStaticImageView:(id)arg1;
- (void)sideFeedItemViewDidTapSecondaryActionsButton:(id)arg1;
- (void)sideFeedItemViewDidTapBottomButton:(id)arg1;
- (void)logAnalyticsEvent:(id)arg1 itemPosition:(unsigned int)arg2 history:(id)arg3;
- (void)didSelectCellWithIndex:(unsigned int)arg1;
- (struct CGSize)sizeForItemAtIndex:(unsigned int)arg1;
- (void)didBecomeEmpty;
- (void)didChangeHeightAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)cellShouldShowSeparator:(unsigned int)arg1;
- (unsigned int)indexOfLastVisibleItem;
- (void)configureCell:(id)arg1 forIndex:(unsigned int)arg2;
- (void)willHideItemAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfItems;
- (void)dealloc;
- (void)loadView;
- (BOOL)validateModel;
- (id)uniqueIDForItemAtIndex:(unsigned int)arg1;
- (id)graphQLIDForItemPosition:(unsigned int)arg1;
- (id)trackingStringForItemPosition:(unsigned int)arg1;
- (id)getUnitNameForAnalytics;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


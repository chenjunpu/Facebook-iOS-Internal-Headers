//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBSideFeedUnitController.h"

#import "FBFeedSideFeedTrendingArticlesUnitViewDelegate-Protocol.h"
#import "FBUtilityCollectionViewDelegateFlowLayout-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBFeedSideFeedTrendingArticlesUnitView, FBPopoverActionSheet, NSMutableDictionary, NSOrderedSet, NSString, UITapGestureRecognizer;

@interface FBFeedSideFeedTrendingArticlesUnitController : FBSideFeedUnitController <UICollectionViewDataSource, FBUtilityCollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, FBFeedSideFeedTrendingArticlesUnitViewDelegate>
{
    FBFeedSideFeedTrendingArticlesUnitView *_articlesUnitView;
    UITapGestureRecognizer *_headerTapGestureRecognizer;
    NSMutableDictionary *_categoryImpressionHistory;
    NSMutableDictionary *_itemImpressionHistory;
    NSMutableDictionary *_swipeHistory;
    NSMutableDictionary *_clickHistory;
    NSMutableDictionary *_showMoreHistory;
    NSMutableDictionary *_showLessHistory;
    NSOrderedSet *_validModelEdges;
    FBPopoverActionSheet *_negativeFeedbackActionSheet;
}

+ (int)itemImageHeight;
+ (int)itemImageWidth;
+ (int)headerImageHeight;
+ (int)headerImageWidthForViewWidth:(float)arg1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_removeArticleAtIndex:(unsigned int)arg1 fromArticleListAtIndex:(unsigned int)arg2;
- (void)_hideItemAtIndexPath:(id)arg1;
- (void)_hideHeaderArticleAtIndex:(unsigned int)arg1;
- (id)_negativeFeedbackButtonItemPerformingBlock:(CDUnknownBlockType)arg1;
- (void)_handleCollectionNegativeFeedback:(id)arg1;
- (void)_handleHeaderArticleNegativeFeedback:(id)arg1;
- (void)_handleNegativeFeedback:(id)arg1 inView:(id)arg2 performingBlock:(CDUnknownBlockType)arg3;
- (BOOL)validateModel;
- (id)_storyForItemPosition:(unsigned int)arg1 inCategory:(unsigned int)arg2;
- (id)graphQLIDForItemPosition:(unsigned int)arg1 inCategory:(unsigned int)arg2;
- (id)trackingStringForItemPosition:(unsigned int)arg1 inCategory:(unsigned int)arg2;
- (id)graphQLIDForCategory:(unsigned int)arg1;
- (id)trackingStringForCategory:(unsigned int)arg1;
- (id)graphQLIDForItemPosition:(unsigned int)arg1;
- (id)trackingStringForItemPosition:(unsigned int)arg1;
- (void)_resetLoggingHistory;
- (id)_articlesModel;
- (void)_updateUnitHeader;
- (unsigned int)_limitArticleCount:(unsigned int)arg1;
- (int)_numberOfItemsInCollectionView;
- (void)_seeMoreButtonTapped;
- (void)_headerTapped;
- (void)_openArticleAtIndex:(int)arg1 fromListAtInex:(int)arg2;
- (id)_articleAtIndex:(int)arg1 fromListAtIndex:(int)arg2;
- (void)unitView:(id)arg1 didMoveToPage:(int)arg2 fromPage:(int)arg3;
- (unsigned int)numberOfVisibleArticlesInUnitView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 layout:(id)arg2 finalLayoutAttributes:(id)arg3 forDisappearingItemAtIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 layout:(id)arg2 initialLayoutAttributes:(id)arg3 forAppearingItemAtIndexPath:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)getUnitNameForAnalytics;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


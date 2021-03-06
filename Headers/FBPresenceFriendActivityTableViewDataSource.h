//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPresenceFeedDataSourceListener-Protocol.h"
#import "FBPresenceNuxPresenterListener-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBAnalyticsPrefetcherLogger, FBPresenceFriendActivityTableViewDataSourceListenerAnnouncer, FBPresenceNearbySectionDataSource, FBPresenceNuxCellTapListenerAnnouncer, FBPresenceStatusViewFactory, FBUserSession, NSArray, NSCache, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSString;
@protocol FBPresenceFavoritesSectionHeaderViewListener, UIScrollViewDelegate;

@interface FBPresenceFriendActivityTableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, FBPresenceFeedDataSourceListener, FBPresenceNuxPresenterListener>
{
    FBUserSession *_session;
    FBPresenceStatusViewFactory *_statusViewFactory;
    FBPresenceFriendActivityTableViewDataSourceListenerAnnouncer *_tableViewDataSourceAnnouncer;
    id <FBPresenceFavoritesSectionHeaderViewListener> _sectionHeaderViewListener;
    NSCache *_heightCache;
    NSDictionary *_scrollDelegateSelectorCache;
    NSArray *_pinned;
    NSArray *_favs;
    NSArray *_mostRecent;
    BOOL _inifiniteScrollEnabled;
    BOOL _mostRecentLoaded;
    NSMutableDictionary *_loggedStatuses;
    NSNumber *_loggedStatusesSessionID;
    BOOL _seeMoreFavsEnabled;
    BOOL _favsPageLoading;
    BOOL _moreFavsPagesAvailable;
    unsigned int _visibleFavsCount;
    unsigned int _initialTargetVisibleFavsCount;
    unsigned int _targetVisibleFavsCount;
    BOOL _rewriteOnly;
    BOOL _showInlineNux;
    FBPresenceNuxCellTapListenerAnnouncer *_nuxTapListenerAnnouncer;
    NSString *_presentedNuxID;
    NSMutableOrderedSet *_visibleSections;
    FBAnalyticsPrefetcherLogger *_prefetcherLogger;
    FBAnalyticsPrefetcherLogger *_pollPrefetcherLogger;
    FBPresenceNearbySectionDataSource *_nearbyFriendsSectionDataSource;
    id <UIScrollViewDelegate> _scrollDelegate;
}

@property(nonatomic) __weak id <UIScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (void).cxx_destruct;
- (void)nuxPresenterWillDismiss:(id)arg1;
- (void)nuxPresenterWillPresent:(id)arg1;
- (void)initTargetVisibleFavsCount:(unsigned int)arg1;
- (void)logImpressionOfCell:(id)arg1 atIndexPath:(id)arg2;
- (id)modelForIndexPath:(id)arg1;
- (id)nuxCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)seeMoreCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)shimmerCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)loadingCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)presenceCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (BOOL)sectionIsLoading:(unsigned int)arg1;
- (unsigned int)sectionForIndexPath:(id)arg1;
- (BOOL)isSeeMoreCellIndexPath:(id)arg1;
- (BOOL)isShimmerCellIndexPath:(id)arg1;
- (BOOL)isNuxCellIndexPath:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)isNuxVisibleInSection:(unsigned int)arg1;
- (void)updateMostRecent:(id)arg1;
- (void)updateFavs:(id)arg1 isTailLoad:(BOOL)arg2;
- (void)updatePinned:(id)arg1;
- (void)noMoreMostRecentPages;
- (void)noMoreFavsPages;
- (void)mostRecentChanged:(id)arg1;
- (void)reloadNearbyFriendsSection;
- (void)nearbyFriendsChanged:(id)arg1;
- (void)favsChanged:(id)arg1 isTailLoad:(BOOL)arg2;
- (void)pinnedChanged:(id)arg1;
- (void)feedChangedPinned:(id)arg1 favs:(id)arg2 nearby:(id)arg3 mostRecent:(id)arg4;
- (void)selfUpdateChanged:(id)arg1 likeSentence:(id)arg2 feedback:(id)arg3 isPending:(BOOL)arg4;
- (void)receivedAuthorName:(id)arg1 profilePicURL:(id)arg2;
- (void)loadSections;
- (void)validateSections;
- (void)resetCollapsedState:(id)arg1;
- (void)removeNuxCellTapListener:(id)arg1;
- (void)addNuxCellTapListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithSectionHeaderViewListener:(id)arg1 session:(id)arg2 statusViewFactory:(id)arg3 nearbyFriendsSectionDataSource:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


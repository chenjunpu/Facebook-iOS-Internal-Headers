//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentProvider-Protocol.h"
#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBPulseResultsRelatedPostsDownloaderDelegate-Protocol.h"
#import "FBSearchResultsControllerProtocol-Protocol.h"

@class FBComponentTableViewDataSource, FBDelegateForwarder, FBLoadingIndicatorView, FBPulseResultsRelatedPostsDownloader, FBResolvableProxyingNavigationCoordinator, FBSearchResultsContext, FBSearchResultsTransientViewStateHelper, FBUserSession, NSString, UIScrollView, UITableView;

@interface FBPulseResultsRelatedPostsViewController : UIViewController <FBPulseResultsRelatedPostsDownloaderDelegate, FBComponentTableViewDataSourceCellConfigProvider, CKComponentProvider, FBSearchResultsControllerProtocol>
{
    FBUserSession *_session;
    NSString *_phraseID;
    FBPulseResultsRelatedPostsDownloader *_downloader;
    UITableView *_tableView;
    FBDelegateForwarder *_tableViewDelegateForwarder;
    FBLoadingIndicatorView *_loadingIndicatorFooterView;
    FBResolvableProxyingNavigationCoordinator *_proxyingNavigationCoordinator;
    FBComponentTableViewDataSource *_tableViewDataSource;
    FBSearchResultsContext *_searchResultsContext;
    FBSearchResultsTransientViewStateHelper *_viewStateHelper;
    NSString *_pendingImpressionSource;
    BOOL _resultsLoaded;
    CDStruct_1180ccb7 _appLayoutExperimentConfig;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createTableViewDataSourceIfNeeded;
- (void)_updateViewState:(unsigned int)arg1;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (void)_addEdgesToComponentDataSource:(id)arg1;
- (void)downloaderDidUpdateEdges:(id)arg1;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)fb_showNavBarSearchField;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
@property(readonly, copy, nonatomic) NSString *resultsSessionID;
- (void)setNeedsToYieldImpressionWithSource:(id)arg1;
- (void)setViewState:(unsigned int)arg1;
- (void)setScrollsToTop:(BOOL)arg1;
@property(readonly, nonatomic) UIScrollView *contentScrollView;
- (void)loadIfEmpty;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, nonatomic) unsigned int resultType;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSession:(id)arg1 searchResultsContext:(id)arg2 phraseID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


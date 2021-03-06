//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBStoryStreamViewController.h"

#import "FBPostChannelStoriesFeedComposerBarDelegate-Protocol.h"

@class FBFeedOptimisticPostPerfLogger, FBFeedOutboxList, FBFeedOutboxPublicationHandler, FBFeedTableViewDataSource, FBMemPostChannel, FBPostChannelStoriesFeedComposerBarController, FBPostedSubstoryLoader, FBResolvableProxyingNavigationCoordinator, FBStoryStream, FBTableViewAggregatedDataSource, FBUserSession, NSString;
@protocol FBNavigationCoordinator;

@interface FBPostChannelStoriesFeedViewController : FBStoryStreamViewController <FBPostChannelStoriesFeedComposerBarDelegate>
{
    FBMemPostChannel *_postChannel;
    NSString *_viewerFBID;
    FBStoryStream *_storyStream;
    FBResolvableProxyingNavigationCoordinator *_proxyingNavigationCoordinator;
    FBTableViewAggregatedDataSource *_storiesDataSource;
    FBFeedTableViewDataSource *_storiesFeedDataSource;
    FBFeedOptimisticPostPerfLogger *_optimisticPerfLogger;
    FBFeedOutboxList *_outboxList;
    FBFeedOutboxPublicationHandler *_outboxPublicationHandler;
    FBPostChannelStoriesFeedComposerBarController *_composerBarController;
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBPostedSubstoryLoader *_postedSubstoryLoader;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (id)newstoryStreamWithAnalyticsUUID:(id)arg1 connection:(id)arg2 scenePath:(id)arg3;
- (id)newStreamDataSourceForSession:(id)arg1 graphQLID:(id)arg2 scenePath:(id)arg3;
- (BOOL)enableEarlyPTRFetch;
- (id)streamForPTR;
- (id)streamForAutoLoadTail;
- (id)stream;
- (id)feedDataSource;
- (BOOL)hasVisibleContent;
- (id)proxyingNavigationCoordinator;
- (void)resolveNavigationCoordinator;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)feedTableViewDataSource:(id)arg1 willEndUpdates:(id)arg2;
- (void)successfullyPublishedNewStoryWithPublisherData:(id)arg1 response:(id)arg2 sourceView:(id)arg3;
- (void)composerCompletedWithResult:(id)arg1;
- (void)openComposerAction;
- (void)dealloc;
- (id)initWithSession:(id)arg1 postChannel:(id)arg2 viewerFBID:(id)arg3 navigationCoordinator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


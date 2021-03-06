//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedOutboxListLifecycleListener-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol FBDelayedWorkPerformer, FBFeedOutboxListDelayListener;

@interface FBFeedOutboxListDelayScheduler : NSObject <FBFeedOutboxListLifecycleListener>
{
    CDStruct_d897c74e _configuration;
    id <FBDelayedWorkPerformer> _delayedWorkPerformer;
    id <FBFeedOutboxListDelayListener> _listener;
    NSMutableDictionary *_schedulingStateByPublicationIdentifier;
}

- (void).cxx_destruct;
- (void)updateOutboxListStoryWithProgress:(float)arg1 forPublication:(id)arg2;
- (void)transitionedToDisplayingStoryShowingPauseForComposerPublication:(id)arg1;
- (void)transitionedToDisplayingStoryShowingSlowPostMessageForComposerPublication:(id)arg1;
- (void)transitionedToDisplayingStoryForComposerPublication:(id)arg1;
- (void)cancelAnyOutstandingDelaysForComposerPublication:(id)arg1;
- (void)transitionedToNotDisplayingStoriesForComposerPublications:(id)arg1 publicationsCompleted:(BOOL)arg2;
- (void)transitionedToDisplayingStoryShowingTerminalFailureForComposerPublication:(id)arg1;
- (void)transitionedToDisplayingStoryShowingFailureForComposerPublication:(id)arg1;
- (void)transitionedToDisplayingStoryAnimatingToFullProgressForComposerPublication:(id)arg1;
- (void)transitionedToDisplayingStoryAnimatingToFakeProgressLimitForComposerPublication:(id)arg1;
- (void)scheduledDelayForShowingFullProgressTriggeredForPublicationWithIdentifier:(id)arg1;
- (void)transitionedToDisplayingStoryAnimatedToFullProgressForComposerPublication:(id)arg1;
- (void)scheduledDelayForStallingAtFakeProgressLimitTriggeredForPublicationWithIdentifier:(id)arg1;
- (void)transitionedToDisplayingStoryAnimatedToFakeProgressLimitForComposerPublication:(id)arg1;
- (void)scheduledDelayForShowingNoConnectivityMessageTriggeredForPublicationIdentifier:(id)arg1;
- (void)transitionedToDisplayingStoryShowingFailureWithNoConnectivityMessageForComposerPublication:(id)arg1;
- (id)initWithDelayedWorkPerformer:(id)arg1 configuration:(CDStruct_d897c74e)arg2 listener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


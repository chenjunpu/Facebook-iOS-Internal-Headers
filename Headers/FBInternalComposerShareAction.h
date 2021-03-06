//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCoreShareAction.h"

#import "FBComposeCoreShareAction-Protocol.h"

@class FBComposerAuthor, FBComposerPublishTarget, FBCoreShareableItem, FBUserSession, NSArray, NSDictionary, NSString;
@protocol FBCoreShareActionDelegate, FBNavigationCoordinator;

@interface FBInternalComposerShareAction : FBCoreShareAction <FBComposeCoreShareAction>
{
    FBCoreShareableItem *_shareable;
    FBComposerAuthor *_author;
    FBComposerPublishTarget *_publishTarget;
    NSString *_composerSourceType;
    NSString *_contentOrigin;
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    NSString *_analyticsModule;
    NSArray *_trackingCodes;
    NSDictionary *_analyticsExtras;
    id <FBCoreShareActionDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCoreShareActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_logConclusionAnalyticsWithCompositionId:(id)arg1;
- (void)performShareActionWithShareableURL:(id)arg1 shareableImageURL:(id)arg2 shareableImage:(id)arg3 shareTitle:(id)arg4 shareMessage:(id)arg5;
- (id)initWithShareable:(id)arg1 actor:(id)arg2 composerSourceType:(id)arg3 contentOrigin:(id)arg4 userSession:(id)arg5 navigationCoordinator:(id)arg6 analyticsModule:(id)arg7 trackingCodes:(id)arg8 analyticsExtras:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


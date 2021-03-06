//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedSecondaryAction-Protocol.h"

@class FBFeedSecondaryActionContext, FBMemFeedStory, NSString;
@protocol FBComposerFlowDelegate;

@interface FBFeedEditAction : NSObject <FBFeedSecondaryAction>
{
    FBMemFeedStory *_story;
    FBFeedSecondaryActionContext *_context;
    id <FBComposerFlowDelegate> _composerViewControllerDelegate;
}

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)icon;
- (id)detail;
- (id)title;
- (void)handleWithStory:(id)arg1 composerTapHandler:(id)arg2 navigationCoordinator:(id)arg3 session:(id)arg4;
- (void)performWithSourceView:(id)arg1 sourceRect:(struct CGRect)arg2;
- (id)initWithFeedStory:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


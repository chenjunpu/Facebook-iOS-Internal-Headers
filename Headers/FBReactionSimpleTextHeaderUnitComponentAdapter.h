//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseUnitComponentAdapter.h"

@class FBReactionAdapterContext, FBReactionCardHeaderView;
@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBReactionUnitComponentAdapterDelegate;

@interface FBReactionSimpleTextHeaderUnitComponentAdapter : FBReactionBaseUnitComponentAdapter
{
    FBReactionCardHeaderView *_componentView;
    id <FBQueriedReactionUnitComponentFieldsProtocol> _component;
    FBReactionAdapterContext *_context;
    id <FBReactionUnitComponentAdapterDelegate> delegate;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)performMagicTap;
- (id)componentView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 isFirst:(BOOL)arg5 isLast:(BOOL)arg6 indexPath:(id)arg7;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPhotoViewControllerDelegate-Protocol.h"

@class FBFeedComponentToolbox, FBFeedEventBus, FBMemFeedStory, FBMemStoryAttachment, NSArray, NSString;
@protocol FBFullScreenTransitionBoundsProvider;

@interface FBFeedComponentPhotoHandler : NSObject <FBPhotoViewControllerDelegate>
{
    BOOL _sponsored;
    FBFeedComponentToolbox *_toolbox;
    FBFeedEventBus *_eventBus;
    FBMemFeedStory *_story;
    FBMemStoryAttachment *_attachment;
    NSArray *_trackingCodes;
    NSArray *_trackingNodes;
    id <FBFullScreenTransitionBoundsProvider> _contentBoundsViewProvider;
}

@property(nonatomic) __weak id <FBFullScreenTransitionBoundsProvider> contentBoundsViewProvider; // @synthesize contentBoundsViewProvider=_contentBoundsViewProvider;
@property(copy, nonatomic) NSArray *trackingNodes; // @synthesize trackingNodes=_trackingNodes;
@property(copy, nonatomic) NSArray *trackingCodes; // @synthesize trackingCodes=_trackingCodes;
@property(readonly, nonatomic) FBMemStoryAttachment *attachment; // @synthesize attachment=_attachment;
@property(readonly, nonatomic) FBMemFeedStory *story; // @synthesize story=_story;
- (void).cxx_destruct;
- (id)_viewForLayer:(id)arg1;
- (id)_photosConsumptionReferrerForPhoto:(id)arg1 layoutIdiom:(unsigned int)arg2 userFBID:(id)arg3;
- (struct CGRect)photoViewController:(id)arg1 animationBoundsForView:(id)arg2;
- (void)openPhoto:(id)arg1 fromViewOrLayer:(id)arg2 photoViewProvider:(id)arg3 openInTaggingMode:(BOOL)arg4;
- (void)openPhoto:(id)arg1 fromViewOrLayer:(id)arg2;
- (id)initWithToolbox:(id)arg1 trackingCodes:(id)arg2 trackingNodes:(id)arg3 attachment:(id)arg4 story:(id)arg5 sponsored:(BOOL)arg6 eventBus:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


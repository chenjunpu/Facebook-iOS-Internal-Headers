//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBEventAnalyticTracker, FBFeedComponentToolbox, FBIntentAnalyticsInfo, FBMemEventInvitesFeedUnitItem;

@interface FBEventInviteRowComponent : CKCompositeComponent
{
    FBFeedComponentToolbox *_toolbox;
    FBMemEventInvitesFeedUnitItem *_unitItem;
    FBIntentAnalyticsInfo *_analyticInfo;
    FBEventAnalyticTracker *_tracker;
}

+ (id)eventLocationAttributedString:(id)arg1;
+ (id)startTimeColorForEvent:(id)arg1;
+ (id)newWithUnitItem:(id)arg1 toolbox:(id)arg2 tracker:(id)arg3;
- (void).cxx_destruct;
- (void)didTapRow:(id)arg1;

@end


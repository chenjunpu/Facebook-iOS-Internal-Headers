//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBExperimentManager, FBSoundController, PAFancyShareSheetScalableMetrics;
@protocol PAFancyShareSheetItemInteractionDelegate;

@interface PAFancyShareSheetComponentViewContext : NSObject
{
    PAFancyShareSheetScalableMetrics *_scalableMetrics;
    FBSoundController *_soundController;
    FBExperimentManager *_experimentManager;
    id <PAFancyShareSheetItemInteractionDelegate> _itemInteractionDelegate;
}

+ (id)contextWithScalableMetrics:(id)arg1 soundController:(id)arg2 experimentManager:(id)arg3 itemInteractionDelegate:(id)arg4;
@property(nonatomic) __weak id <PAFancyShareSheetItemInteractionDelegate> itemInteractionDelegate; // @synthesize itemInteractionDelegate=_itemInteractionDelegate;
@property(retain, nonatomic) FBExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(retain, nonatomic) FBSoundController *soundController; // @synthesize soundController=_soundController;
@property(retain, nonatomic) PAFancyShareSheetScalableMetrics *scalableMetrics; // @synthesize scalableMetrics=_scalableMetrics;
- (void).cxx_destruct;

@end


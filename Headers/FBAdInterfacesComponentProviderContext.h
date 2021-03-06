//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAdInterfacesComponentToolbox, FBAdInterfacesPromotionDataModel, FBAdInterfacesPromotionViewController;

@interface FBAdInterfacesComponentProviderContext : NSObject
{
    FBAdInterfacesPromotionViewController *_viewController;
    FBAdInterfacesComponentToolbox *_toolbox;
}

@property(readonly, nonatomic) __weak FBAdInterfacesPromotionViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) FBAdInterfacesComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;
- (id)feedComponentToolbox;
@property(readonly, nonatomic) FBAdInterfacesPromotionDataModel *dataModel;
- (id)initWithPromotionViewController:(id)arg1;
- (id)story;
- (BOOL)isAddBudgetExperimentEnabled;

@end


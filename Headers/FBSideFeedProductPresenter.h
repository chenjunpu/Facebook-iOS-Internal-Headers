//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBSideFeedProductPresentationController, FBUserSession;

@interface FBSideFeedProductPresenter : NSObject
{
    FBUserSession *_session;
    FBSideFeedProductPresentationController *_productPresentationController;
}

- (void).cxx_destruct;
- (id)_productPresentationControllerWithPresentingViewController:(id)arg1;
- (void)openDigitalGood:(id)arg1 fromView:(id)arg2 unitController:(id)arg3;
- (void)openApp:(id)arg1 withTrackingCode:(id)arg2 fromView:(id)arg3 unitController:(id)arg4;
- (id)initWithSession:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAuthControlling-Protocol.h"
#import "FBAuthenticationControllingDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FBAuthenticationViewController, FBRequesterConfiguration, NSString, UIAlertView;
@protocol FBAuthControllingDelegate, FBAuthLegacyFlowUIProviding, FBAuthUIPresenting;

@interface FBAuthLegacyFlowController : NSObject <FBAuthenticationControllingDelegate, UIAlertViewDelegate, FBAuthControlling>
{
    BOOL _deviceBasedLoginEnabled;
    id <FBAuthControllingDelegate> _authDelegate;
    id <FBAuthLegacyFlowUIProviding> _uiProvider;
    id <FBAuthUIPresenting> _uiPresenter;
    FBRequesterConfiguration *_requesterConfiguration;
    FBAuthenticationViewController *_authVC;
    UIAlertView *_alertView;
}

@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) FBAuthenticationViewController *authVC; // @synthesize authVC=_authVC;
@property(readonly, nonatomic) BOOL deviceBasedLoginEnabled; // @synthesize deviceBasedLoginEnabled=_deviceBasedLoginEnabled;
@property(readonly, nonatomic) FBRequesterConfiguration *requesterConfiguration; // @synthesize requesterConfiguration=_requesterConfiguration;
@property(readonly, nonatomic) id <FBAuthUIPresenting> uiPresenter; // @synthesize uiPresenter=_uiPresenter;
@property(readonly, nonatomic) id <FBAuthLegacyFlowUIProviding> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(nonatomic) __weak id <FBAuthControllingDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)authenticationController:(id)arg1 loginFailedWithError:(id)arg2;
- (void)authenticate;
- (id)init;
- (id)initWithUIProvider:(id)arg1 uiPresenter:(id)arg2 requesterConfiguration:(id)arg3 deviceBasedLoginEnabled:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


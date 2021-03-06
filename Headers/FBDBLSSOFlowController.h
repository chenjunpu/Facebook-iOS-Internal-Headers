//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAuthControlling-Protocol.h"
#import "FBAuthControllingDelegate-Protocol.h"
#import "FBAuthenticationMethodHandlerDelegate-Protocol.h"

@class FBAuthenticationSSOHandler, FBDBLPasswordFlowController, FBDBLStoredUser, FBRequesterConfiguration, NSString;
@protocol FBAuthControllingDelegate, FBAuthUIPresenting, FBDBLSSOFlowUIProviding;

@interface FBDBLSSOFlowController : NSObject <FBAuthControllingDelegate, FBAuthenticationMethodHandlerDelegate, FBAuthControlling>
{
    id <FBAuthControllingDelegate> _authDelegate;
    FBDBLStoredUser *_storedUser;
    id <FBDBLSSOFlowUIProviding> _uiProvider;
    id <FBAuthUIPresenting> _uiPresenter;
    FBRequesterConfiguration *_requesterConfiguration;
    FBDBLPasswordFlowController *_passwordFlowController;
    FBAuthenticationSSOHandler *_authHandler;
}

@property(retain, nonatomic) FBAuthenticationSSOHandler *authHandler; // @synthesize authHandler=_authHandler;
@property(retain, nonatomic) FBDBLPasswordFlowController *passwordFlowController; // @synthesize passwordFlowController=_passwordFlowController;
@property(readonly, nonatomic) FBRequesterConfiguration *requesterConfiguration; // @synthesize requesterConfiguration=_requesterConfiguration;
@property(readonly, nonatomic) id <FBAuthUIPresenting> uiPresenter; // @synthesize uiPresenter=_uiPresenter;
@property(readonly, nonatomic) id <FBDBLSSOFlowUIProviding> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(readonly, nonatomic) FBDBLStoredUser *storedUser; // @synthesize storedUser=_storedUser;
@property(nonatomic) __weak id <FBAuthControllingDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)_authenticateWithPasswordFlow;
- (id)machineIDForAuthenticationHandler;
- (void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2;
- (void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2;
- (void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2;
- (void)authenticationDeferred:(id)arg1 withReason:(id)arg2;
- (void)authenticationCompleted:(id)arg1 withResponse:(id)arg2;
- (void)authenticate;
- (id)init;
- (id)initWithUserInfo:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


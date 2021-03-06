//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAuthenticatingEnterPasscodeViewDelegate-Protocol.h"

@class FBAuthenticationEnterPasscodeView, FBDeviceBasedAccount, NSString;

@interface FBDBLSetPasscodeViewController : UIViewController <FBAuthenticatingEnterPasscodeViewDelegate>
{
    FBAuthenticationEnterPasscodeView *_enterPasscodeView;
    FBDeviceBasedAccount *_deviceBasedAccount;
    unsigned int _flowType;
    NSString *_providedPasscode;
}

- (void).cxx_destruct;
- (void)_networkRequestTimedOut:(id)arg1;
- (void)_showUnknownErrorBar;
- (void)_showNetworkErrorBar;
- (void)_handleSetPasscodeSuccess:(id)arg1;
- (void)_handleSetPasscodeError:(id)arg1 cancelled:(BOOL)arg2;
- (void)secondaryButtonTapped;
- (void)passcodeEntered:(id)arg1 attempt:(int)arg2;
- (id)_getInstruction;
- (id)_getTitle;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)init;
- (id)initWithDeviceBasedAccount:(id)arg1 flowType:(unsigned int)arg2 providedPasscode:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


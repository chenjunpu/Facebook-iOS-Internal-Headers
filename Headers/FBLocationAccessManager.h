//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CLLocationManager, FBAlertViewCoordinator, FBLocationAccessAuthorizationCache, FBLocationManager, NSString, UIAlertView;
@protocol FBLocationAccessManagerDelegate;

@interface FBLocationAccessManager : NSObject <UIAlertViewDelegate, CLLocationManagerDelegate>
{
    FBAlertViewCoordinator *_alertCoordinator;
    CLLocationManager *_nativeLocationManager;
    UIAlertView *_alertView;
    unsigned int _state;
    int _lastForegroundAuthorization;
    unsigned int _initRequestMode;
    BOOL _isUpdatingLocation;
    FBLocationAccessAuthorizationCache *_authCache;
    FBLocationManager *_locationManager;
    id <FBLocationAccessManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBLocationAccessManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)_willEnterInForeground:(id)arg1;
- (void)_didEnterInBackground:(id)arg1;
- (void)_willResignActive:(id)arg1;
- (void)_didBecomeActive:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)_buildInstructionAlert:(unsigned int)arg1;
- (id)_buildNotDeterminedAlert;
- (void)_showAuthorizationAlertWithAuthorization:(int)arg1;
- (id)_addLoggingContext:(id)arg1 action:(id)arg2;
- (void)_logLocationUserAction:(id)arg1 extra:(id)arg2;
- (void)_notifyDelegateWithAuthorization:(int)arg1 settingsChanged:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int requestedMode;
- (BOOL)_canAccessLocation:(int)arg1;
- (BOOL)canAccessLocation;
- (void)_userIsGrantingApp;
- (void)requestLocationAccess;
@property(readonly, nonatomic) FBLocationManager *locationManager;
- (void)_stopLocationManager;
- (void)_startLocationManager;
- (void)_reset;
@property(readonly, nonatomic) int authorizationStatus;
- (void)invalidate;
- (void)dealloc;
- (id)initWithLocationManager:(id)arg1 alertViewCoordinator:(id)arg2 requestMode:(unsigned int)arg3 authorizationCache:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


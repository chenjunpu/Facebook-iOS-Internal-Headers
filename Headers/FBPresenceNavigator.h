//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSnapshotViewControllerDelegate-Protocol.h"

@class FBSnapshotViewController, FBUserSession, NSString, NSURL, UIViewController, UIWindow;
@protocol FBNavigationCoordinator;

@interface FBPresenceNavigator : NSObject <FBSnapshotViewControllerDelegate>
{
    NSURL *_targetURL;
    CDUnknownBlockType _entityCardBlock;
    CDUnknownBlockType _overlayBlock;
    FBSnapshotViewController *_snapshotViewController;
    BOOL _entityCardOpen;
    BOOL _overlayOpen;
    BOOL _navigationInProgress;
    BOOL _teardownEnabled;
    id <FBNavigationCoordinator> _navigationCoordinator;
    UIWindow *_window;
    CDUnknownBlockType _preNavigationBlock;
    CDUnknownBlockType _postNavigationBlock;
    FBUserSession *_session;
    UIViewController *_parentViewController;
    UIViewController *_overlayViewController;
}

@property(retain, nonatomic) UIViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(nonatomic) BOOL teardownEnabled; // @synthesize teardownEnabled=_teardownEnabled;
@property(nonatomic) BOOL navigationInProgress; // @synthesize navigationInProgress=_navigationInProgress;
@property(nonatomic) BOOL overlayOpen; // @synthesize overlayOpen=_overlayOpen;
@property(nonatomic) BOOL entityCardOpen; // @synthesize entityCardOpen=_entityCardOpen;
@property(retain, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType postNavigationBlock; // @synthesize postNavigationBlock=_postNavigationBlock;
@property(copy, nonatomic) CDUnknownBlockType preNavigationBlock; // @synthesize preNavigationBlock=_preNavigationBlock;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak id <FBNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
- (void).cxx_destruct;
- (void)snapshotViewControllerDidAppear:(id)arg1;
- (void)reset;
- (void)_cleanupAndTeardown;
- (void)hideOverlay;
- (void)showPingOverlayForPerson:(id)arg1;
- (void)showOverlayViewController:(id)arg1;
- (void)showPermalinkOverlayForPerson:(id)arg1;
- (void)showEntityCardForEntities:(id)arg1 selectedEntityID:(id)arg2 title:(id)arg3;
- (void)_entityCardNavigationFinished;
- (void)_setupNavigationWithTeardownEnabled:(BOOL)arg1;
- (void)navigateToURL:(id)arg1;
- (void)_performNavigation;
- (BOOL)_shouldPerformNavigation;
- (id)initWithSession:(id)arg1 parentViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


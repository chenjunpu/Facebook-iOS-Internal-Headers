//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBStreamListener-Protocol.h"

@class FBClairvoyantNetworker, FBEarlyFeedRequestInfo, FBUserSession, NSString;
@protocol OS_dispatch_queue;

@interface FBEarlyFeedRequestManager : NSObject <FBStreamListener>
{
    FBEarlyFeedRequestInfo *_checkedInRequestInfo;
    NSObject<OS_dispatch_queue> *_internalQueue;
    FBUserSession *_session;
    unsigned int _state;
    FBClairvoyantNetworker *_earlyRequestNetworker;
}

- (void).cxx_destruct;
- (id)_feedStreamForCurrentStateWithEnableUDPPriming:(BOOL)arg1;
- (void)laterRequestOpportunity;
- (void)earlyRequestOpportunity;
- (void)clearRequestInfo;
- (void)recordRequestForStreamConfiguration:(id)arg1 cursor:(id)arg2;
- (void)stream:(id)arg1 didFinishLoading:(unsigned int)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


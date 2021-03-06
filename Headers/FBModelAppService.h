//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppService-Protocol.h"

@class FBExceptionHandler, FBQueuePerformer, FBUserSession, NSSet, NSString;
@protocol FBServiceTransactionMutating;

@interface FBModelAppService : NSObject <FBAppService>
{
    FBExceptionHandler *_exceptionHandler;
    FBUserSession *_session;
    FBQueuePerformer *_queuePerformer;
    id <FBServiceTransactionMutating> _token;
}

- (void).cxx_destruct;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)signalAppServiceToHandleInitialSessionIdle;
- (void)_processViewerInfo:(id)arg1;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
- (void)parseResponse:(id)arg1 withSession:(id)arg2 flows:(id)arg3;
- (void)_fetchUserNuxState;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (id)init;
- (id)initWithExceptionHandler:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


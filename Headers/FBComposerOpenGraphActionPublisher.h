//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerPublisher-Protocol.h"
#import "FBMediaUploadItemManagerDelegate-Protocol.h"
#import "FBNetworkerRequestDelegate-Protocol.h"

@class FBComposerLogger, FBComposerPublisherData, FBMediaUploadItemManager, FBNetworkerRequest, FBUserSession, NSString;
@protocol FBComposerPublisherStatusListener;

@interface FBComposerOpenGraphActionPublisher : NSObject <FBNetworkerRequestDelegate, FBMediaUploadItemManagerDelegate, FBComposerPublisher>
{
    BOOL _uploadingInBackground;
    float _totalProgress;
    unsigned int _publishBackgroundTaskIdentifier;
    BOOL _requestFinished;
    FBComposerLogger *_logger;
    id <FBComposerPublisherStatusListener> _listener;
    FBUserSession *_userSession;
    BOOL _preview;
    BOOL _retry;
    NSString *_channel;
    FBComposerPublisherData *_publisherData;
    FBMediaUploadItemManager *_uploadManager;
    FBNetworkerRequest *_request;
}

@property(nonatomic, getter=isRetry) BOOL retry; // @synthesize retry=_retry;
@property(retain, nonatomic) FBNetworkerRequest *request; // @synthesize request=_request;
@property(nonatomic, getter=isPreview) BOOL preview; // @synthesize preview=_preview;
@property(readonly, nonatomic) FBMediaUploadItemManager *uploadManager; // @synthesize uploadManager=_uploadManager;
@property(readonly, nonatomic) FBComposerPublisherData *publisherData; // @synthesize publisherData=_publisherData;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)_addUserObjectPublishRequestsToBatchRequest:(id)arg1;
- (id)_newOpenGraphActionPublishRequest;
- (id)_constructPublishActionPath;
- (id)_actionParameters;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_publishComplete:(id)arg1;
- (void)_publishOpenGraphAction;
- (void)_publish:(BOOL)arg1;
- (void)_startUploadAndPublishMediaAttachments:(BOOL)arg1;
- (void)_updateAttachmentsAndPublishOpenGraphAction;
- (void)uploadManager:(id)arg1 didUploadMediaItem:(id)arg2 failWithError:(id)arg3;
- (void)uploadManager:(id)arg1 didUpdateTotalProgress:(float)arg2;
- (void)uploadManager:(id)arg1 didFinishMediaUploadItem:(id)arg2;
- (void)uploadManager:(id)arg1 didStartMediaUploadItem:(id)arg2;
- (void)completedUploadAllMedia:(id)arg1;
- (void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didStartWithStatus:(id)arg2;
- (void)stoppingPublishingDueToUnexpectedReason;
- (void)cancelPublishingPublication:(id)arg1 withReason:(id)arg2;
- (void)restorePausedPublication:(id)arg1;
- (void)pausePublication:(id)arg1;
- (void)retryPublishingPublisherData:(id)arg1 withSource:(unsigned int)arg2;
- (void)publish:(id)arg1;
- (id)publishedData;
- (void)dealloc;
- (id)initWithPublisherData:(id)arg1 uploadManager:(id)arg2 logger:(id)arg3 listener:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


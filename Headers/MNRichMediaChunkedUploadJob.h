//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNetworkerRequestDelegate-Protocol.h"
#import "MNRichMediaUploadJob-Protocol.h"

@class FBGraphRequest, MNRichMediaContent, MNRichMediaUploadConfig, MNRichMediaUploadMetricsBuilder, NSMutableArray, NSMutableDictionary, NSString;
@protocol FBNetworkDispatch, MNRichMediaUploadListener, OS_dispatch_queue;

@interface MNRichMediaChunkedUploadJob : NSObject <MNRichMediaUploadJob, FBNetworkerRequestDelegate>
{
    MNRichMediaContent *_content;
    MNRichMediaUploadConfig *_config;
    id <FBNetworkDispatch> _networkDispatcher;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serverSessionID;
    MNRichMediaUploadMetricsBuilder *_metricsBuilder;
    struct MNRichMediaChunkedUploadJobBlueprint _blueprint;
    struct MNRichMediaChunkedUploadStatus _status;
    unsigned int _numFinalRequestAttempts;
    FBGraphRequest *_finalRequest;
    NSMutableArray *_chunks;
    NSMutableArray *_pendingChunks;
    NSMutableDictionary *_chunkRequests;
    NSMutableDictionary *_chunkStates;
    unsigned int *_doubleCheckChunkSuccesses;
    NSString *_token;
    id <MNRichMediaUploadListener> _listener;
    struct MNRichMediaUploadJobMetadata _uploadMetadata;
}

@property(retain, nonatomic) id <MNRichMediaUploadListener> listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) struct MNRichMediaUploadJobMetadata uploadMetadata; // @synthesize uploadMetadata=_uploadMetadata;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)_tryFinalRequestAgain;
- (void)_requestMediaFBID;
- (void)_allChunksUploaded;
- (void)_chunkDidProgress:(unsigned int)arg1 progress:(float)arg2 complete:(BOOL)arg3;
- (void)_chunkDidUpload:(unsigned int)arg1 withUploadResponseID:(id)arg2;
- (void)_chunkDidFail:(unsigned int)arg1 withCode:(long)arg2;
- (void)_sendAllChunksForCurrentSession;
- (void)_firstChunkDidUploadWithSessionID:(id)arg1;
- (void)_sendFirstChunk;
- (void)_sendPendingChunk;
- (void)_sendUploadRequestForChunk:(id)arg1;
- (id)_generateResponseHandlerForChunkIndex:(unsigned int)arg1;
- (void)_sendOrPend:(unsigned int)arg1;
- (void)_cancelAllInFlightRequests;
- (id)_readChunk:(unsigned int)arg1 toTempMemoryFromFile:(id)arg2;
- (id)_readChunkToTempMemory:(unsigned int)arg1 retryThisManyTimes:(unsigned int)arg2;
- (void)_uploadDidRegress:(long long)arg1;
- (void)_uploadDidProgressToBytes:(long long)arg1 triggerCallback:(BOOL)arg2 triggerMetricsUpdate:(BOOL)arg3;
- (void)_uploadDidProgressByBytes:(long long)arg1;
- (void)_uploadHasFailedWithError:(unsigned int)arg1;
- (void)_uploadHasSucceededWithServerMediaFBID:(id)arg1;
- (void)_announceProgress:(struct MNRichMediaUploadJobProgressInformation)arg1;
- (void)_announceCancellation;
- (void)_announceFailure:(unsigned int)arg1;
- (void)_announceSuccess:(id)arg1;
- (void)cancel;
- (struct MNRichMediaUploadJobProgressInformation)mostRecentUploadProgressInformation;
- (void)_resumeUploadingChunks;
- (void)_setStatus:(unsigned int)arg1;
- (void)_startFromScratch;
- (void)_setResumed;
- (void)upload;
- (void)dealloc;
- (void)_setStatusToUnstarted;
- (void)_initializeMetrics;
- (void)_initializeChunks;
- (void)_calculateBlueprint;
- (void)_setup;
- (id)initWithContent:(id)arg1 config:(id)arg2 listener:(id)arg3 networkDispatcher:(id)arg4 queue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBLegacyVideoPlayerViewDelegate-Protocol.h"
#import "FBVideoPlaybackController-Protocol.h"

@class FBLegacyVideoPlayerLogger, FBLegacyVideoPlayerView, FBUserSession, FBVideoInitializationTracker, FBVideoPlaybackEventListenerAnnouncer, FBVideoPlaybackItem, NSString, UIView;
@protocol FBVideoPlaybackLoggingDataProvider;

@interface FBLegacyVideoPlaybackController : NSObject <FBLegacyVideoPlayerViewDelegate, FBVideoPlaybackController>
{
    FBUserSession *_session;
    FBVideoPlaybackItem *_videoPlaybackItem;
    FBLegacyVideoPlayerLogger *_logger;
    FBVideoPlaybackEventListenerAnnouncer *_announcer;
    FBLegacyVideoPlayerView *_videoPlayerView;
}

@property(retain, nonatomic) FBLegacyVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
- (void).cxx_destruct;
- (void)videoView:(id)arg1 didUpdatePlaybackTime:(double)arg2;
- (void)videoView:(id)arg1 playerIsStalled:(BOOL)arg2;
- (void)videoView:(id)arg1 didUpdateLoadedTime:(double)arg2;
- (void)videoView:(id)arg1 isInFullScreenMode:(BOOL)arg2;
- (void)videoViewIsReadyToPlay:(id)arg1;
- (void)videoView:(id)arg1 failedWithError:(id)arg2;
- (void)videoView:(id)arg1 didMute:(BOOL)arg2;
- (void)videoViewDidPlay:(id)arg1;
- (void)videoViewDidStall:(id)arg1;
- (void)videoViewDidPause:(id)arg1;
- (void)videoViewDidFinishPlaying:(id)arg1;
- (BOOL)isScrubbingSupported;
- (BOOL)isEligibleForDefinition:(int)arg1;
- (int)playableClientProxyDefinition;
- (id)playableURL;
@property(retain, nonatomic) id <FBVideoPlaybackLoggingDataProvider> loggingProvider;
- (void)removeVideoPlaybackEventListener:(id)arg1;
- (void)addVideoPlaybackEventListener:(id)arg1;
@property(nonatomic) BOOL mute;
@property(nonatomic) BOOL showsVideoPreviewImage;
@property(readonly, nonatomic) int state;
@property(nonatomic) int playbackQuality;
@property(readonly, nonatomic) BOOL invalidated;
- (void)finishScrubbing;
- (void)scrubToPlaybackTime:(double)arg1;
- (void)beginScrubbing;
- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopBuffering;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
@property(copy, nonatomic) NSString *videoGravity;
@property(readonly, nonatomic) struct CGSize bestEffortVideoSize;
@property(readonly, nonatomic) BOOL isVisuallyStalled;
@property(readonly, nonatomic) BOOL isAtEndOfVideo;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double videoTimeLoaded;
@property(readonly, nonatomic) double currentVideoTime;
@property(readonly, nonatomic) FBVideoPlaybackItem *currentVideoPlaybackItem;
- (void)replaceVideoPlaybackItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSession:(id)arg1 usingVideoPlayerView:(id)arg2;
- (id)initWithVideoPlayerView:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) FBVideoInitializationTracker *videoInitializationTracker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


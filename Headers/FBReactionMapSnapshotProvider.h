//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMapSnapshotRequest, FBUserSession, NSMapTable;

@interface FBReactionMapSnapshotProvider : NSObject
{
    FBUserSession *_session;
    CDStruct_feeb6407 _region;
    struct CGImage *_snapshot;
    NSMapTable *_weakListeners;
    FBMapSnapshotRequest *_request;
}

@property(retain) FBMapSnapshotRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_announceSnapshot;
- (void)_didCaptureSnapshot:(struct CGImage *)arg1;
- (BOOL)executeRequestWithImageSize:(struct CGSize)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithSession:(id)arg1 region:(CDStruct_feeb6407)arg2;

@end


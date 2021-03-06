//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSessionClassProvidable-Protocol.h"

@class FBUserSession, NSString;

@interface MNAdaptiveImageDownloader : NSObject <FBSessionClassProvidable>
{
    FBUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)updateScenePath:(id)arg1 andPriority:(int)arg2 forImageDownload:(id)arg3;
- (void)cancelImageDownload:(id)arg1;
- (id)_downloadWithUrl:(id)arg1 callPath:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)downloadImageWithAdaptiveDownloaderConfiguration:(id)arg1 callPath:(id)arg2 callbackQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


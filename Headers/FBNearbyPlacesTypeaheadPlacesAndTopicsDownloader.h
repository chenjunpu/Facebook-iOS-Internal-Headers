//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;
@protocol FBNearbyPlacesTypeaheadPlacesAndTopicsDownloaderDelegate, FBServiceTransactionMutating;

@interface FBNearbyPlacesTypeaheadPlacesAndTopicsDownloader : NSObject
{
    id <FBServiceTransactionMutating> _requestToken;
    FBUserSession *_session;
    id <FBNearbyPlacesTypeaheadPlacesAndTopicsDownloaderDelegate> _delegate;
}

@property(nonatomic) __weak id <FBNearbyPlacesTypeaheadPlacesAndTopicsDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)_logDebugInfoWithEvent:(id)arg1 searchQuery:(id)arg2 searchLocation:(id)arg3 userLocation:(id)arg4;
- (void)fetchRequestWithSearchQuery:(id)arg1 searchLocation:(id)arg2 userLocation:(id)arg3;
- (id)initWithSession:(id)arg1;

@end


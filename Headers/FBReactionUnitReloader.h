//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, NSMutableDictionary, NSString;
@protocol FBReactionUnitReloaderDelegate;

@interface FBReactionUnitReloader : NSObject
{
    NSString *_reactionSessionId;
    NSString *_surface;
    NSString *_targetID;
    FBUserSession *_session;
    NSMutableDictionary *_pendingUnitIDsToRetryCount;
    NSMutableDictionary *_unitLastReloadTimes;
    NSMutableDictionary *_unitsToReload;
    BOOL _paused;
    id <FBReactionUnitReloaderDelegate> _delegate;
}

@property(nonatomic) __weak id <FBReactionUnitReloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
- (float)_retryDelayForRetryNumber:(unsigned int)arg1;
- (void)_executeSuccessForUnitReload:(id)arg1 withInnerRequest:(id)arg2 result:(id)arg3 retryNumber:(unsigned int)arg4;
- (void)_reloadUnit:(id)arg1 withLocation:(id)arg2;
- (void)_handleFailureForRequestWithUnit:(id)arg1 location:(id)arg2;
- (void)reloadUnit:(id)arg1 withLocation:(id)arg2;
- (id)initWithSession:(id)arg1 targetID:(id)arg2 surface:(id)arg3 reactionSessionId:(id)arg4;
- (id)init;

@end

